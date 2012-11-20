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
         * prf_logOffType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "prf_logOffType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = logOffType
                 * Namespace URI = http://www.pratsam.org/ns/profile/
                 * Namespace Prefix = ns1
                 */
           


        struct prf_logOffType
        {
            axis2_char_t *property_TypeName;

            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        prf_logOffType_t* AXIS2_CALL
        prf_logOffType_create(
            const axutil_env_t *env)
        {
            prf_logOffType_t *_logOffType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _logOffType = (prf_logOffType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(prf_logOffType_t));

            if(NULL == _logOffType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_logOffType, 0, sizeof(prf_logOffType_t));

            _logOffType->property_TypeName = axutil_strdup(env, "prf_logOffType");
            

            return _logOffType;
        }

        prf_logOffType_t* AXIS2_CALL
        prf_logOffType_create_with_values(
            const axutil_env_t *env)
        {
            prf_logOffType_t* prf_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            prf_obj = prf_logOffType_create(env);

            

            return prf_obj;
        }
      
        
                void* AXIS2_CALL
                prf_logOffType_free_popping_value(
                        prf_logOffType_t* _logOffType,
                        const axutil_env_t *env)
                {
                    prf_logOffType_free(_logOffType, env);
                    return NULL;
                }
            

        axis2_status_t AXIS2_CALL
        prf_logOffType_free(
                prf_logOffType_t* _logOffType,
                const axutil_env_t *env)
        {
            
            
            return axis2_prf_extension_mapper_free(
                (prf_stubtype_t*) _logOffType,
                env,
                "prf_logOffType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_logOffType_free_obj(
                prf_logOffType_t* _logOffType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _logOffType, AXIS2_FAILURE);

            if (_logOffType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _logOffType->property_TypeName);
            }

            

            if(_logOffType)
            {
                AXIS2_FREE(env->allocator, _logOffType);
                _logOffType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        prf_logOffType_deserialize(
                prf_logOffType_t* _logOffType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_prf_extension_mapper_deserialize(
                (prf_stubtype_t*) _logOffType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "prf_logOffType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_logOffType_deserialize_obj(
                prf_logOffType_t* _logOffType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
            axutil_qname_t *element_qname = NULL; 
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _logOffType, AXIS2_FAILURE);

            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          prf_logOffType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          prf_logOffType_declare_parent_namespaces(
                    prf_logOffType_t* _logOffType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        prf_logOffType_serialize(
                prf_logOffType_t* _logOffType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_logOffType == NULL)
            {
                return prf_logOffType_serialize_obj(
                    _logOffType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_prf_extension_mapper_serialize(
                    (prf_stubtype_t*) _logOffType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "prf_logOffType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        prf_logOffType_serialize_obj(
                prf_logOffType_t* _logOffType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
         axis2_char_t* type_attrib = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _logOffType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"logOffType\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://www.pratsam.org/ns/profile/",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "logOffType", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        

            return parent;
        }


        

