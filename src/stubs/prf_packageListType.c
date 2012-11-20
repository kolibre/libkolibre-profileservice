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
         * prf_packageListType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "prf_packageListType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = packageListType
                 * Namespace URI = http://www.pratsam.org/ns/profile/
                 * Namespace Prefix = ns1
                 */
           


        struct prf_packageListType
        {
            axis2_char_t *property_TypeName;

            axis2_char_t* property_name;

                
                axis2_bool_t is_valid_name;
            axis2_char_t* property_description;

                
                axis2_bool_t is_valid_description;
            axis2_char_t* property_version;

                
                axis2_bool_t is_valid_version;
            prf_packagesType_t* property_packages;

                
                axis2_bool_t is_valid_packages;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                prf_packageListType_set_name_nil(
                        prf_packageListType_t* _packageListType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageListType_set_description_nil(
                        prf_packageListType_t* _packageListType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageListType_set_version_nil(
                        prf_packageListType_t* _packageListType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageListType_set_packages_nil(
                        prf_packageListType_t* _packageListType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        prf_packageListType_t* AXIS2_CALL
        prf_packageListType_create(
            const axutil_env_t *env)
        {
            prf_packageListType_t *_packageListType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _packageListType = (prf_packageListType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(prf_packageListType_t));

            if(NULL == _packageListType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_packageListType, 0, sizeof(prf_packageListType_t));

            _packageListType->property_TypeName = axutil_strdup(env, "prf_packageListType");
            _packageListType->property_name  = NULL;
                  _packageListType->is_valid_name  = AXIS2_FALSE;
            _packageListType->property_description  = NULL;
                  _packageListType->is_valid_description  = AXIS2_FALSE;
            _packageListType->property_version  = NULL;
                  _packageListType->is_valid_version  = AXIS2_FALSE;
            _packageListType->property_packages  = NULL;
                  _packageListType->is_valid_packages  = AXIS2_FALSE;
            

            return _packageListType;
        }

        prf_packageListType_t* AXIS2_CALL
        prf_packageListType_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _name,
                axis2_char_t* _description,
                axis2_char_t* _version,
                prf_packagesType_t* _packages)
        {
            prf_packageListType_t* prf_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            prf_obj = prf_packageListType_create(env);

            
              status = prf_packageListType_set_name(
                                     prf_obj,
                                     env,
                                     _name);
              if(status == AXIS2_FAILURE) {
                  prf_packageListType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageListType_set_description(
                                     prf_obj,
                                     env,
                                     _description);
              if(status == AXIS2_FAILURE) {
                  prf_packageListType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageListType_set_version(
                                     prf_obj,
                                     env,
                                     _version);
              if(status == AXIS2_FAILURE) {
                  prf_packageListType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageListType_set_packages(
                                     prf_obj,
                                     env,
                                     _packages);
              if(status == AXIS2_FAILURE) {
                  prf_packageListType_free (prf_obj, env);
                  return NULL;
              }
            

            return prf_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                prf_packageListType_free_popping_value(
                        prf_packageListType_t* _packageListType,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _packageListType->property_name;

                    _packageListType->property_name = (axis2_char_t*)NULL;
                    prf_packageListType_free(_packageListType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        prf_packageListType_free(
                prf_packageListType_t* _packageListType,
                const axutil_env_t *env)
        {
            
            
            return axis2_prf_extension_mapper_free(
                (prf_stubtype_t*) _packageListType,
                env,
                "prf_packageListType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_packageListType_free_obj(
                prf_packageListType_t* _packageListType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);

            if (_packageListType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _packageListType->property_TypeName);
            }

            prf_packageListType_reset_name(_packageListType, env);
            prf_packageListType_reset_description(_packageListType, env);
            prf_packageListType_reset_version(_packageListType, env);
            prf_packageListType_reset_packages(_packageListType, env);
            

            if(_packageListType)
            {
                AXIS2_FREE(env->allocator, _packageListType);
                _packageListType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        prf_packageListType_deserialize(
                prf_packageListType_t* _packageListType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_prf_extension_mapper_deserialize(
                (prf_stubtype_t*) _packageListType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "prf_packageListType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_packageListType_deserialize_obj(
                prf_packageListType_t* _packageListType,
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
            AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for packageListType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building name element
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
                                   
                                 element_qname = axutil_qname_create(env, "name", "http://www.pratsam.org/ns/profile/", NULL);
                                 

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
                                            status = prf_packageListType_set_name(_packageListType, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element name");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = prf_packageListType_set_name(_packageListType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for name ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element name missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building description element
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
                                 
                                 element_qname = axutil_qname_create(env, "description", "http://www.pratsam.org/ns/profile/", NULL);
                                 

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
                                            status = prf_packageListType_set_description(_packageListType, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element description");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = prf_packageListType_set_description(_packageListType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for description ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element description missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building version element
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
                                 
                                 element_qname = axutil_qname_create(env, "version", "http://www.pratsam.org/ns/profile/", NULL);
                                 

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
                                            status = prf_packageListType_set_version(_packageListType, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element version");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = prf_packageListType_set_version(_packageListType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for version ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element version missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building packages element
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
                                 
                                 element_qname = axutil_qname_create(env, "packages", "http://www.pratsam.org/ns/profile/", NULL);
                                 

                           if (prf_packagesType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_prf_extension_mapper_create_from_node(env, &current_node, "prf_packagesType");

                                      status =  prf_packagesType_deserialize((prf_packagesType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element packages");
                                      }
                                      else
                                      {
                                          status = prf_packageListType_set_packages(_packageListType, env,
                                                                   (prf_packagesType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for packages ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element packages missing");
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
          prf_packageListType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          prf_packageListType_declare_parent_namespaces(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        prf_packageListType_serialize(
                prf_packageListType_t* _packageListType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_packageListType == NULL)
            {
                return prf_packageListType_serialize_obj(
                    _packageListType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_prf_extension_mapper_serialize(
                    (prf_stubtype_t*) _packageListType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "prf_packageListType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        prf_packageListType_serialize_obj(
                prf_packageListType_t* _packageListType,
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
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t text_value_4[PRF_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _packageListType, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"packageListType\"", NULL);
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
            xsi_type_attri = axiom_attribute_create (env, "type", "packageListType", xsi_ns);
            
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
                      

                   if (!_packageListType->is_valid_name)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property name");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("name"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("name")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing name element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sname>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sname>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _packageListType->property_name;
                           
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
                      

                   if (!_packageListType->is_valid_description)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property description");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("description"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("description")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing description element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sdescription>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sdescription>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _packageListType->property_description;
                           
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

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * PRF_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.pratsam.org/ns/profile/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.pratsam.org/ns/profile/",
                                            p_prefix));
                       }
                      

                   if (!_packageListType->is_valid_version)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property version");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("version"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("version")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing version element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sversion>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sversion>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _packageListType->property_version;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_3_temp = axutil_xml_quote_string(env, text_value_3, AXIS2_TRUE);
                           if (text_value_3_temp)
                           {
                               axutil_stream_write(stream, env, text_value_3_temp, axutil_strlen(text_value_3_temp));
                               AXIS2_FREE(env->allocator, text_value_3_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
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
                      

                   if (!_packageListType->is_valid_packages)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property packages");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("packages"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("packages")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing packages element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%spackages",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%spackages>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!prf_packagesType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            prf_packagesType_serialize(_packageListType->property_packages, 
                                                                                 env, current_node, parent_element,
                                                                                 prf_packagesType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!prf_packagesType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for name by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            prf_packageListType_get_property1(
                prf_packageListType_t* _packageListType,
                const axutil_env_t *env)
            {
                return prf_packageListType_get_name(_packageListType,
                                             env);
            }

            /**
             * getter for name.
             */
            axis2_char_t* AXIS2_CALL
            prf_packageListType_get_name(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageListType, NULL);
                  

                return _packageListType->property_name;
             }

            /**
             * setter for name
             */
            axis2_status_t AXIS2_CALL
            prf_packageListType_set_name(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_name)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);
                
                if(_packageListType->is_valid_name &&
                        arg_name == _packageListType->property_name)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_name)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "name is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageListType_reset_name(_packageListType, env);

                
                if(NULL == arg_name)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageListType->property_name = (axis2_char_t *)axutil_strdup(env, arg_name);
                        if(NULL == _packageListType->property_name)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for name");
                            return AXIS2_FAILURE;
                        }
                        _packageListType->is_valid_name = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for name
            */
           axis2_status_t AXIS2_CALL
           prf_packageListType_reset_name(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);
               

               
            
                
                if(_packageListType->property_name != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _packageListType->property_name);
                     _packageListType->property_name = NULL;
                }
            
                
                
                _packageListType->is_valid_name = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether name is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageListType_is_name_nil(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_TRUE);
               
               return !_packageListType->is_valid_name;
           }

           /**
            * Set name to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageListType_set_name_nil(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               return prf_packageListType_reset_name(_packageListType, env);
           }

           

            /**
             * Getter for description by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            prf_packageListType_get_property2(
                prf_packageListType_t* _packageListType,
                const axutil_env_t *env)
            {
                return prf_packageListType_get_description(_packageListType,
                                             env);
            }

            /**
             * getter for description.
             */
            axis2_char_t* AXIS2_CALL
            prf_packageListType_get_description(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageListType, NULL);
                  

                return _packageListType->property_description;
             }

            /**
             * setter for description
             */
            axis2_status_t AXIS2_CALL
            prf_packageListType_set_description(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_description)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);
                
                if(_packageListType->is_valid_description &&
                        arg_description == _packageListType->property_description)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_description)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "description is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageListType_reset_description(_packageListType, env);

                
                if(NULL == arg_description)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageListType->property_description = (axis2_char_t *)axutil_strdup(env, arg_description);
                        if(NULL == _packageListType->property_description)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for description");
                            return AXIS2_FAILURE;
                        }
                        _packageListType->is_valid_description = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for description
            */
           axis2_status_t AXIS2_CALL
           prf_packageListType_reset_description(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);
               

               
            
                
                if(_packageListType->property_description != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _packageListType->property_description);
                     _packageListType->property_description = NULL;
                }
            
                
                
                _packageListType->is_valid_description = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether description is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageListType_is_description_nil(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_TRUE);
               
               return !_packageListType->is_valid_description;
           }

           /**
            * Set description to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageListType_set_description_nil(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               return prf_packageListType_reset_description(_packageListType, env);
           }

           

            /**
             * Getter for version by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            prf_packageListType_get_property3(
                prf_packageListType_t* _packageListType,
                const axutil_env_t *env)
            {
                return prf_packageListType_get_version(_packageListType,
                                             env);
            }

            /**
             * getter for version.
             */
            axis2_char_t* AXIS2_CALL
            prf_packageListType_get_version(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageListType, NULL);
                  

                return _packageListType->property_version;
             }

            /**
             * setter for version
             */
            axis2_status_t AXIS2_CALL
            prf_packageListType_set_version(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_version)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);
                
                if(_packageListType->is_valid_version &&
                        arg_version == _packageListType->property_version)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_version)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "version is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageListType_reset_version(_packageListType, env);

                
                if(NULL == arg_version)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageListType->property_version = (axis2_char_t *)axutil_strdup(env, arg_version);
                        if(NULL == _packageListType->property_version)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for version");
                            return AXIS2_FAILURE;
                        }
                        _packageListType->is_valid_version = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for version
            */
           axis2_status_t AXIS2_CALL
           prf_packageListType_reset_version(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);
               

               
            
                
                if(_packageListType->property_version != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _packageListType->property_version);
                     _packageListType->property_version = NULL;
                }
            
                
                
                _packageListType->is_valid_version = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether version is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageListType_is_version_nil(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_TRUE);
               
               return !_packageListType->is_valid_version;
           }

           /**
            * Set version to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageListType_set_version_nil(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               return prf_packageListType_reset_version(_packageListType, env);
           }

           

            /**
             * Getter for packages by  Property Number 4
             */
            prf_packagesType_t* AXIS2_CALL
            prf_packageListType_get_property4(
                prf_packageListType_t* _packageListType,
                const axutil_env_t *env)
            {
                return prf_packageListType_get_packages(_packageListType,
                                             env);
            }

            /**
             * getter for packages.
             */
            prf_packagesType_t* AXIS2_CALL
            prf_packageListType_get_packages(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageListType, NULL);
                  

                return _packageListType->property_packages;
             }

            /**
             * setter for packages
             */
            axis2_status_t AXIS2_CALL
            prf_packageListType_set_packages(
                    prf_packageListType_t* _packageListType,
                    const axutil_env_t *env,
                    prf_packagesType_t*  arg_packages)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);
                
                if(_packageListType->is_valid_packages &&
                        arg_packages == _packageListType->property_packages)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_packages)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "packages is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageListType_reset_packages(_packageListType, env);

                
                if(NULL == arg_packages)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageListType->property_packages = arg_packages;
                        _packageListType->is_valid_packages = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for packages
            */
           axis2_status_t AXIS2_CALL
           prf_packageListType_reset_packages(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_FAILURE);
               

               
            
                
                if(_packageListType->property_packages != NULL)
                {
                   
                   prf_packagesType_free(_packageListType->property_packages, env);
                     _packageListType->property_packages = NULL;
                }
            
                
                
                _packageListType->is_valid_packages = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether packages is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageListType_is_packages_nil(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageListType, AXIS2_TRUE);
               
               return !_packageListType->is_valid_packages;
           }

           /**
            * Set packages to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageListType_set_packages_nil(
                   prf_packageListType_t* _packageListType,
                   const axutil_env_t *env)
           {
               return prf_packageListType_reset_packages(_packageListType, env);
           }

           

