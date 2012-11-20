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


        #ifndef AXIS2_EXTENSION_MAPPER_H
        #define AXIS2_EXTENSION_MAPPER_H

        /**
         * axis2_prf_extension_mapper.h
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
         */

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        typedef struct prf_type prf_stubtype_t;

        /**
         * Returns the type for an ADB object.
         * @param object ADB object
         * @return string with the object type
         */
        axis2_char_t* AXIS2_CALL
        prf_internaltype_get_type(const prf_stubtype_t *object);

        /**
         * Will invoke the creation function for the appropriate type, given an Axiom node.
         * @param env pointer to environment struct
         * @param node double pointer to the parent node to deserialize
         * @param default_type string with the default type, in case the node has none
         * @return ADB object on success, else NULL
         */
        prf_stubtype_t* AXIS2_CALL
        axis2_prf_extension_mapper_create_from_node(
            const axutil_env_t *env,
            axiom_node_t** node,
            axis2_char_t *default_type);

        /**
         * Will invoke the "free" function for the appropriate type.
         * @param  _object ADB object
         * @param env pointer to environment struct
         * @param default_type string with the default type, in case the object has none
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        axis2_prf_extension_mapper_free(
            prf_stubtype_t* _object,
            const axutil_env_t *env,
            axis2_char_t *default_type);

        /**
         * Will invoke the deserialization function for the appropriate type.
         * @param  _object ADB object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @param default_type string with the default type, in case the object has none
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        axis2_prf_extension_mapper_deserialize(
            prf_stubtype_t* _object,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs,
            axis2_char_t *default_type);

        /**
         * Will invoke the serialization function for the appropriate type.
         * @param  _object ADB object
         * @param env pointer to environment struct
         * @param om_node node to serialize from
         * @param om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @param default_type string with the default type, in case the object has none
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        axis2_prf_extension_mapper_serialize(
            prf_stubtype_t* _object,
            const axutil_env_t *env,
            axiom_node_t* om_node,
            axiom_element_t *om_element,
            int tag_closed,
            axutil_hash_t *namespaces,
            int *next_ns_index,
            axis2_char_t *default_type);


        #ifdef __cplusplus
        }
        #endif

        #endif /* AXIS2_EXTENSION_MAPPER_H */
    

