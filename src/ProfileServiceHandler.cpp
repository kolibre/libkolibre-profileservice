/*
 * Copyright (C) 2012 Kolibre
 *
 * This file is part of kolibre-profileservice.
 *
 * Kolibre-profileservice is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Kolibre-profileservice is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with kolibre-profileservice. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ProfileServiceHandler.h"
#include "axis2_stub_Kolibre_Profile.h"
#include "axis2c_client_home.h"

#include <log4cxx/logger.h>
#include <axis2_http_transport.h>

#define AXIS2_LOCATION(file, line) ::log4cxx::spi::LocationInfo(file, "", line)

// create logger which will become a child to logger kolibre.profileservice
log4cxx::LoggerPtr psHandlerLog(log4cxx::Logger::getLogger("kolibre.profileservice.handler"));
log4cxx::LoggerPtr psAxisLog(log4cxx::Logger::getLogger("kolibre.profileservice.axis"));

void AXIS2_CALL axis_log_ops_free( axutil_allocator_t * allocator,
                                   struct axutil_log * log );

void AXIS2_CALL axis_log_ops_write( axutil_log_t * log,
                                    const axis2_char_t * buffer,
                                    axutil_log_levels_t level,
                                    const axis2_char_t * file,
                                    const int line );

/**
 * Constructor
 *
 * @param uri The URI to a Profile service
 * @param useragent The user-agent property in the HTTP header
 */
ProfileServiceHandler::ProfileServiceHandler(const std::string uri, const std::string useragent)
{
    lastErrorNumber_ = STATUS_SUCCESS;
    lastSoapFaultReason_ = "";

    // we can set axis log level to smallest possible since log4cxx takes care of the output
    env = axutil_env_create_all(NULL, AXIS2_LOG_LEVEL_TRACE);

    if (axutil_env_check_status(env) != AXIS2_ERROR_NONE)
    {
        LOG4CXX_ERROR(psHandlerLog, "Axis2 env creation failed, error message: '" << AXIS2_ERROR_GET_MESSAGE(env->error) << "'");
        return;
    }

    // override built-in logging
    log_ops = new axutil_log_ops;
    log_ops->free = axis_log_ops_free;
    log_ops->write = axis_log_ops_write;
    env->log->ops = log_ops;

    // determine which path to use as client home
#ifdef WIN32
    std::string client_home = ".";
#else
    std::string client_home = AXIS2C_CLIENT_HOME;
#endif

    // user can override the default path with AXIS2C_CLIENT_HOME environment variable
    if (AXIS2_GETENV("AXIS2C_CLIENT_HOME"))
    {
        client_home = AXIS2_GETENV("AXIS2C_CLIENT_HOME");
    }

    LOG4CXX_INFO(psHandlerLog, "Creating profile service stub");
    LOG4CXX_DEBUG(psHandlerLog, "uri = " << uri);
    LOG4CXX_DEBUG(psHandlerLog, "client_home = " << client_home);

    stub = axis2_stub_create_Kolibre_Profile(env, client_home.c_str(), uri.c_str());

    if (NULL == stub || axutil_env_check_status(env) != AXIS2_SUCCESS)
    {
        LOG4CXX_ERROR(psHandlerLog, "Axis2 stub creation failed, error message '" << AXIS2_ERROR_GET_MESSAGE(env->error) << "'");
        // There is no way to recover from this other than
        // creating a new instance of this class.
        return;
    }
    else
    {
        axis2_options_t *options = axis2_stub_get_options(stub, env);
        axis2_options_set_manage_session(options, env, AXIS2_TRUE);

        // Set User-agent property (need patched axis2_libcurl.c for this to work)
        if (not useragent.empty())
        {
            axutil_property_t *property = axutil_property_create(env);
            axutil_property_set_value(property, env, axutil_strdup(env, useragent.c_str()));
            axis2_options_set_property(options, env, AXIS2_HTTP_HEADER_USER_AGENT, property);
            axis2_options_set_xml_parser_reset(options, env, AXIS2_FALSE);
        }
    }
}

/**
 * Initiate the status map and store it for later use
 */
void ProfileServiceHandler::initiateStatusMap()
{
    // Generate with and manually fix
    // grep AXIS2_ERROR.*, axis2c-src-1.6.0/util/include/axutil_error.h | sed 's/\([0-9A-Z_]*\),/statusMap_\[\1\] = ERROR_OTHER;/'

    statusMap_[AXIS2_ERROR_NONE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_MEMORY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_NULL_PARAM] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_BLOCKING_INVOCATION_EXPECTS_RESPONSE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CANNOT_INFER_TRANSPORT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CLIENT_SIDE_SUPPORT_ONLY_ONE_CONF_CTX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MEP_CANNOT_BE_NULL_IN_MEP_CLIENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MEP_MISMATCH_IN_MEP_CLIENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TWO_WAY_CHANNEL_NEEDS_ADDRESSING] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UNKNOWN_TRANSPORT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UNSUPPORTED_TYPE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OPTIONS_OBJECT_IS_NOT_SET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SOAP_ENVELOPE_STATE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_MSG_CTX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_SVC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_SVC_GRP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SERVICE_NOT_YET_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CONFIG_NOT_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_DATA_ELEMENT_IS_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_IN_FLOW_NOT_ALLOWED_IN_TRS_OUT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_HANDLER_STATE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODUELE_REF] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODUELE_REF_BY_OP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODULE_CONF] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_DESC_BUILDER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_NOT_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_VALIDATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_XML_NOT_FOUND_FOR_THE_MODULE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_DISPATCHER_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OP_NAME_MISSING] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OUT_FLOW_NOT_ALLOWED_IN_TRS_IN] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPO_CAN_NOT_BE_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOSITORY_NOT_EXIST] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_LISTENER_INIT_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SERVICE_XML_NOT_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_NAME_ERROR] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TRANSPORT_SENDER_ERROR] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SVC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CANNOT_CORRELATE_MSG] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_COULD_NOT_MAP_MEP_URI_TO_MEP_CONSTANT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MESSAGE_ADDITION] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_MODULE_DESC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_PARAM_CONTAINER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_ALREADY_ENGAGED_TO_OP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_ALREADY_ENGAGED_TO_SVC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_ALREADY_ENGAGED_TO_SVC_GRP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PARAMETER_LOCKED_CANNOT_OVERRIDE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_EMPTY_SCHEMA_LIST] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_BEFORE_AFTER_HANDLERS_SAME] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_HANDLER_RULES] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODULE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_PHASE_FIRST_HANDLER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_PHASE_LAST_HANDLER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_CONF] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_PROCESSING_FAULT_ALREADY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NOWHERE_TO_SEND_FAULT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PHASE_ADD_HANDLER_INVALID] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PHASE_FIRST_HANDLER_ALREADY_SET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PHASE_LAST_HANDLER_ALREADY_SET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TWO_SVCS_CANNOT_HAVE_SAME_NAME] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODULE_REF] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_PHASE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_TRANSPORT_IN_CONFIGURED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_TRANSPORT_OUT_CONFIGURED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PHASE_IS_NOT_SPECIFED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SERVICE_MODULE_CAN_NOT_REFER_GLOBAL_PHASE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_SCHEMA_IS_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OM_ELEMENT_INVALID_STATE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OM_ELEMENT_MISMATCH] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_RPC_NEED_MATCHING_CHILD] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UNKNOWN_STYLE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_STRING_DOES_NOT_REPRESENT_A_VALID_NC_NAME] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_HTTP_CLIENT_TRANSPORT_ERROR] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_HTTP_REQUEST_NOT_SENT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_INVALID_HEADER] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_INVALID_HTTP_HEADER_START_LINE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_INVALID_TRANSPORT_PROTOCOL] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_BODY] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_CONFIGURATION_CONTEXT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_HTTP_VERSION] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_IN_STREAM_IN_MSG_CTX] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_OM_OUTPUT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_SOAP_ENVELOPE_IN_MSG_CTX] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_STREAM_IN_CHUNKED_STREAM] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_STREAM_IN_RESPONSE_BODY] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_URL] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_INVALID_URL_FORMAT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_DUPLICATE_URL_REST_MAPPING] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_OUT_TRNSPORT_INFO_NULL] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_RESPONSE_CONTENT_TYPE_MISSING] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_RESPONSE_TIMED_OUT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_RESPONSE_SERVER_SHUTDOWN] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_SOAP_ENVELOPE_OR_SOAP_BODY_NULL] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_SSL_ENGINE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_SSL_NO_CA_FILE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_WRITING_RESPONSE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_REQD_PARAM_MISSING] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_UNSUPPORTED_SCHEMA_TYPE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_SVC_OR_OP_NOT_FOUND] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NO_MSG_INFO_HEADERS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_COULD_NOT_OPEN_FILE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_DLL_CREATE_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_DLL_LOADING_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ENVIRONMENT_IS_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_FILE_NAME_NOT_SET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_DLL_DESC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_HANDLER_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INDEX_OUT_OF_BOUNDS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_ADDRESS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_FD] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SOCKET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_PARAM] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MSG_RECV_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_SUCH_ELEMENT] = ERROR_MISSING_ELEMENT;
    statusMap_[AXIS2_ERROR_SOCKET_BIND_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOCKET_ERROR] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOCKET_LISTEN_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_SKELETON_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TRANSPORT_RECV_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TRANSPORT_SENDER_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UUID_GEN_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_POSSIBLE_DEADLOCK] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INTERFACE_OR_PORT_TYPE_NOT_FOUND_FOR_THE_BINDING] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INTERFACES_OR_PORTS_NOT_FOUND_FOR_PARTIALLY_BUILT_WOM] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_WSDL_OP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_WSDL_SVC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MEP_CANNOT_DETERMINE_MEP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_BINDING_NAME_IS_REQUIRED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_INTERFACE_NAME_IS_REQUIRED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_PARSER_INVALID_STATE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_SVC_NAME_IS_REQUIRED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ATTACHMENT_MISSING] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_BUILDER_DONE_CANNOT_PULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_BUILDER_STATE_CANNOT_DISCARD] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_BUILDER_STATE_LAST_NODE_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_DOCUMENT_STATE_ROOT_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_DOCUMENT_STATE_UNDEFINED_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_EMPTY_NAMESPACE_URI] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ITERATOR_NEXT_METHOD_HAS_NOT_YET_BEEN_CALLED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ITERATOR_REMOVE_HAS_ALREADY_BEING_CALLED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_XML_READER_ELEMENT_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_XML_READER_VALUE_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CREATING_XML_STREAM_READER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CREATING_XML_STREAM_WRITER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_ATTRIBUTE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_ATTRIBUTE_WITH_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_ATTRIBUTE_WITH_NAMESPACE_PREFIX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_COMMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_DATA_SOURCE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_DEFAULT_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_DTD] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_EMPTY_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_EMPTY_ELEMENT_WITH_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_EMPTY_ELEMENT_WITH_NAMESPACE_PREFIX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_END_DOCUMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_END_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_PROCESSING_INSTRUCTION] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_START_DOCUMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_START_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_START_ELEMENT_WITH_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_START_ELEMENT_WITH_NAMESPACE_PREFIX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_CDATA] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_XML_PARSER_INVALID_MEM_TYPE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_BASE_TYPE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SOAP_NAMESPACE_URI] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SOAP_VERSION] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_VALUE_FOUND_IN_MUST_UNDERSTAND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_CODE_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_DETAIL_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_NODE_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_REASON_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_ROLE_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_SUB_CODE_VALUES_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_VALUE_ENCOUNTERED_IN_CODE_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MUST_UNDERSTAND_SHOULD_BE_1_0_TRUE_FALSE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OM_ELEMENT_EXPECTED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ONLY_CHARACTERS_ARE_ALLOWED_HERE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ONLY_ONE_SOAP_FAULT_ALLOWED_IN_BODY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP11_FAULT_ACTOR_SHOULD_NOT_HAVE_CHILD_ELEMENTS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_BUILDER_ENVELOPE_CAN_HAVE_ONLY_HEADER_AND_BODY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_BUILDER_HEADER_BODY_WRONG_ORDER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_BUILDER_MULTIPLE_BODY_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_BUILDER_MULTIPLE_HEADERS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_FAULT_CODE_DOES_NOT_HAVE_A_VALUE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_FAULT_REASON_ELEMENT_SHOULD_HAVE_A_TEXT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_FAULT_ROLE_ELEMENT_SHOULD_HAVE_A_TEXT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_FAULT_VALUE_SHOULD_BE_PRESENT_BEFORE_SUB_CODE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_MESSAGE_DOES_NOT_CONTAIN_AN_ENVELOPE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_MESSAGE_FIRST_ELEMENT_MUST_CONTAIN_LOCAL_NAME] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_THIS_LOCALNAME_IS_NOT_SUPPORTED_INSIDE_THE_REASON_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_THIS_LOCALNAME_IS_NOT_SUPPORTED_INSIDE_THE_SUB_CODE_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_THIS_LOCALNAME_NOT_SUPPORTED_INSIDE_THE_CODE_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TRANSPORT_LEVEL_INFORMATION_DOES_NOT_MATCH_WITH_SOAP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UNSUPPORTED_ELEMENT_IN_SOAP_FAULT_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRONG_ELEMENT_ORDER_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_SKEL_INVALID_XML_FORMAT_IN_REQUEST] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_SKEL_INPUT_OM_NODE_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_SKEL_INVALID_OPERATION_PARAMETERS_IN_SOAP_REQUEST] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_NOT_AUTHENTICATED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_UNSUPPORTED_MODE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_EXPIRED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_NOT_IMPLEMENTED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_NOT_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_BAD_SEARCH_TEXT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ELEMENT_WITH_NO_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_POLICY_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ALL_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_EXACTLYONE_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_REFERENCE_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ASSERTION_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ALL_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_EXACTLYONE_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_POLICY_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_NORMALIZATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_WRONG_INPUT_FOR_MERGE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_CROSS_PRODUCT_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_NO_CHILDREN_POLICY_COMPONENTS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_URI_NOT_SPECIFIED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_NO_ENTRY_FOR_THE_GIVEN_URI] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_EXACTLYONE_NOT_FOUND_IN_NORMALIZED_POLICY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_EXACTLYONE_IS_EMPTY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ALL_NOT_FOUND_WHILE_GETTING_CROSS_PRODUCT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_UNKNOWN_ASSERTION] = ERROR_OTHER;

    // Generate with
    // grep AXIS2_STUB_PROFILE src/axis2_stub_Profile.h | grep FAULT | sort -u | sed 's/\s*\(.*FAULT_\(.*FAULT\)\),/statusMap_\[\1\] = \2;/'

    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
}

/**
 * Get the current status
 *
 * Use this function after an invokation of a service operation to check to result of the invoke.
 *
 * @return The current status.
 */
ProfileServiceHandler::status ProfileServiceHandler::getStatus()
{
    if (statusMap_.size() == 0)
    {
        initiateStatusMap();
    }

    // These are errors we control
    switch (lastErrorNumber_)
    {
    case STATUS_SUCCESS:
        return STATUS_SUCCESS;
    }

    if (statusMap_.count(env->error->error_number) == 0)
    {
        LOG4CXX_ERROR(psHandlerLog, "This is not a Axis2 error nor a Soap fault. Error code: " << env->error->error_number << " '" << AXIS2_ERROR_GET_MESSAGE(env->error) << "'");
        return STATUS_UNKNOWN;
    }

    // These are errors in axis2 and stubs
    return statusMap_[env->error->error_number];
}

/**
 * @return A human readable string of the current status.
 */
std::string ProfileServiceHandler::getStatusMessage()
{
    switch (getStatus())
    {
    case STATUS_UNKNOWN:
        return "Unknown";
    case STATUS_SUCCESS:
        return "Success";
    case FAULT_INTERNALSERVERERROR:
        return "Internal Server Error Fault";
    case FAULT_INVALIDPARAMETER:
        return "Invalid Parameter Fault";
    case FAULT_NOACTIVESESSION:
        return "No Active Session Fault";
    }

    // Return Axis2 error message
    return AXIS2_ERROR_GET_MESSAGE(env->error);
}

/**
 * @return A human readable string of the last soap fault reason.
 */
std::string ProfileServiceHandler::getLastSoapFaultReason()
{
    return lastSoapFaultReason_;
}

/**
 * Destructor
 *
 * Free allocated memory.
 */
ProfileServiceHandler::~ProfileServiceHandler()
{
    if (stub)
        axis2_stub_free(stub, env);
    stub = NULL;
    if (env)
        axutil_env_free((axutil_env_t *) env);
    env = NULL;
    //delete log_ops; /* causes double free */
}

/**
 * Invoke logOn operation
 *
 * @param username The username to access the Service.
 * @param password The password to access the Service.
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool ProfileServiceHandler::logOn(std::string username, std::string password)
{
    axis2_char_t *username_ = (axis2_char_t*) username.c_str();
    axis2_char_t *password_ = (axis2_char_t*) password.c_str();

    axis2_stub_Kolibre_Profile_logOn_fault fault;

    LOG4CXX_INFO(psHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t logOnResult = axis2_stub_op_Kolibre_Profile_logOn(stub, env, username_, password_, &fault);
    LOG4CXX_INFO(psHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        };

        LOG4CXX_ERROR(psHandlerLog, __FUNCTION__ << " invoke FAILED with errror: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    return logOnResult == AXIS2_TRUE;
}

/**
 * Invoke logOff operation
 *
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool ProfileServiceHandler::logOff()
{
    axis2_stub_Kolibre_Profile_logOff_fault fault;

    LOG4CXX_INFO(psHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t logOffResult = axis2_stub_op_Kolibre_Profile_logOff(stub, env, &fault);
    LOG4CXX_INFO(psHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        case AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        };

        LOG4CXX_ERROR(psHandlerLog, __FUNCTION__ << " invoke FAILED with errror: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    return logOffResult == AXIS2_TRUE;
}

/**
 * Invoke setAttribute operation
 *
 * Sends a Reading System property to the Service.
 *
 * @param key The property name to store.
 * @param value The property value to store.
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool ProfileServiceHandler::setAttribute(std::string key, std::string value)
{
    axis2_char_t *key_ = (axis2_char_t*) key.c_str();
    axis2_char_t *value_ = (axis2_char_t*) value.c_str();

    axis2_stub_Kolibre_Profile_setAttribute_fault fault;

    LOG4CXX_INFO(psHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t setAttributeResult = axis2_stub_op_Kolibre_Profile_setAttribute(stub, env, key_, value_, &fault);
    LOG4CXX_INFO(psHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        };

        LOG4CXX_ERROR(psHandlerLog, __FUNCTION__ << " invoke FAILED with errror: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    return setAttributeResult == AXIS2_TRUE;
}

/**
 * Invoke getAttribute operation
 *
 * Retrieves a Reading System property from the Service.
 *
 * @param key The property name to retrieve.
 * @return A string containing the property value.
 */
std::string ProfileServiceHandler::getAttribute(std::string key)
{
    axis2_char_t *key_ = (axis2_char_t*) key.c_str();

    axis2_stub_Kolibre_Profile_getAttribute_fault fault;

    LOG4CXX_INFO(psHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_char_t* attributeValue = axis2_stub_op_Kolibre_Profile_getAttribute(stub, env, key_, &fault);
    LOG4CXX_INFO(psHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        case AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        };

        LOG4CXX_ERROR(psHandlerLog, __FUNCTION__ << " invoke FAILED with errror: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return "";
    }

    if (attributeValue == NULL)
        return "";
    std::string value = attributeValue;
    free(attributeValue);
    return value;
}

/**
 * Invoke queryPackageList operation
 *
 * Retrieves a list of packages with updates to the Reading System.
 *
 * @param firmwareType The firmware type of the Reading System.
 * @param firmwareVersion The firmware version of the Reading System.
 * @return A pointer to the packageList.
 */
kps::PackageList* ProfileServiceHandler::queryPackageList(std::string firmwareType, std::string firmwareVersion)
{
    axis2_char_t *type = (axis2_char_t*) firmwareType.c_str();
    axis2_char_t *version = (axis2_char_t*) firmwareVersion.c_str();

    axis2_stub_Kolibre_Profile_queryPackageList_fault fault;

    LOG4CXX_INFO(psHandlerLog, "Sending " << __FUNCTION__ << " request");
    prf_packageListType_t* queryPackageListResult = axis2_stub_op_Kolibre_Profile_queryPackageList(stub, env, type, version, &fault);
    LOG4CXX_INFO(psHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        };

        LOG4CXX_ERROR(psHandlerLog, __FUNCTION__ << " invoke FAILED with errror: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return NULL;
    }

    kps::PackageList* packageList = parsePackageListResult(queryPackageListResult);
    prf_packageListType_free(queryPackageListResult, env);

    return packageList;
}

kps::PackageList* ProfileServiceHandler::parsePackageListResult(prf_packageListType_t* queryPackageListResult)
{
    kps::PackageList* kPackageList = new kps::PackageList();

    prf_packagesType_t* packages = prf_packageListType_get_packages(queryPackageListResult, env);

    int count = prf_packagesType_sizeof_package(packages, env);

    for (int i = 0; (i < count) && good(); i++)
    {
        prf_packageType_t* package = prf_packagesType_get_package_at(packages, env, i);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could fetch package nr: " << i);
            break;
        }
        axutil_uri_t* uri = prf_packageType_get_uri(package, env);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could not parse package uri");
            break;
        }
        axis2_char_t* uri_ptr = axutil_uri_to_string(uri, env, AXIS2_URI_UNP_REVEALPASSWORD);
        std::string uri_str = uri_ptr;
        free(uri_ptr);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could not parse package uri_str");
            break;
        }
        std::string name = prf_packageType_get_name(package, env);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could not parse package name");
            break;
        }
        std::string id = prf_packageType_get_id(package, env);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could not parse package id");
            break;
        }
        std::string md5sum = prf_packageType_get_md5sum(package, env);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could not parse package md5sum");
            break;
        }
        std::string description = prf_packageType_get_description(package, env);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could not parse package description");
            break;
        }
        std::string fwtype = prf_packageType_get_type(package, env);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could not parse package fwtype");
            break;
        }
        int size = prf_packageType_get_size(package, env);
        if (!good())
        {
            LOG4CXX_WARN(psHandlerLog, "Could not parse package size");
            break;
        }
        kps::Package kPackage(name, description, id, md5sum, fwtype, uri_str, size);
        kPackageList->addPackage(kPackage);
        LOG4CXX_DEBUG(psHandlerLog, "Got package " << name << " id:" << id << " size:" << size << " md5:" << md5sum << " '" << description << "'");
    }

    std::string packageListVersion = prf_packageListType_get_version(queryPackageListResult, env);
    if (!good())
    {
        LOG4CXX_WARN(psHandlerLog, "Could not parse list name");
    }
    kPackageList->setVersion(packageListVersion);

    std::string packageListName = prf_packageListType_get_name(queryPackageListResult, env);
    if (!good())
    {
        LOG4CXX_WARN(psHandlerLog, "Could not parse list name");
    }
    kPackageList->setName(packageListName);

    std::string packageListDescription = prf_packageListType_get_description(queryPackageListResult, env);
    if (!good())
    {
        LOG4CXX_WARN(psHandlerLog, "Could not parse list description");
    }
    kPackageList->setDescription(packageListDescription);

    LOG4CXX_DEBUG(psHandlerLog, "Parsed packageList " << packageListName << " version: " << packageListVersion);

    return kPackageList;
}

/**
 * A method to check if the last function call was successful.
 *
 * @return A boolean indicating of the last function call was successful or not.
 */
bool ProfileServiceHandler::good()
{
    if (env == NULL || stub == NULL)
    {
        LOG4CXX_ERROR(psHandlerLog, "ProfileServiceHandler is uninitialized!");
        return false;
    }

    if (axutil_env_check_status(env) == AXIS2_SUCCESS)
    {
        return true;
    }

    switch (env->error->error_number)
    {
    // Ignoring the following errors
    case AXIS2_ERROR_INVALID_HTTP_HEADER_START_LINE:
    case AXIS2_ERROR_INVALID_NULL_PARAM:
        LOG4CXX_ERROR(psHandlerLog, "Ignoring error since it does not affect behaviour. Error code: " << env->error->error_number << " :: " << getStatusMessage());
        return true;
    };

    return false;
}

void ProfileServiceHandler::parseInternalServerErrorFault(prf_internalServerErrorFault* fault)
{
    // reset lastSoapFaultReason
    lastSoapFaultReason_ = "";

    // store error_number and status_code as they will be overwritten
    const int error_number = env->error->error_number;
    const int status_code = env->error->status_code;

    if (AXIS2_FALSE == prf_internalServerErrorFault_is_internalServerErrorFault_nil(fault, env))
    {
        prf_internalServerErrorFaultType_t *faultType = prf_internalServerErrorFault_get_internalServerErrorFault(fault, env);
        if (AXIS2_FALSE == prf_internalServerErrorFaultType_is_reason_nil(faultType, env))
        {
            lastSoapFaultReason_ = prf_internalServerErrorFaultType_get_reason(faultType, env);
        }
    }

    // restore error_number and status_code
    env->error->error_number = error_number;
    env->error->status_code = status_code;
}

void ProfileServiceHandler::parseInvalidParameterFault(prf_invalidParameterFault* fault)
{
    // reset lastSoapFaultReason
    lastSoapFaultReason_ = "";

    // store error_number and status_code as they will be overwritten
    const int error_number = env->error->error_number;
    const int status_code = env->error->status_code;

    if (AXIS2_FALSE == prf_invalidParameterFault_is_invalidParameterFault_nil(fault, env))
    {
        prf_invalidParameterFaultType_t *faultType = prf_invalidParameterFault_get_invalidParameterFault(fault, env);
        if (AXIS2_FALSE == prf_invalidParameterFaultType_is_reason_nil(faultType, env))
        {
            lastSoapFaultReason_ = prf_invalidParameterFaultType_get_reason(faultType, env);
        }
    }

    // restore error_number and status_code
    env->error->error_number = error_number;
    env->error->status_code = status_code;
}

void ProfileServiceHandler::parseNoActiveSessionFault(prf_noActiveSessionFault* fault)
{
    // reset lastSoapFaultReason
    lastSoapFaultReason_ = "";

    // store error_number and status_code as they will be overwritten
    const int error_number = env->error->error_number;
    const int status_code = env->error->status_code;

    if (AXIS2_FALSE == prf_noActiveSessionFault_is_noActiveSessionFault_nil(fault, env))
    {
        prf_noActiveSessionFaultType_t *faultType = prf_noActiveSessionFault_get_noActiveSessionFault(fault, env);
        if (AXIS2_FALSE == prf_noActiveSessionFaultType_is_reason_nil(faultType, env))
        {
            lastSoapFaultReason_ = prf_noActiveSessionFaultType_get_reason(faultType, env);
        }
    }

    // restore error_number and status_code
    env->error->error_number = error_number;
    env->error->status_code = status_code;
}

/**
 * Gets called by axis2 when it is time to free the env->log.
 */
void AXIS2_CALL
axis_log_ops_free(axutil_allocator_t * allocator, struct axutil_log * log)
{
    LOG4CXX_WARN(psHandlerLog, "axis_log_ops_free() Not implemented");
}

/**
 * Call back for axis2 log functions. Messages get forwarded to LOG4CXX
 */
void AXIS2_CALL
axis_log_ops_write(axutil_log_t * log, const axis2_char_t * buffer, axutil_log_levels_t level, const axis2_char_t * file, const int line)
{
    // No use in logging empty message
    if (buffer == NULL)
        return;

    // Ensure file is not a NULL pointer
    std::string filename;
    if (file == NULL)
        filename = std::string("unknown");
    else
        filename = std::string(file);

    // Log levels from LOG4CXX in order smallest -> largest
    // TRACE, DEBUG, INFO, WARN, ERROR, FATAL
    log4cxx::LevelPtr log4cxx_level;

    switch (level)
    {
    /** Critical level, logs only critical errors */
    case AXIS2_LOG_LEVEL_CRITICAL:
        log4cxx_level = log4cxx::Level::getFatal();
        break;

        /** Error level, logs only errors */
    case AXIS2_LOG_LEVEL_ERROR:
        log4cxx_level = log4cxx::Level::getError();
        break;

        /** Warning level, logs only warnings */
    case AXIS2_LOG_LEVEL_WARNING:
        log4cxx_level = log4cxx::Level::getWarn();
        break;

        /** Info level, logs information */
    case AXIS2_LOG_LEVEL_INFO:
        log4cxx_level = log4cxx::Level::getInfo();
        break;

        /** Debug level, logs everything */
    case AXIS2_LOG_LEVEL_DEBUG:
        log4cxx_level = log4cxx::Level::getDebug();
        break;

        /** User level, logs only user level debug messages */
    case AXIS2_LOG_LEVEL_USER:
        log4cxx_level = log4cxx::Level::getDebug();
        break;

        /** Trace level, Enable with compiler time option AXIS2_TRACE */
    case AXIS2_LOG_LEVEL_TRACE:
        log4cxx_level = log4cxx::Level::getTrace();
        break;
    }

    // Note: The LOG4CXX_* macros have been expanded below. Edit with care!!!
    if (psAxisLog->isEnabledFor(log4cxx_level))
    {
        ::log4cxx::helpers::MessageBuffer oss_;
        psAxisLog->forcedLog(log4cxx_level, oss_.str(oss_ << buffer), AXIS2_LOCATION(filename.c_str(), line));
    }
}
