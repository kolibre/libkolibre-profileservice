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



        #ifndef PRF_PACKAGETYPE_H
        #define PRF_PACKAGETYPE_H

       /**
        * prf_packageType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  prf_packageType class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_prf_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define PRF_DEFAULT_DIGIT_LIMIT 1024
        #define PRF_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct prf_packageType prf_packageType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating prf_packageType_t
         * @param env pointer to environment struct
         * @return newly created prf_packageType_t object
         */
        prf_packageType_t* AXIS2_CALL
        prf_packageType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _packageType prf_packageType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_free (
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        /**
         * Free prf_packageType_t object
         * @param  _packageType prf_packageType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_free_obj (
            prf_packageType_t* _packageType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for description. 
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_description(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        /**
         * Setter for description.
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param arg_description axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_set_description(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_description);

        /**
         * Resetter for description
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_reset_description(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for id. 
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_id(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        /**
         * Setter for id.
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param arg_id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_set_id(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_id);

        /**
         * Resetter for id
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_reset_id(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for md5sum. 
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_md5sum(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        /**
         * Setter for md5sum.
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param arg_md5sum axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_set_md5sum(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_md5sum);

        /**
         * Resetter for md5sum
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_reset_md5sum(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for type. 
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_type(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        /**
         * Setter for type.
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param arg_type axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_set_type(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_type);

        /**
         * Resetter for type
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_reset_type(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for name. 
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_name(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        /**
         * Setter for name.
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param arg_name axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_set_name(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_name);

        /**
         * Resetter for name
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_reset_name(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for size. 
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        prf_packageType_get_size(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        /**
         * Setter for size.
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param arg_size int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_set_size(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            const int  arg_size);

        /**
         * Resetter for size
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_reset_size(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for uri. 
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        prf_packageType_get_uri(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        /**
         * Setter for uri.
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param arg_uri axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_set_uri(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            axutil_uri_t*  arg_uri);

        /**
         * Resetter for uri
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_reset_uri(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether description is nill
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packageType_is_description_nil(
                prf_packageType_t* _packageType,
                const axutil_env_t *env);


        

        /**
         * Check whether id is nill
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packageType_is_id_nil(
                prf_packageType_t* _packageType,
                const axutil_env_t *env);


        

        /**
         * Check whether md5sum is nill
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packageType_is_md5sum_nil(
                prf_packageType_t* _packageType,
                const axutil_env_t *env);


        

        /**
         * Check whether type is nill
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packageType_is_type_nil(
                prf_packageType_t* _packageType,
                const axutil_env_t *env);


        

        /**
         * Check whether name is nill
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packageType_is_name_nil(
                prf_packageType_t* _packageType,
                const axutil_env_t *env);


        

        /**
         * Check whether size is nill
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packageType_is_size_nil(
                prf_packageType_t* _packageType,
                const axutil_env_t *env);


        

        /**
         * Check whether uri is nill
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packageType_is_uri_nil(
                prf_packageType_t* _packageType,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_deserialize(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packageType_deserialize_obj(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       prf_packageType_declare_parent_namespaces(
                    prf_packageType_t* _packageType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param packageType_om_node node to serialize from
         * @param packageType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        prf_packageType_serialize(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            axiom_node_t* packageType_om_node, axiom_element_t *packageType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @param packageType_om_node node to serialize from
         * @param packageType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        prf_packageType_serialize_obj(
            prf_packageType_t* _packageType,
            const axutil_env_t *env,
            axiom_node_t* packageType_om_node, axiom_element_t *packageType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the prf_packageType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        prf_packageType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating prf_packageType_t
         * @param env pointer to environment struct
         * @param _description axis2_char_t*
         * @param _id axis2_char_t*
         * @param _md5sum axis2_char_t*
         * @param _type axis2_char_t*
         * @param _name axis2_char_t*
         * @param _size int
         * @param _uri axutil_uri_t*
         * @return newly created prf_packageType_t object
         */
        prf_packageType_t* AXIS2_CALL
        prf_packageType_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _description,
                axis2_char_t* _id,
                axis2_char_t* _md5sum,
                axis2_char_t* _type,
                axis2_char_t* _name,
                int _size,
                axutil_uri_t* _uri);

        


                /**
                 * Free prf_packageType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _packageType prf_packageType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_char_t* AXIS2_CALL
                prf_packageType_free_popping_value(
                        prf_packageType_t* _packageType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for description by property number (1)
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_property1(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for id by property number (2)
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_property2(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for md5sum by property number (3)
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_property3(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for type by property number (4)
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_property4(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for name by property number (5)
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        prf_packageType_get_property5(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for size by property number (6)
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        prf_packageType_get_property6(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for uri by property number (7)
         * @param  _packageType prf_packageType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        prf_packageType_get_property7(
            prf_packageType_t* _packageType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* PRF_PACKAGETYPE_H */
    

