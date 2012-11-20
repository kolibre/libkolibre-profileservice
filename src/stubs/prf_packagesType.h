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



        #ifndef PRF_PACKAGESTYPE_H
        #define PRF_PACKAGESTYPE_H

       /**
        * prf_packagesType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  prf_packagesType class
        */

        
          #include "prf_packageType.h"
          

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
        

        typedef struct prf_packagesType prf_packagesType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating prf_packagesType_t
         * @param env pointer to environment struct
         * @return newly created prf_packagesType_t object
         */
        prf_packagesType_t* AXIS2_CALL
        prf_packagesType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _packagesType prf_packagesType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_free (
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env);

        /**
         * Free prf_packagesType_t object
         * @param  _packagesType prf_packagesType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_free_obj (
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for package. Deprecated for array types, Use prf_packagesType_get_package_at instead
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @return Array of prf_packageType_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        prf_packagesType_get_package(
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env);

        /**
         * Setter for package.Deprecated for array types, Use prf_packagesType_set_package_at
         * or prf_packagesType_add_package instead.
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param arg_package Array of prf_packageType_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_set_package(
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_package);

        /**
         * Resetter for package
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_reset_package(
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < prf_element_sizeof_property(prf_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = prf_element_get_property_at(prf_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     prf_element_set_property_at(prf_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     prf_element_add_property(prf_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     prf_element_remove_property_at(prf_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of package.
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith prf_packageType_t* of the array
         */
        prf_packageType_t* AXIS2_CALL
        prf_packagesType_get_package_at(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of package. (If the ith already exist, it will be replaced)
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_package element to set prf_packageType_t* to the array
         * @return ith prf_packageType_t* of the array
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_set_package_at(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env, int i,
                prf_packageType_t* arg_package);


        /**
         * Add to package.
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param arg_package element to add prf_packageType_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_add_package(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env,
                prf_packageType_t* arg_package);

        /**
         * Get the size of the package array.
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct.
         * @return the size of the package array.
         */
        int AXIS2_CALL
        prf_packagesType_sizeof_package(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of package.
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_remove_package_at(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether package is nill
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packagesType_is_package_nil(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether package is nill at i
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_packagesType_is_package_nil_at(
                prf_packagesType_t* _packagesType,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set package to nill at i
         * @param  _packagesType _ prf_packagesType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_set_package_nil_at(
                prf_packagesType_t* _packagesType, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_deserialize(
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_packagesType_deserialize_obj(
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       prf_packagesType_declare_parent_namespaces(
                    prf_packagesType_t* _packagesType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param packagesType_om_node node to serialize from
         * @param packagesType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        prf_packagesType_serialize(
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env,
            axiom_node_t* packagesType_om_node, axiom_element_t *packagesType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @param packagesType_om_node node to serialize from
         * @param packagesType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        prf_packagesType_serialize_obj(
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env,
            axiom_node_t* packagesType_om_node, axiom_element_t *packagesType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the prf_packagesType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        prf_packagesType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating prf_packagesType_t
         * @param env pointer to environment struct
         * @param _package axutil_array_list_t*
         * @return newly created prf_packagesType_t object
         */
        prf_packagesType_t* AXIS2_CALL
        prf_packagesType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _package);

        


                /**
                 * Free prf_packagesType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _packagesType prf_packagesType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                prf_packagesType_free_popping_value(
                        prf_packagesType_t* _packagesType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for package by property number (1)
         * @param  _packagesType prf_packagesType_t object
         * @param env pointer to environment struct
         * @return Array of prf_packageType_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        prf_packagesType_get_property1(
            prf_packagesType_t* _packagesType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* PRF_PACKAGESTYPE_H */
    

