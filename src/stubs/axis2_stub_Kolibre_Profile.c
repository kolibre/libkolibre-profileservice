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



      /**
       * axis2_stub_Kolibre_Profile.c
       *
       * This file was auto-generated from WSDL for "Kolibre_Profile|http://www.pratsam.org/ns/profile/" service
       * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:14 EEST)
       */

      #include "axis2_stub_Kolibre_Profile.h"
      #include <axis2_msg.h>
      #include <axis2_policy_include.h>
      #include <neethi_engine.h>


      /**
       * axis2_stub_Kolibre_Profile C implementation
       */

      axis2_stub_t* AXIS2_CALL
      axis2_stub_create_Kolibre_Profile(const axutil_env_t *env,
                                      const axis2_char_t *client_home,
                                      const axis2_char_t *endpoint_uri)
      {
         axis2_stub_t *stub = NULL;
         axis2_endpoint_ref_t *endpoint_ref = NULL;
         AXIS2_FUNC_PARAM_CHECK (client_home, env, NULL)

         if (NULL == endpoint_uri)
         {
            endpoint_uri = axis2_stub_get_endpoint_uri_of_Kolibre_Profile(env);
         }

         endpoint_ref = axis2_endpoint_ref_create(env, endpoint_uri);

         stub = axis2_stub_create_with_endpoint_ref_and_client_home (env, endpoint_ref, client_home);

         if (NULL == stub)
         {
            if(NULL != endpoint_ref)
            {
                axis2_endpoint_ref_free(endpoint_ref, env);
            }
            return NULL;
         }


         axis2_stub_populate_services_for_Kolibre_Profile(stub, env);
         return stub;
      }


      void AXIS2_CALL
      axis2_stub_populate_services_for_Kolibre_Profile(axis2_stub_t *stub, const axutil_env_t *env)
      {
         axis2_svc_client_t *svc_client = NULL;
         axutil_qname_t *svc_qname =  NULL;
         axutil_qname_t *op_qname =  NULL;
         axis2_svc_t *svc = NULL;
         axis2_op_t *op = NULL;
         axis2_op_t *annon_op = NULL;
         axis2_msg_t *msg_out = NULL;
         axis2_msg_t *msg_in = NULL;
         axis2_msg_t *msg_out_fault = NULL;
         axis2_msg_t *msg_in_fault = NULL;
         axis2_policy_include_t *policy_include = NULL;

         axis2_desc_t *desc = NULL;
         axiom_node_t *policy_node = NULL;
         axiom_element_t *policy_root_ele = NULL;
         neethi_policy_t *neethi_policy = NULL;
         axis2_status_t status;

         /* Modifying the Service */
         svc_client = axis2_stub_get_svc_client (stub, env );
         svc = (axis2_svc_t*)axis2_svc_client_get_svc( svc_client, env );

         annon_op = axis2_svc_get_op_with_name(svc, env, AXIS2_ANON_OUT_IN_OP);
         msg_out = axis2_op_get_msg(annon_op, env, AXIS2_MSG_OUT);
         msg_in = axis2_op_get_msg(annon_op, env, AXIS2_MSG_IN);
         msg_out_fault = axis2_op_get_msg(annon_op, env, AXIS2_MSG_OUT_FAULT);
         msg_in_fault = axis2_op_get_msg(annon_op, env, AXIS2_MSG_IN_FAULT);

         svc_qname = axutil_qname_create(env,"Kolibre_Profile" ,NULL, NULL);
         axis2_svc_set_qname (svc, env, svc_qname);
		 axutil_qname_free(svc_qname,env);

         /* creating the operations*/

         
           op_qname = axutil_qname_create(env,
                                         "logOn" ,
                                         "http://www.pratsam.org/ns/profile/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "setAttribute" ,
                                         "http://www.pratsam.org/ns/profile/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "logOff" ,
                                         "http://www.pratsam.org/ns/profile/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "getAttribute" ,
                                         "http://www.pratsam.org/ns/profile/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "queryPackageList" ,
                                         "http://www.pratsam.org/ns/profile/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
      }

      /**
       *return end point picked from wsdl
       */
      axis2_char_t* AXIS2_CALL
      axis2_stub_get_endpoint_uri_of_Kolibre_Profile( const axutil_env_t *env )
      {
        axis2_char_t *endpoint_uri = NULL;
        /* set the address from here */
        
              endpoint_uri = "SERVICE_WSDL_URI_PLACEHOLDER";
            
        return endpoint_uri;
      }


  
         /**
          * auto generated method signature
          * for "logOn|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _username of the axis2_char_t*
          * @param _password of the axis2_char_t*
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_Profile_logOn( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _username,
                                               axis2_char_t* _password,
                                          axis2_stub_Kolibre_Profile_logOn_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            prf_logOnResponse_t* ret_val;
            
                            {
                               prf_logOn_t* wrapper_prf_obj = prf_logOn_create_with_values(env,
                                    prf_logOnType_create_with_values(env,
                                        _username,
                                        _password));
                                    payload = prf_logOn_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_prf_obj)
                                    {
                                        prf_logOn_free(wrapper_prf_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/logOn";
              soap_act = axutil_string_create(env, "/logOn");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            prf_invalidParameterFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_invalidParameterFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_invalidParameterFaultType_t *faultType = prf_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_invalidParameterFault_set_invalidParameterFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_invalidParameterFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_invalidParameterFault_free(prf_obj, env);
                                }
                               
                                fault->InvalidParameterFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            prf_internalServerErrorFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_internalServerErrorFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_internalServerErrorFaultType_t *faultType = prf_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_internalServerErrorFault_set_internalServerErrorFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_internalServerErrorFault_free(prf_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = prf_logOnResponse_create(env);

                    if(prf_logOnResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            prf_logOnResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the prf_logOnResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return prf_logOnResponseType_free_popping_value(
                              prf_logOnResponse_free_popping_value(ret_val, env), env);
                       
        }
        
         /**
          * auto generated method signature
          * for "setAttribute|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _key of the axis2_char_t*
          * @param _value of the axis2_char_t*
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_Profile_setAttribute( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _key,
                                               axis2_char_t* _value,
                                          axis2_stub_Kolibre_Profile_setAttribute_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            prf_setAttributeResponse_t* ret_val;
            
                            {
                               prf_setAttribute_t* wrapper_prf_obj = prf_setAttribute_create_with_values(env,
                                    prf_setAttributeType_create_with_values(env,
                                        _key,
                                        _value));
                                    payload = prf_setAttribute_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_prf_obj)
                                    {
                                        prf_setAttribute_free(wrapper_prf_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/setAttribute";
              soap_act = axutil_string_create(env, "/setAttribute");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            prf_noActiveSessionFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_noActiveSessionFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_noActiveSessionFaultType_t *faultType = prf_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_noActiveSessionFault_set_noActiveSessionFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_noActiveSessionFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_noActiveSessionFault_free(prf_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            prf_invalidParameterFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_invalidParameterFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_invalidParameterFaultType_t *faultType = prf_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_invalidParameterFault_set_invalidParameterFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_invalidParameterFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_invalidParameterFault_free(prf_obj, env);
                                }
                               
                                fault->InvalidParameterFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            prf_internalServerErrorFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_internalServerErrorFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_internalServerErrorFaultType_t *faultType = prf_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_internalServerErrorFault_set_internalServerErrorFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_internalServerErrorFault_free(prf_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = prf_setAttributeResponse_create(env);

                    if(prf_setAttributeResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            prf_setAttributeResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the prf_setAttributeResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return prf_setAttributeResultType_free_popping_value(
                              prf_setAttributeResponse_free_popping_value(ret_val, env), env);
                       
        }
        
         /**
          * auto generated method signature
          * for "logOff|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_Profile_logOff( axis2_stub_t *stub, const axutil_env_t *env,
                                          axis2_stub_Kolibre_Profile_logOff_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            prf_logOffResponse_t* ret_val;
            
                            {
                               prf_logOff_t* wrapper_prf_obj = prf_logOff_create_with_values(env,
                                    prf_logOffType_create_with_values(env));
                                    payload = prf_logOff_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_prf_obj)
                                    {
                                        prf_logOff_free(wrapper_prf_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/logOff";
              soap_act = axutil_string_create(env, "/logOff");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            prf_noActiveSessionFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_noActiveSessionFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_noActiveSessionFaultType_t *faultType = prf_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_noActiveSessionFault_set_noActiveSessionFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_noActiveSessionFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_noActiveSessionFault_free(prf_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            prf_internalServerErrorFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_internalServerErrorFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_internalServerErrorFaultType_t *faultType = prf_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_internalServerErrorFault_set_internalServerErrorFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_internalServerErrorFault_free(prf_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = prf_logOffResponse_create(env);

                    if(prf_logOffResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            prf_logOffResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the prf_logOffResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return prf_logOffResponseType_free_popping_value(
                              prf_logOffResponse_free_popping_value(ret_val, env), env);
                       
        }
        
         /**
          * auto generated method signature
          * for "getAttribute|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _key0 of the axis2_char_t*
          *
          * @return axis2_char_t*
          */

         axis2_char_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_Profile_getAttribute( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _key0,
                                          axis2_stub_Kolibre_Profile_getAttribute_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            prf_getAttributeResponse_t* ret_val;
            
                            {
                               prf_getAttribute_t* wrapper_prf_obj = prf_getAttribute_create_with_values(env,
                                    prf_getAttributeType_create_with_values(env,
                                        _key0));
                                    payload = prf_getAttribute_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_prf_obj)
                                    {
                                        prf_getAttribute_free(wrapper_prf_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_char_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getAttribute";
              soap_act = axutil_string_create(env, "/getAttribute");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            prf_noActiveSessionFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_noActiveSessionFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_noActiveSessionFaultType_t *faultType = prf_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_noActiveSessionFault_set_noActiveSessionFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_noActiveSessionFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_noActiveSessionFault_free(prf_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            prf_invalidParameterFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_invalidParameterFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_invalidParameterFaultType_t *faultType = prf_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_invalidParameterFault_set_invalidParameterFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_invalidParameterFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_invalidParameterFault_free(prf_obj, env);
                                }
                               
                                fault->InvalidParameterFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            prf_internalServerErrorFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_internalServerErrorFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_internalServerErrorFaultType_t *faultType = prf_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_internalServerErrorFault_set_internalServerErrorFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_internalServerErrorFault_free(prf_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_char_t*)NULL;
                    }
                    ret_val = prf_getAttributeResponse_create(env);

                    if(prf_getAttributeResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            prf_getAttributeResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the prf_getAttributeResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_char_t*)NULL;
                    }

                   
                            return prf_getAttributeResponseType_free_popping_value(
                              prf_getAttributeResponse_free_popping_value(ret_val, env), env);
                       
        }
        
         /**
          * auto generated method signature
          * for "queryPackageList|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _firmwareType of the axis2_char_t*
          * @param _firmwareVersion of the axis2_char_t*
          *
          * @return prf_packageListType_t*
          */

         prf_packageListType_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_Profile_queryPackageList( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _firmwareType,
                                               axis2_char_t* _firmwareVersion,
                                          axis2_stub_Kolibre_Profile_queryPackageList_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            prf_queryPackageListResponse_t* ret_val;
            
                            {
                               prf_queryPackageList_t* wrapper_prf_obj = prf_queryPackageList_create_with_values(env,
                                    prf_queryPackageListType_create_with_values(env,
                                        _firmwareType,
                                        _firmwareVersion));
                                    payload = prf_queryPackageList_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_prf_obj)
                                    {
                                        prf_queryPackageList_free(wrapper_prf_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (prf_packageListType_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/queryPackageList";
              soap_act = axutil_string_create(env, "/queryPackageList");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            prf_noActiveSessionFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_noActiveSessionFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_noActiveSessionFaultType_t *faultType = prf_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_noActiveSessionFault_set_noActiveSessionFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_noActiveSessionFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_noActiveSessionFault_free(prf_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            prf_invalidParameterFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_invalidParameterFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_invalidParameterFaultType_t *faultType = prf_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_invalidParameterFault_set_invalidParameterFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_invalidParameterFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_invalidParameterFault_free(prf_obj, env);
                                }
                               
                                fault->InvalidParameterFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            prf_internalServerErrorFault_t* prf_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            prf_obj = prf_internalServerErrorFault_create(env);
                            if(prf_obj)
                            {
                                if(soap_reason_text)
                                {
                                    prf_internalServerErrorFaultType_t *faultType = prf_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        prf_internalServerErrorFault_set_internalServerErrorFault(prf_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    prf_internalServerErrorFault_free(prf_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = prf_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (prf_packageListType_t*)NULL;
                    }
                    ret_val = prf_queryPackageListResponse_create(env);

                    if(prf_queryPackageListResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            prf_queryPackageListResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the prf_queryPackageListResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (prf_packageListType_t*)NULL;
                    }

                   
                            return prf_queryPackageListResponseType_free_popping_value(
                              prf_queryPackageListResponse_free_popping_value(ret_val, env), env);
                       
        }
        

        struct axis2_stub_Kolibre_Profile_logOn_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOnResponse,
                                                        axis2_stub_Kolibre_Profile_logOn_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_Profile_logOn(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_Profile_logOn_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_Profile_logOn_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_Profile_logOn(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOnResponse,
                                                       axis2_stub_Kolibre_Profile_logOn_fault fault, void *data);
            struct axis2_stub_Kolibre_Profile_logOn_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_Profile_logOn_fault fault;
            prf_logOnResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_Profile_logOn_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                prf_invalidParameterFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_invalidParameterFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_invalidParameterFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_invalidParameterFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                prf_internalServerErrorFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_internalServerErrorFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_internalServerErrorFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = prf_logOnResponse_create(env);
     
                        if(prf_logOnResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            prf_logOnResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, prf_logOnResponseType_free_popping_value(
                                                  prf_logOnResponse_free_popping_value(ret_val, env), env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "logOn|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _username of the axis2_char_t*
          * @param _password of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_Profile_logOn( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _username,
                                              axis2_char_t* _password,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOnResponse,
                                                      axis2_stub_Kolibre_Profile_logOn_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_Profile_logOn_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_Profile_logOn_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_Profile_logOn_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               prf_logOn_t* wrapper_prf_obj = prf_logOn_create_with_values(env,
                                    prf_logOnType_create_with_values(env,
                                    _username,
                                    _password));
                                payload = prf_logOn_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/logOn";
              soap_act = axutil_string_create(env, "/logOn");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_Profile_logOn);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_Profile_logOn);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_Profile_setAttribute_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setAttributeResponse,
                                                        axis2_stub_Kolibre_Profile_setAttribute_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_Profile_setAttribute(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_Profile_setAttribute_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_Profile_setAttribute_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_Profile_setAttribute(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setAttributeResponse,
                                                       axis2_stub_Kolibre_Profile_setAttribute_fault fault, void *data);
            struct axis2_stub_Kolibre_Profile_setAttribute_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_Profile_setAttribute_fault fault;
            prf_setAttributeResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_Profile_setAttribute_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                prf_noActiveSessionFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_noActiveSessionFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_noActiveSessionFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_noActiveSessionFault_free(prf_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                prf_invalidParameterFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_invalidParameterFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_invalidParameterFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_invalidParameterFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                prf_internalServerErrorFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_internalServerErrorFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_internalServerErrorFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = prf_setAttributeResponse_create(env);
     
                        if(prf_setAttributeResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            prf_setAttributeResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, prf_setAttributeResultType_free_popping_value(
                                                  prf_setAttributeResponse_free_popping_value(ret_val, env), env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "setAttribute|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _key of the axis2_char_t*
          * @param _value of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_Profile_setAttribute( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _key,
                                              axis2_char_t* _value,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setAttributeResponse,
                                                      axis2_stub_Kolibre_Profile_setAttribute_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_Profile_setAttribute_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_Profile_setAttribute_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_Profile_setAttribute_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               prf_setAttribute_t* wrapper_prf_obj = prf_setAttribute_create_with_values(env,
                                    prf_setAttributeType_create_with_values(env,
                                    _key,
                                    _value));
                                payload = prf_setAttribute_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/setAttribute";
              soap_act = axutil_string_create(env, "/setAttribute");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_Profile_setAttribute);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_Profile_setAttribute);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_Profile_logOff_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOffResponse,
                                                        axis2_stub_Kolibre_Profile_logOff_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_Profile_logOff(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_Profile_logOff_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_Profile_logOff_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_Profile_logOff(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOffResponse,
                                                       axis2_stub_Kolibre_Profile_logOff_fault fault, void *data);
            struct axis2_stub_Kolibre_Profile_logOff_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_Profile_logOff_fault fault;
            prf_logOffResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_Profile_logOff_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                prf_noActiveSessionFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_noActiveSessionFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_noActiveSessionFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_noActiveSessionFault_free(prf_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                prf_internalServerErrorFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_internalServerErrorFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_internalServerErrorFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = prf_logOffResponse_create(env);
     
                        if(prf_logOffResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            prf_logOffResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, prf_logOffResponseType_free_popping_value(
                                                  prf_logOffResponse_free_popping_value(ret_val, env), env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "logOff|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_Profile_logOff( axis2_stub_t *stub, const axutil_env_t *env,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOffResponse,
                                                      axis2_stub_Kolibre_Profile_logOff_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_Profile_logOff_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_Profile_logOff_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_Profile_logOff_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               prf_logOff_t* wrapper_prf_obj = prf_logOff_create_with_values(env,
                                    prf_logOffType_create_with_values(env));
                                payload = prf_logOff_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/logOff";
              soap_act = axutil_string_create(env, "/logOff");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_Profile_logOff);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_Profile_logOff);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_Profile_getAttribute_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_char_t* _getAttributeResponse,
                                                        axis2_stub_Kolibre_Profile_getAttribute_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_Profile_getAttribute(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_Profile_getAttribute_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_Profile_getAttribute_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_Profile_getAttribute(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_char_t* _getAttributeResponse,
                                                       axis2_stub_Kolibre_Profile_getAttribute_fault fault, void *data);
            struct axis2_stub_Kolibre_Profile_getAttribute_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_Profile_getAttribute_fault fault;
            prf_getAttributeResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_Profile_getAttribute_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                prf_noActiveSessionFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_noActiveSessionFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_noActiveSessionFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_noActiveSessionFault_free(prf_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                prf_invalidParameterFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_invalidParameterFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_invalidParameterFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_invalidParameterFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                prf_internalServerErrorFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_internalServerErrorFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_internalServerErrorFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = prf_getAttributeResponse_create(env);
     
                        if(prf_getAttributeResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            prf_getAttributeResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_char_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, prf_getAttributeResponseType_free_popping_value(
                                                  prf_getAttributeResponse_free_popping_value(ret_val, env), env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getAttribute|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _key0 of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_Profile_getAttribute( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _key0,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_char_t* _getAttributeResponse,
                                                      axis2_stub_Kolibre_Profile_getAttribute_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_Profile_getAttribute_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_Profile_getAttribute_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_Profile_getAttribute_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               prf_getAttribute_t* wrapper_prf_obj = prf_getAttribute_create_with_values(env,
                                    prf_getAttributeType_create_with_values(env,
                                    _key0));
                                payload = prf_getAttribute_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getAttribute";
              soap_act = axutil_string_create(env, "/getAttribute");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_Profile_getAttribute);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_Profile_getAttribute);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_Profile_queryPackageList_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, prf_packageListType_t* _queryPackageListResponse,
                                                        axis2_stub_Kolibre_Profile_queryPackageList_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_Profile_queryPackageList(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_Profile_queryPackageList_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_Profile_queryPackageList_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_Profile_queryPackageList(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, prf_packageListType_t* _queryPackageListResponse,
                                                       axis2_stub_Kolibre_Profile_queryPackageList_fault fault, void *data);
            struct axis2_stub_Kolibre_Profile_queryPackageList_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_Profile_queryPackageList_fault fault;
            prf_queryPackageListResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_Profile_queryPackageList_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                prf_noActiveSessionFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_noActiveSessionFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_noActiveSessionFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_noActiveSessionFault_free(prf_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                prf_invalidParameterFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_invalidParameterFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_invalidParameterFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_invalidParameterFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                prf_internalServerErrorFault_t* prf_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                prf_obj = prf_internalServerErrorFault_create(env);
                                if(prf_obj)
                                {
                                    if(prf_internalServerErrorFault_deserialize(prf_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        prf_internalServerErrorFault_free(prf_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = prf_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = prf_queryPackageListResponse_create(env);
     
                        if(prf_queryPackageListResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            prf_queryPackageListResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (prf_packageListType_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, prf_queryPackageListResponseType_free_popping_value(
                                                  prf_queryPackageListResponse_free_popping_value(ret_val, env), env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "queryPackageList|http://www.pratsam.org/ns/profile/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _firmwareType of the axis2_char_t*
          * @param _firmwareVersion of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_Profile_queryPackageList( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _firmwareType,
                                              axis2_char_t* _firmwareVersion,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, prf_packageListType_t* _queryPackageListResponse,
                                                      axis2_stub_Kolibre_Profile_queryPackageList_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_Profile_queryPackageList_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_Profile_queryPackageList_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_Profile_queryPackageList_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               prf_queryPackageList_t* wrapper_prf_obj = prf_queryPackageList_create_with_values(env,
                                    prf_queryPackageListType_create_with_values(env,
                                    _firmwareType,
                                    _firmwareVersion));
                                payload = prf_queryPackageList_serialize(wrapper_prf_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/queryPackageList";
              soap_act = axutil_string_create(env, "/queryPackageList");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_Profile_queryPackageList);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_Profile_queryPackageList);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

