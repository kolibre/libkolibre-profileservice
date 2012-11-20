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
         * axis2_prf_extension_mapper.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
         */

        #include "axis2_prf_extension_mapper.h"

        #include "prf_setAttributeType.h"
        #include "prf_packageListType.h"
        #include "prf_logOffResponseType.h"
        #include "prf_getAttributeResponseType.h"
        #include "prf_queryPackageListResponseType.h"
        #include "prf_getAttributeType.h"
        #include "prf_internalServerErrorFaultType.h"
        #include "prf_logOnType.h"
        #include "prf_setAttributeResultType.h"
        #include "prf_noActiveSessionFaultType.h"
        #include "prf_queryPackageListType.h"
        #include "prf_packagesType.h"
        #include "prf_logOffType.h"
        #include "prf_invalidParameterFaultType.h"
        #include "prf_logOnResponseType.h"
        #include "prf_packageType.h"
        

        struct prf_type
        {
            axis2_char_t *property_TypeName;
        };

        /**
         * Auxiliary function to determine an ADB object type from its Axiom node.
         * @param env pointer to environment struct
         * @param node double pointer to the parent node to deserialize
         * @return type name on success, else NULL
         */
        axis2_char_t *AXIS2_CALL
        axis2_prf_extension_mapper_type_from_node(
            const axutil_env_t *env,
            axiom_node_t** node)
        {
            axiom_node_t *parent = *node;
            axutil_qname_t *element_qname = NULL;
            axiom_element_t *element = NULL;

            axutil_hash_index_t *hi;
            void *val;
            axiom_attribute_t *type_attr;
            axutil_hash_t *ht;
            axis2_char_t *temp;
            axis2_char_t *type;

            while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
            {
                parent = axiom_node_get_next_sibling(parent, env);
            }

            if (NULL == parent)
            {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI,
                            "Failed in building adb object : "
                            "NULL elemenet can not be passed to deserialize");
                return AXIS2_FAILURE;
            }

            element = (axiom_element_t *)axiom_node_get_data_element(parent, env);

            ht = axiom_element_get_all_attributes(element, env);

            if (ht == NULL)
                return NULL;

            for (hi = axutil_hash_first(ht, env); hi; hi = axutil_hash_next(env, hi)) {
                axis2_char_t *localpart;
                axutil_hash_this(hi, NULL, NULL, &val);
                type_attr = (axiom_attribute_t *)val;
                localpart = axutil_qname_get_localpart(axiom_attribute_get_qname(type_attr, env), env);
                if (axutil_strcmp(localpart, "type") == 0) break;
            }

            type = axiom_attribute_get_value(type_attr, env);
            if (type != NULL && (temp = axutil_strchr(type, ':')) != NULL)
            {
                if (axutil_strchr(temp, ':') != NULL)
                    type = temp + 1; /* Pointer arithmetic */
            }

            return type;
        }

        axis2_char_t* AXIS2_CALL
        prf_internaltype_get_type(const prf_stubtype_t *object)
        {
            if (object != NULL)
              return object->property_TypeName;

            return NULL;
        }

        prf_stubtype_t* AXIS2_CALL
        axis2_prf_extension_mapper_create_from_node(
            const axutil_env_t *env,
            axiom_node_t** node,
            axis2_char_t *default_type)
        {
            axis2_char_t *type = axis2_prf_extension_mapper_type_from_node(env, node);

            if (type != NULL)
            {
              
              if (axutil_strcmp(type, "setAttributeType") == 0)
              {
                  return (prf_stubtype_t*) prf_setAttributeType_create(env);
              }
              
              if (axutil_strcmp(type, "packageListType") == 0)
              {
                  return (prf_stubtype_t*) prf_packageListType_create(env);
              }
              
              if (axutil_strcmp(type, "logOffResponseType") == 0)
              {
                  return (prf_stubtype_t*) prf_logOffResponseType_create(env);
              }
              
              if (axutil_strcmp(type, "getAttributeResponseType") == 0)
              {
                  return (prf_stubtype_t*) prf_getAttributeResponseType_create(env);
              }
              
              if (axutil_strcmp(type, "queryPackageListResponseType") == 0)
              {
                  return (prf_stubtype_t*) prf_queryPackageListResponseType_create(env);
              }
              
              if (axutil_strcmp(type, "getAttributeType") == 0)
              {
                  return (prf_stubtype_t*) prf_getAttributeType_create(env);
              }
              
              if (axutil_strcmp(type, "internalServerErrorFaultType") == 0)
              {
                  return (prf_stubtype_t*) prf_internalServerErrorFaultType_create(env);
              }
              
              if (axutil_strcmp(type, "logOnType") == 0)
              {
                  return (prf_stubtype_t*) prf_logOnType_create(env);
              }
              
              if (axutil_strcmp(type, "setAttributeResultType") == 0)
              {
                  return (prf_stubtype_t*) prf_setAttributeResultType_create(env);
              }
              
              if (axutil_strcmp(type, "noActiveSessionFaultType") == 0)
              {
                  return (prf_stubtype_t*) prf_noActiveSessionFaultType_create(env);
              }
              
              if (axutil_strcmp(type, "queryPackageListType") == 0)
              {
                  return (prf_stubtype_t*) prf_queryPackageListType_create(env);
              }
              
              if (axutil_strcmp(type, "packagesType") == 0)
              {
                  return (prf_stubtype_t*) prf_packagesType_create(env);
              }
              
              if (axutil_strcmp(type, "logOffType") == 0)
              {
                  return (prf_stubtype_t*) prf_logOffType_create(env);
              }
              
              if (axutil_strcmp(type, "invalidParameterFaultType") == 0)
              {
                  return (prf_stubtype_t*) prf_invalidParameterFaultType_create(env);
              }
              
              if (axutil_strcmp(type, "logOnResponseType") == 0)
              {
                  return (prf_stubtype_t*) prf_logOnResponseType_create(env);
              }
              
              if (axutil_strcmp(type, "packageType") == 0)
              {
                  return (prf_stubtype_t*) prf_packageType_create(env);
              }
              
            }

            
            if (axutil_strcmp(default_type, "prf_setAttributeType") == 0)
            {
                return (prf_stubtype_t*) prf_setAttributeType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_packageListType") == 0)
            {
                return (prf_stubtype_t*) prf_packageListType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_logOffResponseType") == 0)
            {
                return (prf_stubtype_t*) prf_logOffResponseType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_getAttributeResponseType") == 0)
            {
                return (prf_stubtype_t*) prf_getAttributeResponseType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_queryPackageListResponseType") == 0)
            {
                return (prf_stubtype_t*) prf_queryPackageListResponseType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_getAttributeType") == 0)
            {
                return (prf_stubtype_t*) prf_getAttributeType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_internalServerErrorFaultType") == 0)
            {
                return (prf_stubtype_t*) prf_internalServerErrorFaultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_logOnType") == 0)
            {
                return (prf_stubtype_t*) prf_logOnType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_setAttributeResultType") == 0)
            {
                return (prf_stubtype_t*) prf_setAttributeResultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_noActiveSessionFaultType") == 0)
            {
                return (prf_stubtype_t*) prf_noActiveSessionFaultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_queryPackageListType") == 0)
            {
                return (prf_stubtype_t*) prf_queryPackageListType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_packagesType") == 0)
            {
                return (prf_stubtype_t*) prf_packagesType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_logOffType") == 0)
            {
                return (prf_stubtype_t*) prf_logOffType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_invalidParameterFaultType") == 0)
            {
                return (prf_stubtype_t*) prf_invalidParameterFaultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_logOnResponseType") == 0)
            {
                return (prf_stubtype_t*) prf_logOnResponseType_create(env);
            }
            
            if (axutil_strcmp(default_type, "prf_packageType") == 0)
            {
                return (prf_stubtype_t*) prf_packageType_create(env);
            }
            

            return NULL;
        }

        axis2_status_t AXIS2_CALL
        axis2_prf_extension_mapper_free(
            prf_stubtype_t* _object,
            const axutil_env_t *env,
            axis2_char_t *default_type)
        {
            if (_object != NULL && prf_internaltype_get_type(_object) != NULL)
            {
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_setAttributeType") == 0)
                {
                    return prf_setAttributeType_free_obj(
                    (prf_setAttributeType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packageListType") == 0)
                {
                    return prf_packageListType_free_obj(
                    (prf_packageListType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOffResponseType") == 0)
                {
                    return prf_logOffResponseType_free_obj(
                    (prf_logOffResponseType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_getAttributeResponseType") == 0)
                {
                    return prf_getAttributeResponseType_free_obj(
                    (prf_getAttributeResponseType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_queryPackageListResponseType") == 0)
                {
                    return prf_queryPackageListResponseType_free_obj(
                    (prf_queryPackageListResponseType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_getAttributeType") == 0)
                {
                    return prf_getAttributeType_free_obj(
                    (prf_getAttributeType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_internalServerErrorFaultType") == 0)
                {
                    return prf_internalServerErrorFaultType_free_obj(
                    (prf_internalServerErrorFaultType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOnType") == 0)
                {
                    return prf_logOnType_free_obj(
                    (prf_logOnType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_setAttributeResultType") == 0)
                {
                    return prf_setAttributeResultType_free_obj(
                    (prf_setAttributeResultType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_noActiveSessionFaultType") == 0)
                {
                    return prf_noActiveSessionFaultType_free_obj(
                    (prf_noActiveSessionFaultType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_queryPackageListType") == 0)
                {
                    return prf_queryPackageListType_free_obj(
                    (prf_queryPackageListType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packagesType") == 0)
                {
                    return prf_packagesType_free_obj(
                    (prf_packagesType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOffType") == 0)
                {
                    return prf_logOffType_free_obj(
                    (prf_logOffType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_invalidParameterFaultType") == 0)
                {
                    return prf_invalidParameterFaultType_free_obj(
                    (prf_invalidParameterFaultType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOnResponseType") == 0)
                {
                    return prf_logOnResponseType_free_obj(
                    (prf_logOnResponseType_t*) _object, env);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packageType") == 0)
                {
                    return prf_packageType_free_obj(
                    (prf_packageType_t*) _object, env);
                }
            
            }

            
            if (axutil_strcmp(default_type, "prf_setAttributeType") == 0)
            {
                return prf_setAttributeType_free_obj(
                (prf_setAttributeType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_packageListType") == 0)
            {
                return prf_packageListType_free_obj(
                (prf_packageListType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_logOffResponseType") == 0)
            {
                return prf_logOffResponseType_free_obj(
                (prf_logOffResponseType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_getAttributeResponseType") == 0)
            {
                return prf_getAttributeResponseType_free_obj(
                (prf_getAttributeResponseType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_queryPackageListResponseType") == 0)
            {
                return prf_queryPackageListResponseType_free_obj(
                (prf_queryPackageListResponseType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_getAttributeType") == 0)
            {
                return prf_getAttributeType_free_obj(
                (prf_getAttributeType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_internalServerErrorFaultType") == 0)
            {
                return prf_internalServerErrorFaultType_free_obj(
                (prf_internalServerErrorFaultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_logOnType") == 0)
            {
                return prf_logOnType_free_obj(
                (prf_logOnType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_setAttributeResultType") == 0)
            {
                return prf_setAttributeResultType_free_obj(
                (prf_setAttributeResultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_noActiveSessionFaultType") == 0)
            {
                return prf_noActiveSessionFaultType_free_obj(
                (prf_noActiveSessionFaultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_queryPackageListType") == 0)
            {
                return prf_queryPackageListType_free_obj(
                (prf_queryPackageListType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_packagesType") == 0)
            {
                return prf_packagesType_free_obj(
                (prf_packagesType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_logOffType") == 0)
            {
                return prf_logOffType_free_obj(
                (prf_logOffType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_invalidParameterFaultType") == 0)
            {
                return prf_invalidParameterFaultType_free_obj(
                (prf_invalidParameterFaultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_logOnResponseType") == 0)
            {
                return prf_logOnResponseType_free_obj(
                (prf_logOnResponseType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "prf_packageType") == 0)
            {
                return prf_packageType_free_obj(
                (prf_packageType_t*) _object, env);
            }
            

            return AXIS2_FAILURE;
        }

        axis2_status_t AXIS2_CALL
        axis2_prf_extension_mapper_deserialize(
            prf_stubtype_t* _object,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs,
            axis2_char_t *default_type)
        {
            if (_object != NULL && prf_internaltype_get_type(_object) != NULL)
            {
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_setAttributeType") == 0)
                {
                    return prf_setAttributeType_deserialize_obj(
                    (prf_setAttributeType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packageListType") == 0)
                {
                    return prf_packageListType_deserialize_obj(
                    (prf_packageListType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOffResponseType") == 0)
                {
                    return prf_logOffResponseType_deserialize_obj(
                    (prf_logOffResponseType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_getAttributeResponseType") == 0)
                {
                    return prf_getAttributeResponseType_deserialize_obj(
                    (prf_getAttributeResponseType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_queryPackageListResponseType") == 0)
                {
                    return prf_queryPackageListResponseType_deserialize_obj(
                    (prf_queryPackageListResponseType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_getAttributeType") == 0)
                {
                    return prf_getAttributeType_deserialize_obj(
                    (prf_getAttributeType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_internalServerErrorFaultType") == 0)
                {
                    return prf_internalServerErrorFaultType_deserialize_obj(
                    (prf_internalServerErrorFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOnType") == 0)
                {
                    return prf_logOnType_deserialize_obj(
                    (prf_logOnType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_setAttributeResultType") == 0)
                {
                    return prf_setAttributeResultType_deserialize_obj(
                    (prf_setAttributeResultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_noActiveSessionFaultType") == 0)
                {
                    return prf_noActiveSessionFaultType_deserialize_obj(
                    (prf_noActiveSessionFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_queryPackageListType") == 0)
                {
                    return prf_queryPackageListType_deserialize_obj(
                    (prf_queryPackageListType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packagesType") == 0)
                {
                    return prf_packagesType_deserialize_obj(
                    (prf_packagesType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOffType") == 0)
                {
                    return prf_logOffType_deserialize_obj(
                    (prf_logOffType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_invalidParameterFaultType") == 0)
                {
                    return prf_invalidParameterFaultType_deserialize_obj(
                    (prf_invalidParameterFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOnResponseType") == 0)
                {
                    return prf_logOnResponseType_deserialize_obj(
                    (prf_logOnResponseType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packageType") == 0)
                {
                    return prf_packageType_deserialize_obj(
                    (prf_packageType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
            }

            
            if (axutil_strcmp(default_type, "prf_setAttributeType") == 0)
            {
                return prf_setAttributeType_deserialize_obj(
                (prf_setAttributeType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_packageListType") == 0)
            {
                return prf_packageListType_deserialize_obj(
                (prf_packageListType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_logOffResponseType") == 0)
            {
                return prf_logOffResponseType_deserialize_obj(
                (prf_logOffResponseType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_getAttributeResponseType") == 0)
            {
                return prf_getAttributeResponseType_deserialize_obj(
                (prf_getAttributeResponseType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_queryPackageListResponseType") == 0)
            {
                return prf_queryPackageListResponseType_deserialize_obj(
                (prf_queryPackageListResponseType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_getAttributeType") == 0)
            {
                return prf_getAttributeType_deserialize_obj(
                (prf_getAttributeType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_internalServerErrorFaultType") == 0)
            {
                return prf_internalServerErrorFaultType_deserialize_obj(
                (prf_internalServerErrorFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_logOnType") == 0)
            {
                return prf_logOnType_deserialize_obj(
                (prf_logOnType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_setAttributeResultType") == 0)
            {
                return prf_setAttributeResultType_deserialize_obj(
                (prf_setAttributeResultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_noActiveSessionFaultType") == 0)
            {
                return prf_noActiveSessionFaultType_deserialize_obj(
                (prf_noActiveSessionFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_queryPackageListType") == 0)
            {
                return prf_queryPackageListType_deserialize_obj(
                (prf_queryPackageListType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_packagesType") == 0)
            {
                return prf_packagesType_deserialize_obj(
                (prf_packagesType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_logOffType") == 0)
            {
                return prf_logOffType_deserialize_obj(
                (prf_logOffType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_invalidParameterFaultType") == 0)
            {
                return prf_invalidParameterFaultType_deserialize_obj(
                (prf_invalidParameterFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_logOnResponseType") == 0)
            {
                return prf_logOnResponseType_deserialize_obj(
                (prf_logOnResponseType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "prf_packageType") == 0)
            {
                return prf_packageType_deserialize_obj(
                (prf_packageType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            

            return AXIS2_FAILURE;
        }

        axiom_node_t* AXIS2_CALL
        axis2_prf_extension_mapper_serialize(
            prf_stubtype_t* _object,
            const axutil_env_t *env,
            axiom_node_t* om_node,
            axiom_element_t *om_element,
            int tag_closed,
            axutil_hash_t *namespaces,
            int *next_ns_index,
            axis2_char_t *default_type)
        {
            if (_object != NULL && prf_internaltype_get_type(_object) != NULL)
            {
                
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_setAttributeType") == 0)
                {
                    return prf_setAttributeType_serialize_obj(
                    (prf_setAttributeType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packageListType") == 0)
                {
                    return prf_packageListType_serialize_obj(
                    (prf_packageListType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOffResponseType") == 0)
                {
                    return prf_logOffResponseType_serialize_obj(
                    (prf_logOffResponseType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_getAttributeResponseType") == 0)
                {
                    return prf_getAttributeResponseType_serialize_obj(
                    (prf_getAttributeResponseType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_queryPackageListResponseType") == 0)
                {
                    return prf_queryPackageListResponseType_serialize_obj(
                    (prf_queryPackageListResponseType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_getAttributeType") == 0)
                {
                    return prf_getAttributeType_serialize_obj(
                    (prf_getAttributeType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_internalServerErrorFaultType") == 0)
                {
                    return prf_internalServerErrorFaultType_serialize_obj(
                    (prf_internalServerErrorFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOnType") == 0)
                {
                    return prf_logOnType_serialize_obj(
                    (prf_logOnType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_setAttributeResultType") == 0)
                {
                    return prf_setAttributeResultType_serialize_obj(
                    (prf_setAttributeResultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_noActiveSessionFaultType") == 0)
                {
                    return prf_noActiveSessionFaultType_serialize_obj(
                    (prf_noActiveSessionFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_queryPackageListType") == 0)
                {
                    return prf_queryPackageListType_serialize_obj(
                    (prf_queryPackageListType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packagesType") == 0)
                {
                    return prf_packagesType_serialize_obj(
                    (prf_packagesType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOffType") == 0)
                {
                    return prf_logOffType_serialize_obj(
                    (prf_logOffType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_invalidParameterFaultType") == 0)
                {
                    return prf_invalidParameterFaultType_serialize_obj(
                    (prf_invalidParameterFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_logOnResponseType") == 0)
                {
                    return prf_logOnResponseType_serialize_obj(
                    (prf_logOnResponseType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(prf_internaltype_get_type(_object), "prf_packageType") == 0)
                {
                    return prf_packageType_serialize_obj(
                    (prf_packageType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
            }

            
            if (axutil_strcmp(default_type, "prf_setAttributeType") == 0)
            {
                return prf_setAttributeType_serialize_obj(
                (prf_setAttributeType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_packageListType") == 0)
            {
                return prf_packageListType_serialize_obj(
                (prf_packageListType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_logOffResponseType") == 0)
            {
                return prf_logOffResponseType_serialize_obj(
                (prf_logOffResponseType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_getAttributeResponseType") == 0)
            {
                return prf_getAttributeResponseType_serialize_obj(
                (prf_getAttributeResponseType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_queryPackageListResponseType") == 0)
            {
                return prf_queryPackageListResponseType_serialize_obj(
                (prf_queryPackageListResponseType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_getAttributeType") == 0)
            {
                return prf_getAttributeType_serialize_obj(
                (prf_getAttributeType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_internalServerErrorFaultType") == 0)
            {
                return prf_internalServerErrorFaultType_serialize_obj(
                (prf_internalServerErrorFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_logOnType") == 0)
            {
                return prf_logOnType_serialize_obj(
                (prf_logOnType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_setAttributeResultType") == 0)
            {
                return prf_setAttributeResultType_serialize_obj(
                (prf_setAttributeResultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_noActiveSessionFaultType") == 0)
            {
                return prf_noActiveSessionFaultType_serialize_obj(
                (prf_noActiveSessionFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_queryPackageListType") == 0)
            {
                return prf_queryPackageListType_serialize_obj(
                (prf_queryPackageListType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_packagesType") == 0)
            {
                return prf_packagesType_serialize_obj(
                (prf_packagesType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_logOffType") == 0)
            {
                return prf_logOffType_serialize_obj(
                (prf_logOffType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_invalidParameterFaultType") == 0)
            {
                return prf_invalidParameterFaultType_serialize_obj(
                (prf_invalidParameterFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_logOnResponseType") == 0)
            {
                return prf_logOnResponseType_serialize_obj(
                (prf_logOnResponseType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "prf_packageType") == 0)
            {
                return prf_packageType_serialize_obj(
                (prf_packageType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            

            return AXIS2_FAILURE;
        }
    

