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



        #ifndef PRF_LOGON_H
        #define PRF_LOGON_H

       /**
        * prf_logOn.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  prf_logOn class
        */

        
          #include "prf_logOnType.h"
          

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
        

        typedef struct prf_logOn prf_logOn_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating prf_logOn_t
         * @param env pointer to environment struct
         * @return newly created prf_logOn_t object
         */
        prf_logOn_t* AXIS2_CALL
        prf_logOn_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _logOn prf_logOn_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_logOn_free (
            prf_logOn_t* _logOn,
            const axutil_env_t *env);

        /**
         * Free prf_logOn_t object
         * @param  _logOn prf_logOn_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_logOn_free_obj (
            prf_logOn_t* _logOn,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for logOn. 
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @return prf_logOnType_t*
         */
        prf_logOnType_t* AXIS2_CALL
        prf_logOn_get_logOn(
            prf_logOn_t* _logOn,
            const axutil_env_t *env);

        /**
         * Setter for logOn.
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @param arg_logOn prf_logOnType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_logOn_set_logOn(
            prf_logOn_t* _logOn,
            const axutil_env_t *env,
            prf_logOnType_t*  arg_logOn);

        /**
         * Resetter for logOn
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_logOn_reset_logOn(
            prf_logOn_t* _logOn,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether logOn is nill
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        prf_logOn_is_logOn_nil(
                prf_logOn_t* _logOn,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_logOn_deserialize(
            prf_logOn_t* _logOn,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        prf_logOn_deserialize_obj(
            prf_logOn_t* _logOn,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       prf_logOn_declare_parent_namespaces(
                    prf_logOn_t* _logOn,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @param logOn_om_node node to serialize from
         * @param logOn_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        prf_logOn_serialize(
            prf_logOn_t* _logOn,
            const axutil_env_t *env,
            axiom_node_t* logOn_om_node, axiom_element_t *logOn_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @param logOn_om_node node to serialize from
         * @param logOn_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        prf_logOn_serialize_obj(
            prf_logOn_t* _logOn,
            const axutil_env_t *env,
            axiom_node_t* logOn_om_node, axiom_element_t *logOn_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the prf_logOn is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        prf_logOn_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating prf_logOn_t
         * @param env pointer to environment struct
         * @param _logOn prf_logOnType_t*
         * @return newly created prf_logOn_t object
         */
        prf_logOn_t* AXIS2_CALL
        prf_logOn_create_with_values(
            const axutil_env_t *env,
                prf_logOnType_t* _logOn);

        


                /**
                 * Free prf_logOn_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _logOn prf_logOn_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                prf_logOnType_t* AXIS2_CALL
                prf_logOn_free_popping_value(
                        prf_logOn_t* _logOn,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for logOn by property number (1)
         * @param  _logOn prf_logOn_t object
         * @param env pointer to environment struct
         * @return prf_logOnType_t*
         */
        prf_logOnType_t* AXIS2_CALL
        prf_logOn_get_property1(
            prf_logOn_t* _logOn,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* PRF_LOGON_H */
    

