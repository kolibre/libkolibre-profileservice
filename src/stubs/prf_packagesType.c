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
         * prf_packagesType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "prf_packagesType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = packagesType
                 * Namespace URI = http://www.pratsam.org/ns/profile/
                 * Namespace Prefix = ns1
                 */
           


        struct prf_packagesType
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_package;

                
                axis2_bool_t is_valid_package;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 prf_packagesType_set_package_nil_at(
                        prf_packagesType_t* _packagesType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                prf_packagesType_set_package_nil(
                        prf_packagesType_t* _packagesType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        prf_packagesType_t* AXIS2_CALL
        prf_packagesType_create(
            const axutil_env_t *env)
        {
            prf_packagesType_t *_packagesType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _packagesType = (prf_packagesType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(prf_packagesType_t));

            if(NULL == _packagesType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_packagesType, 0, sizeof(prf_packagesType_t));

            _packagesType->property_TypeName = axutil_strdup(env, "prf_packagesType");
            _packagesType->property_package  = NULL;
                  _packagesType->is_valid_package  = AXIS2_FALSE;
            

            return _packagesType;
        }

        prf_packagesType_t* AXIS2_CALL
        prf_packagesType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _package)
        {
            prf_packagesType_t* prf_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            prf_obj = prf_packagesType_create(env);

            
              status = prf_packagesType_set_package(
                                     prf_obj,
                                     env,
                                     _package);
              if(status == AXIS2_FAILURE) {
                  prf_packagesType_free (prf_obj, env);
                  return NULL;
              }
            

            return prf_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                prf_packagesType_free_popping_value(
                        prf_packagesType_t* _packagesType,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _packagesType->property_package;

                    _packagesType->property_package = (axutil_array_list_t*)NULL;
                    prf_packagesType_free(_packagesType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        prf_packagesType_free(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env)
        {
            
            
            return axis2_prf_extension_mapper_free(
                (prf_stubtype_t*) _packagesType,
                env,
                "prf_packagesType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_packagesType_free_obj(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_FAILURE);

            if (_packagesType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _packagesType->property_TypeName);
            }

            prf_packagesType_reset_package(_packagesType, env);
            

            if(_packagesType)
            {
                AXIS2_FREE(env->allocator, _packagesType);
                _packagesType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        prf_packagesType_deserialize(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_prf_extension_mapper_deserialize(
                (prf_stubtype_t*) _packagesType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "prf_packagesType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_packagesType_deserialize_obj(
                prf_packagesType_t* _packagesType,
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
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for packagesType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                    /*
                     * building package array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building package element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "package", "http://www.pratsam.org/ns/profile/", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (prf_packageType_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_prf_extension_mapper_create_from_node(env, &current_node, "prf_packageType");
                                          
                                          status =  prf_packageType_deserialize((prf_packageType_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element package ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for package ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 1)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "package (@minOccurs = '1') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = prf_packagesType_set_package(_packagesType, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          prf_packagesType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          prf_packagesType_declare_parent_namespaces(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        prf_packagesType_serialize(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_packagesType == NULL)
            {
                return prf_packagesType_serialize_obj(
                    _packagesType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_prf_extension_mapper_serialize(
                    (prf_stubtype_t*) _packagesType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "prf_packagesType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        prf_packagesType_serialize_obj(
                prf_packagesType_t* _packagesType,
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
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t text_value_1[PRF_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _packagesType, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"packagesType\"", NULL);
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
            xsi_type_attri = axiom_attribute_create (env, "type", "packagesType", xsi_ns);
            
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
                      

                   if (!_packagesType->is_valid_package)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property package");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("package"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("package")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing package array
                      */
                     if (_packagesType->property_package != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%spackage",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%spackage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_packagesType->property_package, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_packagesType->property_package, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing package element
                      */

                    
                     
                            if(!prf_packageType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            prf_packageType_serialize((prf_packageType_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 prf_packageType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!prf_packageType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for package by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            prf_packagesType_get_property1(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env)
            {
                return prf_packagesType_get_package(_packagesType,
                                             env);
            }

            /**
             * getter for package.
             */
            axutil_array_list_t* AXIS2_CALL
            prf_packagesType_get_package(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packagesType, NULL);
                  

                return _packagesType->property_package;
             }

            /**
             * setter for package
             */
            axis2_status_t AXIS2_CALL
            prf_packagesType_set_package(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_package)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_FAILURE);
                
                if(_packagesType->is_valid_package &&
                        arg_package == _packagesType->property_package)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_package, env);
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "package has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_package, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of package is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_package)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "package is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packagesType_reset_package(_packagesType, env);

                
                if(NULL == arg_package)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packagesType->property_package = arg_package;
                        if(non_nil_exists)
                        {
                            _packagesType->is_valid_package = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of package.
             */
            prf_packageType_t* AXIS2_CALL
            prf_packagesType_get_package_at(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env, int i)
            {
                prf_packageType_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packagesType, NULL);
                  

                if(_packagesType->property_package == NULL)
                {
                    return (prf_packageType_t*)0;
                }
                ret_val = (prf_packageType_t*)axutil_array_list_get(_packagesType->property_package, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of package.
             */
            axis2_status_t AXIS2_CALL
            prf_packagesType_set_package_at(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env, int i,
                    prf_packageType_t* arg_package)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_FAILURE);
                
                if( _packagesType->is_valid_package &&
                    _packagesType->property_package &&
                
                    arg_package == (prf_packageType_t*)axutil_array_list_get(_packagesType->property_package, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_package)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_packagesType->property_package != NULL)
                        {
                            size = axutil_array_list_size(_packagesType->property_package, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_packagesType->property_package, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 1)
                                    {
                                        break;
                                    }
                                }
                            }

                         
                            if( non_nil_count < 1)
                            {
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of package is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of package is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_packagesType->property_package == NULL)
                {
                    _packagesType->property_package = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_packagesType->property_package, env, i);
                if(NULL != element)
                {
                  
                  
                  prf_packageType_free((prf_packageType_t*)element, env);
                     
                }

                
                   axutil_array_list_set(_packagesType->property_package , env, i, arg_package);
                  _packagesType->is_valid_package = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to package.
             */
            axis2_status_t AXIS2_CALL
            prf_packagesType_add_package(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env,
                    prf_packageType_t* arg_package)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_FAILURE);

                
                    if(NULL == arg_package)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of package is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_packagesType->property_package == NULL)
                {
                    _packagesType->property_package = axutil_array_list_create(env, 10);
                }
                if(_packagesType->property_package == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for package");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_packagesType->property_package , env, arg_package);
                  _packagesType->is_valid_package = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the package array.
             */
            int AXIS2_CALL
            prf_packagesType_sizeof_package(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _packagesType, -1);
                if(_packagesType->property_package == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_packagesType->property_package, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            prf_packagesType_remove_package_at(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env, int i)
            {
                return prf_packagesType_set_package_nil_at(_packagesType, env, i);
            }

            

           /**
            * resetter for package
            */
           axis2_status_t AXIS2_CALL
           prf_packagesType_reset_package(
                   prf_packagesType_t* _packagesType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_FAILURE);
               

               
                  if (_packagesType->property_package != NULL)
                  {
                      count = axutil_array_list_size(_packagesType->property_package, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_packagesType->property_package, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   prf_packageType_free((prf_packageType_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_packagesType->property_package, env);
                  }
                _packagesType->is_valid_package = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether package is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packagesType_is_package_nil(
                   prf_packagesType_t* _packagesType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_TRUE);
               
               return !_packagesType->is_valid_package;
           }

           /**
            * Set package to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packagesType_set_package_nil(
                   prf_packagesType_t* _packagesType,
                   const axutil_env_t *env)
           {
               return prf_packagesType_reset_package(_packagesType, env);
           }

           
           /**
            * Check whether package is nill at i
            */
           axis2_bool_t AXIS2_CALL
           prf_packagesType_is_package_nil_at(
                   prf_packagesType_t* _packagesType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_TRUE);
               
               return (_packagesType->is_valid_package == AXIS2_FALSE ||
                        NULL == _packagesType->property_package || 
                        NULL == axutil_array_list_get(_packagesType->property_package, env, i));
           }

           /**
            * Set package to nill at i
            */
           axis2_status_t AXIS2_CALL
           prf_packagesType_set_package_nil_at(
                   prf_packagesType_t* _packagesType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packagesType, AXIS2_FAILURE);

                if(_packagesType->property_package == NULL ||
                            _packagesType->is_valid_package == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_packagesType->property_package, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_packagesType->property_package, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 1)
                            {
                                break;
                            }
                        }
                    }
                }
                
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of package is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of package is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_packagesType->property_package == NULL)
                {
                    _packagesType->is_valid_package = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_packagesType->property_package, env, i);
                if(NULL != element)
                {
                  
                  
                  prf_packageType_free((prf_packageType_t*)element, env);
                     
                }

                

                
                axutil_array_list_set(_packagesType->property_package , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

