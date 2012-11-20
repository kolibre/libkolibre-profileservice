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
         * prf_packageType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "prf_packageType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = packageType
                 * Namespace URI = http://www.pratsam.org/ns/profile/
                 * Namespace Prefix = ns1
                 */
           


        struct prf_packageType
        {
            axis2_char_t *property_TypeName;

            axis2_char_t* property_description;

                
                axis2_bool_t is_valid_description;
            axis2_char_t* property_id;

                
                axis2_bool_t is_valid_id;
            axis2_char_t* property_md5sum;

                
                axis2_bool_t is_valid_md5sum;
            axis2_char_t* property_type;

                
                axis2_bool_t is_valid_type;
            axis2_char_t* property_name;

                
                axis2_bool_t is_valid_name;
            int property_size;

                
                axis2_bool_t is_valid_size;
            axutil_uri_t* property_uri;

                
                axis2_bool_t is_valid_uri;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                prf_packageType_set_description_nil(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageType_set_id_nil(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageType_set_md5sum_nil(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageType_set_type_nil(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageType_set_name_nil(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageType_set_size_nil(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                prf_packageType_set_uri_nil(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        prf_packageType_t* AXIS2_CALL
        prf_packageType_create(
            const axutil_env_t *env)
        {
            prf_packageType_t *_packageType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _packageType = (prf_packageType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(prf_packageType_t));

            if(NULL == _packageType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_packageType, 0, sizeof(prf_packageType_t));

            _packageType->property_TypeName = axutil_strdup(env, "prf_packageType");
            _packageType->property_description  = NULL;
                  _packageType->is_valid_description  = AXIS2_FALSE;
            _packageType->property_id  = NULL;
                  _packageType->is_valid_id  = AXIS2_FALSE;
            _packageType->property_md5sum  = NULL;
                  _packageType->is_valid_md5sum  = AXIS2_FALSE;
            _packageType->property_type  = NULL;
                  _packageType->is_valid_type  = AXIS2_FALSE;
            _packageType->property_name  = NULL;
                  _packageType->is_valid_name  = AXIS2_FALSE;
            _packageType->is_valid_size  = AXIS2_FALSE;
            _packageType->property_uri  = NULL;
                  _packageType->is_valid_uri  = AXIS2_FALSE;
            

            return _packageType;
        }

        prf_packageType_t* AXIS2_CALL
        prf_packageType_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _description,
                axis2_char_t* _id,
                axis2_char_t* _md5sum,
                axis2_char_t* _type,
                axis2_char_t* _name,
                int _size,
                axutil_uri_t* _uri)
        {
            prf_packageType_t* prf_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            prf_obj = prf_packageType_create(env);

            
              status = prf_packageType_set_description(
                                     prf_obj,
                                     env,
                                     _description);
              if(status == AXIS2_FAILURE) {
                  prf_packageType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageType_set_id(
                                     prf_obj,
                                     env,
                                     _id);
              if(status == AXIS2_FAILURE) {
                  prf_packageType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageType_set_md5sum(
                                     prf_obj,
                                     env,
                                     _md5sum);
              if(status == AXIS2_FAILURE) {
                  prf_packageType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageType_set_type(
                                     prf_obj,
                                     env,
                                     _type);
              if(status == AXIS2_FAILURE) {
                  prf_packageType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageType_set_name(
                                     prf_obj,
                                     env,
                                     _name);
              if(status == AXIS2_FAILURE) {
                  prf_packageType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageType_set_size(
                                     prf_obj,
                                     env,
                                     _size);
              if(status == AXIS2_FAILURE) {
                  prf_packageType_free (prf_obj, env);
                  return NULL;
              }
            
              status = prf_packageType_set_uri(
                                     prf_obj,
                                     env,
                                     _uri);
              if(status == AXIS2_FAILURE) {
                  prf_packageType_free (prf_obj, env);
                  return NULL;
              }
            

            return prf_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                prf_packageType_free_popping_value(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _packageType->property_description;

                    _packageType->property_description = (axis2_char_t*)NULL;
                    prf_packageType_free(_packageType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        prf_packageType_free(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
        {
            
            
            return axis2_prf_extension_mapper_free(
                (prf_stubtype_t*) _packageType,
                env,
                "prf_packageType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_packageType_free_obj(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);

            if (_packageType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _packageType->property_TypeName);
            }

            prf_packageType_reset_description(_packageType, env);
            prf_packageType_reset_id(_packageType, env);
            prf_packageType_reset_md5sum(_packageType, env);
            prf_packageType_reset_type(_packageType, env);
            prf_packageType_reset_name(_packageType, env);
            prf_packageType_reset_size(_packageType, env);
            prf_packageType_reset_uri(_packageType, env);
            

            if(_packageType)
            {
                AXIS2_FREE(env->allocator, _packageType);
                _packageType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        prf_packageType_deserialize(
                prf_packageType_t* _packageType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_prf_extension_mapper_deserialize(
                (prf_stubtype_t*) _packageType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "prf_packageType");
            
        }

        axis2_status_t AXIS2_CALL
        prf_packageType_deserialize_obj(
                prf_packageType_t* _packageType,
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
            AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for packageType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building description element
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
                                            status = prf_packageType_set_description(_packageType, env,
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
                                                status = prf_packageType_set_description(_packageType, env,
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
                      * building id element
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
                                 
                                 element_qname = axutil_qname_create(env, "id", "http://www.pratsam.org/ns/profile/", NULL);
                                 

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
                                            status = prf_packageType_set_id(_packageType, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element id");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = prf_packageType_set_id(_packageType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for id ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element id missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building md5sum element
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
                                 
                                 element_qname = axutil_qname_create(env, "md5sum", "http://www.pratsam.org/ns/profile/", NULL);
                                 

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
                                            status = prf_packageType_set_md5sum(_packageType, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element md5sum");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = prf_packageType_set_md5sum(_packageType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for md5sum ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element md5sum missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building type element
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
                                 
                                 element_qname = axutil_qname_create(env, "type", "http://www.pratsam.org/ns/profile/", NULL);
                                 

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
                                            status = prf_packageType_set_type(_packageType, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element type");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = prf_packageType_set_type(_packageType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for type ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element type missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building name element
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
                                            status = prf_packageType_set_name(_packageType, env,
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
                                                status = prf_packageType_set_name(_packageType, env,
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
                      * building size element
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
                                 
                                 element_qname = axutil_qname_create(env, "size", "http://www.pratsam.org/ns/profile/", NULL);
                                 

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
                                            status = prf_packageType_set_size(_packageType, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element size");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for size ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element size missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building uri element
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
                                 
                                 element_qname = axutil_qname_create(env, "uri", "http://www.pratsam.org/ns/profile/", NULL);
                                 

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
                                          status = prf_packageType_set_uri(_packageType, env,
                                                             axutil_uri_parse_string(env, text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element uri");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for uri ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element uri missing");
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
          prf_packageType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          prf_packageType_declare_parent_namespaces(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        prf_packageType_serialize(
                prf_packageType_t* _packageType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_packageType == NULL)
            {
                return prf_packageType_serialize_obj(
                    _packageType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_prf_extension_mapper_serialize(
                    (prf_stubtype_t*) _packageType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "prf_packageType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        prf_packageType_serialize_obj(
                prf_packageType_t* _packageType,
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
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
                    axis2_char_t text_value_6[PRF_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_7;
                    axis2_char_t *text_value_7_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _packageType, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"packageType\"", NULL);
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
            xsi_type_attri = axiom_attribute_create (env, "type", "packageType", xsi_ns);
            
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
                      

                   if (!_packageType->is_valid_description)
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
                    
                           text_value_1 = _packageType->property_description;
                           
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
                      

                   if (!_packageType->is_valid_id)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property id");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("id"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("id")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing id element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sid>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sid>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _packageType->property_id;
                           
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
                      

                   if (!_packageType->is_valid_md5sum)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property md5sum");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("md5sum"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("md5sum")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing md5sum element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smd5sum>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smd5sum>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _packageType->property_md5sum;
                           
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
                      

                   if (!_packageType->is_valid_type)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property type");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("type"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("type")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing type element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%stype>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%stype>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_4 = _packageType->property_type;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_4_temp = axutil_xml_quote_string(env, text_value_4, AXIS2_TRUE);
                           if (text_value_4_temp)
                           {
                               axutil_stream_write(stream, env, text_value_4_temp, axutil_strlen(text_value_4_temp));
                               AXIS2_FREE(env->allocator, text_value_4_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
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
                      

                   if (!_packageType->is_valid_name)
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
                    
                           text_value_5 = _packageType->property_name;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_5_temp = axutil_xml_quote_string(env, text_value_5, AXIS2_TRUE);
                           if (text_value_5_temp)
                           {
                               axutil_stream_write(stream, env, text_value_5_temp, axutil_strlen(text_value_5_temp));
                               AXIS2_FREE(env->allocator, text_value_5_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
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
                      

                   if (!_packageType->is_valid_size)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property size");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("size"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("size")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing size element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssize>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssize>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_6, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _packageType->property_size);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_6, axutil_strlen(text_value_6));
                           
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
                      

                   if (!_packageType->is_valid_uri)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property uri");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("uri"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("uri")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing uri element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%suri>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%suri>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_7 = axutil_uri_to_string(_packageType->property_uri, env, AXIS2_URI_UNP_OMITUSERINFO);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_7, axutil_strlen(text_value_7));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for description by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_property1(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
            {
                return prf_packageType_get_description(_packageType,
                                             env);
            }

            /**
             * getter for description.
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_description(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageType, NULL);
                  

                return _packageType->property_description;
             }

            /**
             * setter for description
             */
            axis2_status_t AXIS2_CALL
            prf_packageType_set_description(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_description)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
                
                if(_packageType->is_valid_description &&
                        arg_description == _packageType->property_description)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_description)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "description is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageType_reset_description(_packageType, env);

                
                if(NULL == arg_description)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageType->property_description = (axis2_char_t *)axutil_strdup(env, arg_description);
                        if(NULL == _packageType->property_description)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for description");
                            return AXIS2_FAILURE;
                        }
                        _packageType->is_valid_description = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for description
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_reset_description(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
               

               
            
                
                if(_packageType->property_description != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _packageType->property_description);
                     _packageType->property_description = NULL;
                }
            
                
                
                _packageType->is_valid_description = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether description is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageType_is_description_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_TRUE);
               
               return !_packageType->is_valid_description;
           }

           /**
            * Set description to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_set_description_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               return prf_packageType_reset_description(_packageType, env);
           }

           

            /**
             * Getter for id by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_property2(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
            {
                return prf_packageType_get_id(_packageType,
                                             env);
            }

            /**
             * getter for id.
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_id(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageType, NULL);
                  

                return _packageType->property_id;
             }

            /**
             * setter for id
             */
            axis2_status_t AXIS2_CALL
            prf_packageType_set_id(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
                
                if(_packageType->is_valid_id &&
                        arg_id == _packageType->property_id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageType_reset_id(_packageType, env);

                
                if(NULL == arg_id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageType->property_id = (axis2_char_t *)axutil_strdup(env, arg_id);
                        if(NULL == _packageType->property_id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for id");
                            return AXIS2_FAILURE;
                        }
                        _packageType->is_valid_id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for id
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_reset_id(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
               

               
            
                
                if(_packageType->property_id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _packageType->property_id);
                     _packageType->property_id = NULL;
                }
            
                
                
                _packageType->is_valid_id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether id is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageType_is_id_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_TRUE);
               
               return !_packageType->is_valid_id;
           }

           /**
            * Set id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_set_id_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               return prf_packageType_reset_id(_packageType, env);
           }

           

            /**
             * Getter for md5sum by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_property3(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
            {
                return prf_packageType_get_md5sum(_packageType,
                                             env);
            }

            /**
             * getter for md5sum.
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_md5sum(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageType, NULL);
                  

                return _packageType->property_md5sum;
             }

            /**
             * setter for md5sum
             */
            axis2_status_t AXIS2_CALL
            prf_packageType_set_md5sum(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_md5sum)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
                
                if(_packageType->is_valid_md5sum &&
                        arg_md5sum == _packageType->property_md5sum)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_md5sum)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "md5sum is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageType_reset_md5sum(_packageType, env);

                
                if(NULL == arg_md5sum)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageType->property_md5sum = (axis2_char_t *)axutil_strdup(env, arg_md5sum);
                        if(NULL == _packageType->property_md5sum)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for md5sum");
                            return AXIS2_FAILURE;
                        }
                        _packageType->is_valid_md5sum = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for md5sum
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_reset_md5sum(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
               

               
            
                
                if(_packageType->property_md5sum != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _packageType->property_md5sum);
                     _packageType->property_md5sum = NULL;
                }
            
                
                
                _packageType->is_valid_md5sum = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether md5sum is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageType_is_md5sum_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_TRUE);
               
               return !_packageType->is_valid_md5sum;
           }

           /**
            * Set md5sum to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_set_md5sum_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               return prf_packageType_reset_md5sum(_packageType, env);
           }

           

            /**
             * Getter for type by  Property Number 4
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_property4(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
            {
                return prf_packageType_get_type(_packageType,
                                             env);
            }

            /**
             * getter for type.
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_type(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageType, NULL);
                  

                return _packageType->property_type;
             }

            /**
             * setter for type
             */
            axis2_status_t AXIS2_CALL
            prf_packageType_set_type(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_type)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
                
                if(_packageType->is_valid_type &&
                        arg_type == _packageType->property_type)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_type)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "type is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageType_reset_type(_packageType, env);

                
                if(NULL == arg_type)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageType->property_type = (axis2_char_t *)axutil_strdup(env, arg_type);
                        if(NULL == _packageType->property_type)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for type");
                            return AXIS2_FAILURE;
                        }
                        _packageType->is_valid_type = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for type
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_reset_type(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
               

               
            
                
                if(_packageType->property_type != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _packageType->property_type);
                     _packageType->property_type = NULL;
                }
            
                
                
                _packageType->is_valid_type = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether type is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageType_is_type_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_TRUE);
               
               return !_packageType->is_valid_type;
           }

           /**
            * Set type to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_set_type_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               return prf_packageType_reset_type(_packageType, env);
           }

           

            /**
             * Getter for name by  Property Number 5
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_property5(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
            {
                return prf_packageType_get_name(_packageType,
                                             env);
            }

            /**
             * getter for name.
             */
            axis2_char_t* AXIS2_CALL
            prf_packageType_get_name(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageType, NULL);
                  

                return _packageType->property_name;
             }

            /**
             * setter for name
             */
            axis2_status_t AXIS2_CALL
            prf_packageType_set_name(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_name)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
                
                if(_packageType->is_valid_name &&
                        arg_name == _packageType->property_name)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_name)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "name is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageType_reset_name(_packageType, env);

                
                if(NULL == arg_name)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageType->property_name = (axis2_char_t *)axutil_strdup(env, arg_name);
                        if(NULL == _packageType->property_name)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for name");
                            return AXIS2_FAILURE;
                        }
                        _packageType->is_valid_name = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for name
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_reset_name(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
               

               
            
                
                if(_packageType->property_name != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _packageType->property_name);
                     _packageType->property_name = NULL;
                }
            
                
                
                _packageType->is_valid_name = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether name is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageType_is_name_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_TRUE);
               
               return !_packageType->is_valid_name;
           }

           /**
            * Set name to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_set_name_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               return prf_packageType_reset_name(_packageType, env);
           }

           

            /**
             * Getter for size by  Property Number 6
             */
            int AXIS2_CALL
            prf_packageType_get_property6(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
            {
                return prf_packageType_get_size(_packageType,
                                             env);
            }

            /**
             * getter for size.
             */
            int AXIS2_CALL
            prf_packageType_get_size(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _packageType, (int)0);
                  

                return _packageType->property_size;
             }

            /**
             * setter for size
             */
            axis2_status_t AXIS2_CALL
            prf_packageType_set_size(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env,
                    const int  arg_size)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
                
                if(_packageType->is_valid_size &&
                        arg_size == _packageType->property_size)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                prf_packageType_reset_size(_packageType, env);

                _packageType->property_size = arg_size;
                        _packageType->is_valid_size = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for size
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_reset_size(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
               

               _packageType->is_valid_size = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether size is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageType_is_size_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_TRUE);
               
               return !_packageType->is_valid_size;
           }

           /**
            * Set size to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_set_size_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               return prf_packageType_reset_size(_packageType, env);
           }

           

            /**
             * Getter for uri by  Property Number 7
             */
            axutil_uri_t* AXIS2_CALL
            prf_packageType_get_property7(
                prf_packageType_t* _packageType,
                const axutil_env_t *env)
            {
                return prf_packageType_get_uri(_packageType,
                                             env);
            }

            /**
             * getter for uri.
             */
            axutil_uri_t* AXIS2_CALL
            prf_packageType_get_uri(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _packageType, NULL);
                  

                return _packageType->property_uri;
             }

            /**
             * setter for uri
             */
            axis2_status_t AXIS2_CALL
            prf_packageType_set_uri(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_uri)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
                
                if(_packageType->is_valid_uri &&
                        arg_uri == _packageType->property_uri)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_uri)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "uri is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                prf_packageType_reset_uri(_packageType, env);

                
                if(NULL == arg_uri)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _packageType->property_uri = arg_uri;
                        _packageType->is_valid_uri = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for uri
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_reset_uri(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_FAILURE);
               

               
            
                
                if(_packageType->property_uri != NULL)
                {
                   
                   
                      axutil_uri_free(_packageType->property_uri, env);
                     _packageType->property_uri = NULL;
                }
            
                
                
                _packageType->is_valid_uri = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether uri is nill
            */
           axis2_bool_t AXIS2_CALL
           prf_packageType_is_uri_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _packageType, AXIS2_TRUE);
               
               return !_packageType->is_valid_uri;
           }

           /**
            * Set uri to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           prf_packageType_set_uri_nil(
                   prf_packageType_t* _packageType,
                   const axutil_env_t *env)
           {
               return prf_packageType_reset_uri(_packageType, env);
           }

           

