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
         * prf_logOn.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "prf_logOn.h"
        
               /*
                * implmentation of the logOn|http://www.pratsam.org/ns/profile/ element
                */
           


        struct prf_logOn
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            prf_logOnType_t* property_logOn;

                
                axis2_bool_t is_valid_logOn;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                prf_logOn_set_logOn_nil(
                        prf_logOn_t* _logOn,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        prf_logOn_t* AXIS2_CALL
        prf_logOn_create(
            const axutil_env_t *env)
        {
            prf_logOn_t *_logOn = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _logOn = (prf_logOn_t *) AXIS2_MALLOC(env->
                allocator, sizeof(prf_logOn_t));

            if(NULL == _logOn)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_logOn, 0, sizeof(prf_logOn_t));

            _logOn->property_TypeName = axutil_strdup(env, "prf_logOn");
            _logOn->property_logOn  = NULL;
                  _logOn->is_valid_logOn  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "logOn",
                        "http://www.pratsam.org/ns/profile/",
                        NULL);
                _logOn->qname = qname;
            

            return _logOn;
        }

        prf_logOn_t* AXIS2_CALL
        prf_logOn_create_with_values(
            const axutil_env_t *env,
                prf_logOnType_t* _logOn)
        {
            prf_logOn_t* prf_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            prf_obj = prf_logOn_create(env);

            
              status = prf_logOn_set_logOn(
                                     prf_obj,
                                     env,
                                     _logOn);
              if(status == AXIS2_FAILURE) {
                  prf_logOn_free (prf_obj, env);
                  return NULL;
              }
            

            return prf_obj;
        }
      
        prf_logOnType_t* AXIS2_CALL
                prf_logOn_free_popping_value(
                        prf_logOn_t* _logOn,
                        const axutil_env_t *env)
                {
                    prf_logOnType_t* value;

                    
                    
                    value = _logOn->property_logOn;

                    _logOn->property_logOn = (prf_logOnType_t*)NULL;
                    prf_logOn_free(_logOn, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        prf_logOn_free(
                prf_logOn_t* _logOn,
                const axutil_env_t *env)
        {
            
            
            return prf_logOn_free_obj(
                _logOn,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        prf_logOn_free_obj(
                prf_logOn_t* _logOn,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _logOn, AXIS2_FAILURE);

            if (_logOn->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _logOn->property_TypeName);
            }

            prf_logOn_reset_logOn(_logOn, env);
            
              if(_logOn->qname)
              {
                  axutil_qname_free (_logOn->qname, env);
                  _logOn->qname = NULL;
              }
            

            if(_logOn)
            {
                AXIS2_FREE(env->allocator, _logOn);
                _logOn = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        prf_logOn_deserialize(
                prf_logOn_t* _logOn,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return prf_logOn_deserialize_obj(
                _logOn,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        prf_logOn_deserialize_obj(
                prf_logOn_t* _logOn,
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
            AXIS2_PARAM_CHECK(env->error, _logOn, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for logOn : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _logOn-> qname))
                    {
                        
                          first_node = parent;
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for logOn : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_logOn-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building logOn element
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
                                   
                                 element_qname = axutil_qname_create(env, "logOn", "http://www.pratsam.org/ns/profile/", NULL);
                                 

                           if (prf_logOnType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_prf_extension_mapper_create_from_node(env, &current_node, "prf_logOnType");

                                      status =  prf_logOnType_deserialize((prf_logOnType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element logOn");
                                      }
                                      else
                                      {
                                          status = prf_logOn_set_logOn(_logOn, env,
                                                                   (prf_logOnType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for logOn ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element logOn missing");
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
          prf_logOn_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          prf_logOn_declare_parent_namespaces(
                    prf_logOn_t* _logOn,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        prf_logOn_serialize(
                prf_logOn_t* _logOn,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return prf_logOn_serialize_obj(
                    _logOn, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        prf_logOn_serialize_obj(
                prf_logOn_t* _logOn,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
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

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _logOn, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.pratsam.org/ns/profile/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "logOn", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * PRF_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.pratsam.org/ns/profile/",
                                            p_prefix));
                       }
                      

                   if (!_logOn->is_valid_logOn)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property logOn");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("logOn"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("logOn")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing logOn element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%slogOn",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%slogOn>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    prf_logOnType_serialize(_logOn->property_logOn, 
                                                                                 env, current_node, parent_element,
                                                                                 prf_logOnType_is_particle() || AXIS2_TRUE, namespaces, next_ns_index);
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for logOn by  Property Number 1
             */
            prf_logOnType_t* AXIS2_CALL
            prf_logOn_get_property1(
                prf_logOn_t* _logOn,
                const axutil_env_t *env)
            {
                return prf_logOn_get_logOn(_logOn,
                                             env);
            }

            /**
             * getter for logOn.
             */
            prf_logOnType_t* AXIS2_CALL
            prf_logOn_get_logOn(
                    prf_logOn_t* _logOn,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _logOn, NULL);
                  

                return _logOn->property_logOn;
             }

            /**
             * setter for logOn
             */
            axis2_status_t AXIS2_CALL
            prf_logOn_set_logOn(
                    prf_logOn_t* _logOn,
                    const axutil_env_t *env,
                    prf_logOnType_t*  arg_logOn)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _logOn, AXIS2_FAILURE);
                
                if(_logOn->is_valid_logOn &&
                        arg_logOn == _logOn->property_logOn)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_logOn)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "logOn is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_logOn_reset_logOn(_logOn, env);

                
                if(NULL == arg_logOn)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _logOn->property_logOn = arg_logOn;
                        _logOn->is_valid_logOn = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for logOn
            */
           axis2_status_t AXIS2_CALL
           prf_logOn_reset_logOn(
                   prf_logOn_t* _logOn,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _logOn, AXIS2_FAILURE);
               

               
            
                
                if(_logOn->property_logOn != NULL)
                {
                   
                   prf_logOnType_free(_logOn->property_logOn, env);
                     _logOn->property_logOn = NULL;
                }
            
                
                
                _logOn->is_valid_logOn = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether logOn is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_logOn_is_logOn_nil(
                   prf_logOn_t* _logOn,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _logOn, AXIS2_TRUE);
               
               return !_logOn->is_valid_logOn;
           }

           /**
            * Set logOn to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_logOn_set_logOn_nil(
                   prf_logOn_t* _logOn,
                   const axutil_env_t *env)
           {
               return prf_logOn_reset_logOn(_logOn, env);
           }

           

