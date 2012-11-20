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
        * axis2_stub_Kolibre_Profile.h
        *
        * This file was auto-generated from WSDL for "Kolibre_Profile|http://www.pratsam.org/ns/profile/" service
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:14 EEST)
        */

        #include <stdio.h>
        #include <axiom.h>
        #include <axutil_utils.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>
        #include <axis2_stub.h>

       
         #include "prf_logOn.h"
        
         #include "prf_logOnResponse.h"
        
         #include "prf_invalidParameterFault.h"
        
         #include "prf_internalServerErrorFault.h"
        
         #include "prf_setAttribute.h"
        
         #include "prf_setAttributeResponse.h"
        
         #include "prf_noActiveSessionFault.h"
        
         #include "prf_invalidParameterFault.h"
        
         #include "prf_internalServerErrorFault.h"
        
         #include "prf_logOff.h"
        
         #include "prf_logOffResponse.h"
        
         #include "prf_noActiveSessionFault.h"
        
         #include "prf_internalServerErrorFault.h"
        
         #include "prf_getAttribute.h"
        
         #include "prf_getAttributeResponse.h"
        
         #include "prf_noActiveSessionFault.h"
        
         #include "prf_invalidParameterFault.h"
        
         #include "prf_internalServerErrorFault.h"
        
         #include "prf_queryPackageList.h"
        
         #include "prf_queryPackageListResponse.h"
        
         #include "prf_noActiveSessionFault.h"
        
         #include "prf_invalidParameterFault.h"
        
         #include "prf_internalServerErrorFault.h"
        

	#ifdef __cplusplus
	extern "C" {
	#endif

        /***************** function prototypes - for header file *************/
        /**
         * axis2_stub_create_Kolibre_Profile
         * Create and return the stub with services populated
         * @param env Environment ( mandatory)
         * @param client_home Axis2/C home ( mandatory )
         * @param endpoint_uri Service endpoint uri( optional ) - if NULL default picked from WSDL used
         * @return Newly created stub object
         */
        axis2_stub_t* AXIS2_CALL
        axis2_stub_create_Kolibre_Profile(const axutil_env_t *env,
                                        const axis2_char_t *client_home,
                                        const axis2_char_t *endpoint_uri);
        /**
         * axis2_stub_populate_services_for_Kolibre_Profile
         * populate the svc in stub with the service and operations
         * @param stub The stub
         * @param env environment ( mandatory)
         */
        void AXIS2_CALL 
        axis2_stub_populate_services_for_Kolibre_Profile( axis2_stub_t *stub, const axutil_env_t *env);
        /**
         * axis2_stub_get_endpoint_uri_of_Kolibre_Profile
         * Return the endpoint URI picked from WSDL
         * @param env environment ( mandatory)
         * @return The endpoint picked from WSDL
         */
        axis2_char_t* AXIS2_CALL
        axis2_stub_get_endpoint_uri_of_Kolibre_Profile(const axutil_env_t *env);


        
            /**
             * the generated fault union for operation "logOn",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                prf_invalidParameterFault_t* InvalidParameterFault;
                prf_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_Profile_logOn_fault;
         
            /**
             * the generated fault union for operation "setAttribute",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                prf_noActiveSessionFault_t* NoActiveSessionFault;
                prf_invalidParameterFault_t* InvalidParameterFault;
                prf_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_Profile_setAttribute_fault;
         
            /**
             * the generated fault union for operation "logOff",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                prf_noActiveSessionFault_t* NoActiveSessionFault;
                prf_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_Profile_logOff_fault;
         
            /**
             * the generated fault union for operation "getAttribute",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                prf_noActiveSessionFault_t* NoActiveSessionFault;
                prf_invalidParameterFault_t* InvalidParameterFault;
                prf_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_Profile_getAttribute_fault;
         
            /**
             * the generated fault union for operation "queryPackageList",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                prf_noActiveSessionFault_t* NoActiveSessionFault;
                prf_invalidParameterFault_t* InvalidParameterFault;
                prf_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_Profile_queryPackageList_fault;
         
            /**
             * Auto generated function declaration
             * for "logOn|http://www.pratsam.org/ns/profile/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _username of the axis2_char_t*
             * @param _password of the axis2_char_t*
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_Profile_logOn( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _username,
                                                  axis2_char_t* _password,
                                                        axis2_stub_Kolibre_Profile_logOn_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "setAttribute|http://www.pratsam.org/ns/profile/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _key of the axis2_char_t*
             * @param _value of the axis2_char_t*
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_Profile_setAttribute( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _key,
                                                  axis2_char_t* _value,
                                                        axis2_stub_Kolibre_Profile_setAttribute_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "logOff|http://www.pratsam.org/ns/profile/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_Profile_logOff( axis2_stub_t *stub, const axutil_env_t *env,
                                                        axis2_stub_Kolibre_Profile_logOff_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "getAttribute|http://www.pratsam.org/ns/profile/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _key0 of the axis2_char_t*
             *
             * @return axis2_char_t*
             */

            axis2_char_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_Profile_getAttribute( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _key0,
                                                        axis2_stub_Kolibre_Profile_getAttribute_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "queryPackageList|http://www.pratsam.org/ns/profile/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _firmwareType of the axis2_char_t*
             * @param _firmwareVersion of the axis2_char_t*
             *
             * @return prf_packageListType_t*
             */

            prf_packageListType_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_Profile_queryPackageList( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _firmwareType,
                                                  axis2_char_t* _firmwareVersion,
                                                        axis2_stub_Kolibre_Profile_queryPackageList_fault *fault);
          

        /**
         * Auto generated function for asynchronous invocations
         * for "logOn|http://www.pratsam.org/ns/profile/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _username of the axis2_char_t*
         * @param _password of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_Profile_logOn( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _username,
                                                  axis2_char_t* _password,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOnResponse,
                                                        axis2_stub_Kolibre_Profile_logOn_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "setAttribute|http://www.pratsam.org/ns/profile/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _key of the axis2_char_t*
         * @param _value of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_Profile_setAttribute( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _key,
                                                  axis2_char_t* _value,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setAttributeResponse,
                                                        axis2_stub_Kolibre_Profile_setAttribute_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "logOff|http://www.pratsam.org/ns/profile/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_Profile_logOff( axis2_stub_t *stub, const axutil_env_t *env,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOffResponse,
                                                        axis2_stub_Kolibre_Profile_logOff_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "getAttribute|http://www.pratsam.org/ns/profile/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _key0 of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_Profile_getAttribute( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _key0,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_char_t* _getAttributeResponse,
                                                        axis2_stub_Kolibre_Profile_getAttribute_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "queryPackageList|http://www.pratsam.org/ns/profile/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _firmwareType of the axis2_char_t*
         * @param _firmwareVersion of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_Profile_queryPackageList( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _firmwareType,
                                                  axis2_char_t* _firmwareVersion,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, prf_packageListType_t* _queryPackageListResponse,
                                                        axis2_stub_Kolibre_Profile_queryPackageList_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        


    /** we have to reserve some error codes for adb and for custom messages */
    #define AXIS2_STUB_KOLIBRE_PROFILE_ERROR_CODES_START (AXIS2_ERROR_LAST + 2000)

    typedef enum 
    {
        AXIS2_STUB_KOLIBRE_PROFILE_ERROR_NONE = AXIS2_STUB_KOLIBRE_PROFILE_ERROR_CODES_START,
        
        AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_LOGON_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_SETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_GETATTRIBUTE_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_QUERYPACKAGELIST_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_PROFILE_ERROR_LAST
    } axis2_stub_Kolibre_Profile_error_codes;

	#ifdef __cplusplus
	}
	#endif
   

