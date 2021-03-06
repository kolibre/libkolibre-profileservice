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
         * prf_queryPackageListResponseType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "prf_queryPackageListResponseType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = queryPackageListResponseType
                 * Namespace URI = http://www.pratsam.org/ns/profile/
                 * Namespace Prefix = ns1
                 */
           


        struct prf_queryPackageListResponseType
        {
            axis2_char_t *property_TypeName;

            prf_packageListType_t* property_packageListResult;

                
                axis2_bool_t is_valid_packageListResult;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                prf_queryPackageListResponseType_set_packageListResult_nil(
                        prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        prf_queryPackageListResponseType_t* AXIS2_CALL
        prf_queryPackageListResponseType_create(
            const axutil_env_t *env)
        {
            prf_queryPackageListResponseType_t *_queryPackageListResponseType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _queryPackageListResponseType = (prf_queryPackageListResponseType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(prf_queryPackageListResponseType_t));

            if(NULL == _queryPackageListResponseType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_queryPackageListResponseType, 0, sizeof(prf_queryPackageListResponseType_t));

            _queryPackageListResponseType->property_TypeName = axutil_strdup(env, "prf_queryPackageListResponseType");
            _queryPackageListResponseType->property_packageListResult  = NULL;
                  _queryPackageListResponseType->is_valid_packageListResult  = AXIS2_FALSE;
            

            return _queryPackageListResponseType;
        }

        prf_queryPackageListResponseType_t* AXIS2_CALL
        prf_queryPackageListResponseType_create_with_values(
            const axutil_env_t *env,
                prf_packageListType_t* _packageListResult)
        {
            prf_queryPackageListResponseType_t* prf_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            prf_obj = prf_queryPackageListResponseType_create(env);

            
              status = prf_queryPackageListResponseType_set_packageListResult(
                                     prf_obj,
                                     env,
                                     _packageListResult);
              if(status == AXIS2_FAILURE) {
                  prf_queryPackageListResponseType_free (prf_obj, env);
                  return NULL;
              }
            

            return prf_obj;
        }
      
        prf_packageListType_t* AXIS2_CALL
                prf_queryPackageListResponseType_free_popping_value(
                        prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                        const axutil_env_t *env)
                {
                    prf_packageListType_t* value;

                    
                    
                    value = _queryPackageListResponseType->property_packageListResult;

                    _queryPackageListResponseType->property_packageListResult = (prf_packageListType_t*)NULL;
                    prf_queryPackageListResponseType_free(_queryPackageListResponseType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        prf_queryPackageListResponseType_free(
                prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                const axutil_env_t *env)
        {
            
            
            return axis2_prf_extension_mapper_free(
                (prf_stubtype_t*) _queryPackageListResponseType,
                env,
                "prf_queryPackageListResponseType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_queryPackageListResponseType_free_obj(
                prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _queryPackageListResponseType, AXIS2_FAILURE);

            if (_queryPackageListResponseType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _queryPackageListResponseType->property_TypeName);
            }

            prf_queryPackageListResponseType_reset_packageListResult(_queryPackageListResponseType, env);
            

            if(_queryPackageListResponseType)
            {
                AXIS2_FREE(env->allocator, _queryPackageListResponseType);
                _queryPackageListResponseType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        prf_queryPackageListResponseType_deserialize(
                prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_prf_extension_mapper_deserialize(
                (prf_stubtype_t*) _queryPackageListResponseType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "prf_queryPackageListResponseType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_queryPackageListResponseType_deserialize_obj(
                prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _queryPackageListResponseType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for queryPackageListResponseType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building packageListResult element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "packageListResult", "http://www.pratsam.org/ns/profile/", NULL);
                                 

                           if (prf_packageListType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_prf_extension_mapper_create_from_node(env, &current_node, "prf_packageListType");

                                      status =  prf_packageListType_deserialize((prf_packageListType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element packageListResult");
                                      }
                                      else
                                      {
                                          status = prf_queryPackageListResponseType_set_packageListResult(_queryPackageListResponseType, env,
                                                                   (prf_packageListType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for packageListResult ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                              else if(!dont_care_minoccurs)
                              {
                                  if(element_qname)
                                  {
                                      axutil_qname_free(element_qname, env);
                                  }
                                  /* this is not a nillable element*/
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element packageListResult missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          prf_queryPackageListResponseType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          prf_queryPackageListResponseType_declare_parent_namespaces(
                    prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        prf_queryPackageListResponseType_serialize(
                prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_queryPackageListResponseType == NULL)
            {
                return prf_queryPackageListResponseType_serialize_obj(
                    _queryPackageListResponseType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_prf_extension_mapper_serialize(
                    (prf_stubtype_t*) _queryPackageListResponseType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "prf_queryPackageListResponseType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        prf_queryPackageListResponseType_serialize_obj(
                prf_queryPackageListResponseType_t* _queryPackageListResponseType,
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
            
                    axis2_char_t text_value_1[PRF_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _queryPackageListResponseType, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"queryPackageListResponseType\"", NULL);
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
            xsi_type_attri = axiom_attribute_create (env, "type", "queryPackageListResponseType", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * PRF_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.pratsam.org/ns/profile/",
                                            p_prefix));
                       }
                      

                   if (!_queryPackageListResponseType->is_valid_packageListResult)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property packageListResult");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("packageListResult"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("packageListResult")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing packageListResult element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%spackageListResult",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%spackageListResult>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!prf_packageListType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            prf_packageListType_serialize(_queryPackageListResponseType->property_packageListResult, 
                                                                                 env, current_node, parent_element,
                                                                                 prf_packageListType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!prf_packageListType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for packageListResult by  Property Number 1
             */
            prf_packageListType_t* AXIS2_CALL
            prf_queryPackageListResponseType_get_property1(
                prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                const axutil_env_t *env)
            {
                return prf_queryPackageListResponseType_get_packageListResult(_queryPackageListResponseType,
                                             env);
            }

            /**
             * getter for packageListResult.
             */
            prf_packageListType_t* AXIS2_CALL
            prf_queryPackageListResponseType_get_packageListResult(
                    prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _queryPackageListResponseType, NULL);
                  

                return _queryPackageListResponseType->property_packageListResult;
             }

            /**
             * setter for packageListResult
             */
            axis2_status_t AXIS2_CALL
            prf_queryPackageListResponseType_set_packageListResult(
                    prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                    const axutil_env_t *env,
                    prf_packageListType_t*  arg_packageListResult)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _queryPackageListResponseType, AXIS2_FAILURE);
                
                if(_queryPackageListResponseType->is_valid_packageListResult &&
                        arg_packageListResult == _queryPackageListResponseType->property_packageListResult)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_packageListResult)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "packageListResult is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_queryPackageListResponseType_reset_packageListResult(_queryPackageListResponseType, env);

                
                if(NULL == arg_packageListResult)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _queryPackageListResponseType->property_packageListResult = arg_packageListResult;
                        _queryPackageListResponseType->is_valid_packageListResult = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for packageListResult
            */
           axis2_status_t AXIS2_CALL
           prf_queryPackageListResponseType_reset_packageListResult(
                   prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _queryPackageListResponseType, AXIS2_FAILURE);
               

               
            
                
                if(_queryPackageListResponseType->property_packageListResult != NULL)
                {
                   
                   prf_packageListType_free(_queryPackageListResponseType->property_packageListResult, env);
                     _queryPackageListResponseType->property_packageListResult = NULL;
                }
            
                
                
                _queryPackageListResponseType->is_valid_packageListResult = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether packageListResult is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_queryPackageListResponseType_is_packageListResult_nil(
                   prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _queryPackageListResponseType, AXIS2_TRUE);
               
               return !_queryPackageListResponseType->is_valid_packageListResult;
           }

           /**
            * Set packageListResult to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_queryPackageListResponseType_set_packageListResult_nil(
                   prf_queryPackageListResponseType_t* _queryPackageListResponseType,
                   const axutil_env_t *env)
           {
               return prf_queryPackageListResponseType_reset_packageListResult(_queryPackageListResponseType, env);
           }

           

