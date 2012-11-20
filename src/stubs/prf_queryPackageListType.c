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
         * prf_queryPackageListType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "prf_queryPackageListType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = queryPackageListType
                 * Namespace URI = http://www.pratsam.org/ns/profile/
                 * Namespace Prefix = ns1
                 */
           


        struct prf_queryPackageListType
        {
            axis2_char_t *property_TypeName;

            axis2_char_t* property_firmwareType;

                
                axis2_bool_t is_valid_firmwareType;
            axis2_char_t* property_firmwareVersion;

                
                axis2_bool_t is_valid_firmwareVersion;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                prf_queryPackageListType_set_firmwareType_nil(
                        prf_queryPackageListType_t* _queryPackageListType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_queryPackageListType_set_firmwareVersion_nil(
                        prf_queryPackageListType_t* _queryPackageListType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        prf_queryPackageListType_t* AXIS2_CALL
        prf_queryPackageListType_create(
            const axutil_env_t *env)
        {
            prf_queryPackageListType_t *_queryPackageListType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _queryPackageListType = (prf_queryPackageListType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(prf_queryPackageListType_t));

            if(NULL == _queryPackageListType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_queryPackageListType, 0, sizeof(prf_queryPackageListType_t));

            _queryPackageListType->property_TypeName = axutil_strdup(env, "prf_queryPackageListType");
            _queryPackageListType->property_firmwareType  = NULL;
                  _queryPackageListType->is_valid_firmwareType  = AXIS2_FALSE;
            _queryPackageListType->property_firmwareVersion  = NULL;
                  _queryPackageListType->is_valid_firmwareVersion  = AXIS2_FALSE;
            

            return _queryPackageListType;
        }

        prf_queryPackageListType_t* AXIS2_CALL
        prf_queryPackageListType_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _firmwareType,
                axis2_char_t* _firmwareVersion)
        {
            prf_queryPackageListType_t* prf_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            prf_obj = prf_queryPackageListType_create(env);

            
              status = prf_queryPackageListType_set_firmwareType(
                                     prf_obj,
                                     env,
                                     _firmwareType);
              if(status == AXIS2_FAILURE) {
                  prf_queryPackageListType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_queryPackageListType_set_firmwareVersion(
                                     prf_obj,
                                     env,
                                     _firmwareVersion);
              if(status == AXIS2_FAILURE) {
                  prf_queryPackageListType_free (prf_obj, env);
                  return NULL;
              }
            

            return prf_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                prf_queryPackageListType_free_popping_value(
                        prf_queryPackageListType_t* _queryPackageListType,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _queryPackageListType->property_firmwareType;

                    _queryPackageListType->property_firmwareType = (axis2_char_t*)NULL;
                    prf_queryPackageListType_free(_queryPackageListType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        prf_queryPackageListType_free(
                prf_queryPackageListType_t* _queryPackageListType,
                const axutil_env_t *env)
        {
            
            
            return axis2_prf_extension_mapper_free(
                (prf_stubtype_t*) _queryPackageListType,
                env,
                "prf_queryPackageListType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_queryPackageListType_free_obj(
                prf_queryPackageListType_t* _queryPackageListType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _queryPackageListType, AXIS2_FAILURE);

            if (_queryPackageListType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _queryPackageListType->property_TypeName);
            }

            prf_queryPackageListType_reset_firmwareType(_queryPackageListType, env);
            prf_queryPackageListType_reset_firmwareVersion(_queryPackageListType, env);
            

            if(_queryPackageListType)
            {
                AXIS2_FREE(env->allocator, _queryPackageListType);
                _queryPackageListType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        prf_queryPackageListType_deserialize(
                prf_queryPackageListType_t* _queryPackageListType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_prf_extension_mapper_deserialize(
                (prf_stubtype_t*) _queryPackageListType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "prf_queryPackageListType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_queryPackageListType_deserialize_obj(
                prf_queryPackageListType_t* _queryPackageListType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _queryPackageListType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for queryPackageListType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building firmwareType element
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
                                   
                                 element_qname = axutil_qname_create(env, "firmwareType", "http://www.pratsam.org/ns/profile/", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = prf_queryPackageListType_set_firmwareType(_queryPackageListType, env,
                                                               text_value);
                                      }
                                      
                                      else
                                      {
                                            /*
                                             * axis2_qname_t *qname = NULL;
                                             * axiom_attribute_t *the_attri = NULL;
                                             * 
                                             * qname = axutil_qname_create(env, "nil", "http://www.w3.org/2001/XMLSchema-instance", "xsi");
                                             * the_attri = axiom_element_get_attribute(current_element, env, qname);
                                             */
                                            /* currently thereis a bug in the axiom_element_get_attribute, so we have to go to this bad method */

                                            axiom_attribute_t *the_attri = NULL;
                                            axis2_char_t *attrib_text = NULL;
                                            axutil_hash_t *attribute_hash = NULL;

                                            attribute_hash = axiom_element_get_all_attributes(current_element, env);

                                            attrib_text = NULL;
                                            if(attribute_hash)
                                            {
                                                 axutil_hash_index_t *hi;
                                                 void *val;
                                                 const void *key;
                                        
                                                 for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                                                 {
                                                     axutil_hash_this(hi, &key, NULL, &val);
                                                     
                                                     if(strstr((axis2_char_t*)key, "nil|http://www.w3.org/2001/XMLSchema-instance"))
                                                     {
                                                         the_attri = (axiom_attribute_t*)val;
                                                         break;
                                                     }
                                                 }
                                            }

                                            if(the_attri)
                                            {
                                                attrib_text = axiom_attribute_get_value(the_attri, env);
                                            }
                                            else
                                            {
                                                /* this is hoping that attribute is stored in "http://www.w3.org/2001/XMLSchema-instance", this happnes when name is in default namespace */
                                                attrib_text = axiom_element_get_attribute_value_by_name(current_element, env, "nil");
                                            }

                                            if(attrib_text && 0 == axutil_strcmp(attrib_text, "1"))
                                            {
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element firmwareType");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = prf_queryPackageListType_set_firmwareType(_queryPackageListType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for firmwareType ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element firmwareType missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building firmwareVersion element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "firmwareVersion", "http://www.pratsam.org/ns/profile/", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = prf_queryPackageListType_set_firmwareVersion(_queryPackageListType, env,
                                                               text_value);
                                      }
                                      
                                      else
                                      {
                                            /*
                                             * axis2_qname_t *qname = NULL;
                                             * axiom_attribute_t *the_attri = NULL;
                                             * 
                                             * qname = axutil_qname_create(env, "nil", "http://www.w3.org/2001/XMLSchema-instance", "xsi");
                                             * the_attri = axiom_element_get_attribute(current_element, env, qname);
                                             */
                                            /* currently thereis a bug in the axiom_element_get_attribute, so we have to go to this bad method */

                                            axiom_attribute_t *the_attri = NULL;
                                            axis2_char_t *attrib_text = NULL;
                                            axutil_hash_t *attribute_hash = NULL;

                                            attribute_hash = axiom_element_get_all_attributes(current_element, env);

                                            attrib_text = NULL;
                                            if(attribute_hash)
                                            {
                                                 axutil_hash_index_t *hi;
                                                 void *val;
                                                 const void *key;
                                        
                                                 for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                                                 {
                                                     axutil_hash_this(hi, &key, NULL, &val);
                                                     
                                                     if(strstr((axis2_char_t*)key, "nil|http://www.w3.org/2001/XMLSchema-instance"))
                                                     {
                                                         the_attri = (axiom_attribute_t*)val;
                                                         break;
                                                     }
                                                 }
                                            }

                                            if(the_attri)
                                            {
                                                attrib_text = axiom_attribute_get_value(the_attri, env);
                                            }
                                            else
                                            {
                                                /* this is hoping that attribute is stored in "http://www.w3.org/2001/XMLSchema-instance", this happnes when name is in default namespace */
                                                attrib_text = axiom_element_get_attribute_value_by_name(current_element, env, "nil");
                                            }

                                            if(attrib_text && 0 == axutil_strcmp(attrib_text, "1"))
                                            {
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element firmwareVersion");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = prf_queryPackageListType_set_firmwareVersion(_queryPackageListType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for firmwareVersion ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element firmwareVersion missing");
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
          prf_queryPackageListType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          prf_queryPackageListType_declare_parent_namespaces(
                    prf_queryPackageListType_t* _queryPackageListType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        prf_queryPackageListType_serialize(
                prf_queryPackageListType_t* _queryPackageListType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_queryPackageListType == NULL)
            {
                return prf_queryPackageListType_serialize_obj(
                    _queryPackageListType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_prf_extension_mapper_serialize(
                    (prf_stubtype_t*) _queryPackageListType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "prf_queryPackageListType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        prf_queryPackageListType_serialize_obj(
                prf_queryPackageListType_t* _queryPackageListType,
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
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _queryPackageListType, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"queryPackageListType\"", NULL);
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
            xsi_type_attri = axiom_attribute_create (env, "type", "queryPackageListType", xsi_ns);
            
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
                      

                   if (!_queryPackageListType->is_valid_firmwareType)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property firmwareType");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("firmwareType"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("firmwareType")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing firmwareType element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sfirmwareType>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sfirmwareType>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _queryPackageListType->property_firmwareType;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * PRF_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.pratsam.org/ns/profile/",
                                            p_prefix));
                       }
                      

                   if (!_queryPackageListType->is_valid_firmwareVersion)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property firmwareVersion");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("firmwareVersion"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("firmwareVersion")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing firmwareVersion element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sfirmwareVersion>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sfirmwareVersion>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _queryPackageListType->property_firmwareVersion;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_2_temp = axutil_xml_quote_string(env, text_value_2, AXIS2_TRUE);
                           if (text_value_2_temp)
                           {
                               axutil_stream_write(stream, env, text_value_2_temp, axutil_strlen(text_value_2_temp));
                               AXIS2_FREE(env->allocator, text_value_2_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for firmwareType by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            prf_queryPackageListType_get_property1(
                prf_queryPackageListType_t* _queryPackageListType,
                const axutil_env_t *env)
            {
                return prf_queryPackageListType_get_firmwareType(_queryPackageListType,
                                             env);
            }

            /**
             * getter for firmwareType.
             */
            axis2_char_t* AXIS2_CALL
            prf_queryPackageListType_get_firmwareType(
                    prf_queryPackageListType_t* _queryPackageListType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _queryPackageListType, NULL);
                  

                return _queryPackageListType->property_firmwareType;
             }

            /**
             * setter for firmwareType
             */
            axis2_status_t AXIS2_CALL
            prf_queryPackageListType_set_firmwareType(
                    prf_queryPackageListType_t* _queryPackageListType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_firmwareType)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _queryPackageListType, AXIS2_FAILURE);
                
                if(_queryPackageListType->is_valid_firmwareType &&
                        arg_firmwareType == _queryPackageListType->property_firmwareType)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_firmwareType)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "firmwareType is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_queryPackageListType_reset_firmwareType(_queryPackageListType, env);

                
                if(NULL == arg_firmwareType)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _queryPackageListType->property_firmwareType = (axis2_char_t *)axutil_strdup(env, arg_firmwareType);
                        if(NULL == _queryPackageListType->property_firmwareType)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for firmwareType");
                            return AXIS2_FAILURE;
                        }
                        _queryPackageListType->is_valid_firmwareType = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for firmwareType
            */
           axis2_status_t AXIS2_CALL
           prf_queryPackageListType_reset_firmwareType(
                   prf_queryPackageListType_t* _queryPackageListType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _queryPackageListType, AXIS2_FAILURE);
               

               
            
                
                if(_queryPackageListType->property_firmwareType != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _queryPackageListType->property_firmwareType);
                     _queryPackageListType->property_firmwareType = NULL;
                }
            
                
                
                _queryPackageListType->is_valid_firmwareType = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether firmwareType is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_queryPackageListType_is_firmwareType_nil(
                   prf_queryPackageListType_t* _queryPackageListType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _queryPackageListType, AXIS2_TRUE);
               
               return !_queryPackageListType->is_valid_firmwareType;
           }

           /**
            * Set firmwareType to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_queryPackageListType_set_firmwareType_nil(
                   prf_queryPackageListType_t* _queryPackageListType,
                   const axutil_env_t *env)
           {
               return prf_queryPackageListType_reset_firmwareType(_queryPackageListType, env);
           }

           

            /**
             * Getter for firmwareVersion by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            prf_queryPackageListType_get_property2(
                prf_queryPackageListType_t* _queryPackageListType,
                const axutil_env_t *env)
            {
                return prf_queryPackageListType_get_firmwareVersion(_queryPackageListType,
                                             env);
            }

            /**
             * getter for firmwareVersion.
             */
            axis2_char_t* AXIS2_CALL
            prf_queryPackageListType_get_firmwareVersion(
                    prf_queryPackageListType_t* _queryPackageListType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _queryPackageListType, NULL);
                  

                return _queryPackageListType->property_firmwareVersion;
             }

            /**
             * setter for firmwareVersion
             */
            axis2_status_t AXIS2_CALL
            prf_queryPackageListType_set_firmwareVersion(
                    prf_queryPackageListType_t* _queryPackageListType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_firmwareVersion)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _queryPackageListType, AXIS2_FAILURE);
                
                if(_queryPackageListType->is_valid_firmwareVersion &&
                        arg_firmwareVersion == _queryPackageListType->property_firmwareVersion)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_firmwareVersion)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "firmwareVersion is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_queryPackageListType_reset_firmwareVersion(_queryPackageListType, env);

                
                if(NULL == arg_firmwareVersion)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _queryPackageListType->property_firmwareVersion = (axis2_char_t *)axutil_strdup(env, arg_firmwareVersion);
                        if(NULL == _queryPackageListType->property_firmwareVersion)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for firmwareVersion");
                            return AXIS2_FAILURE;
                        }
                        _queryPackageListType->is_valid_firmwareVersion = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for firmwareVersion
            */
           axis2_status_t AXIS2_CALL
           prf_queryPackageListType_reset_firmwareVersion(
                   prf_queryPackageListType_t* _queryPackageListType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _queryPackageListType, AXIS2_FAILURE);
               

               
            
                
                if(_queryPackageListType->property_firmwareVersion != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _queryPackageListType->property_firmwareVersion);
                     _queryPackageListType->property_firmwareVersion = NULL;
                }
            
                
                
                _queryPackageListType->is_valid_firmwareVersion = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether firmwareVersion is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_queryPackageListType_is_firmwareVersion_nil(
                   prf_queryPackageListType_t* _queryPackageListType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _queryPackageListType, AXIS2_TRUE);
               
               return !_queryPackageListType->is_valid_firmwareVersion;
           }

           /**
            * Set firmwareVersion to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_queryPackageListType_set_firmwareVersion_nil(
                   prf_queryPackageListType_t* _queryPackageListType,
                   const axutil_env_t *env)
           {
               return prf_queryPackageListType_reset_firmwareVersion(_queryPackageListType, env);
           }

           

