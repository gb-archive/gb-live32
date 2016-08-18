#ifndef USB_CONFIG_H__
#define USB_CONFIG_H__

/* Number of endpoint numbers besides endpoint zero. It's worth noting that
   and endpoint NUMBER does not completely describe an endpoint, but the
   along with the DIRECTION does (eg: EP 1 IN).  The #define below turns on
   BOTH IN and OUT endpoints for endpoint numbers (besides zero) up to the
   value specified.  For example, setting NUM_ENDPOINT_NUMBERS to 2 will
   activate endpoints EP 1 IN, EP 1 OUT, EP 2 IN, EP 2 OUT.  */
#define NUM_ENDPOINT_NUMBERS 2

/* Only 8, 16, 32 and 64 are supported for endpoint zero length. */
#define EP_0_LEN 8

#define EP_1_OUT_LEN 1
#define EP_1_IN_LEN 10 /* May need to be longer, depending
                        * on the notifications you support. */
 /* The code in the demo app assumes that EP2 IN and OUT are the same length */
#define EP_2_LEN 64
#define EP_2_OUT_LEN EP_2_LEN
#define EP_2_IN_LEN EP_2_LEN

#define NUMBER_OF_CONFIGURATIONS 1

/* Ping-pong buffering mode. Valid values are:
	PPB_NONE         - Do not ping-pong any endpoints
	PPB_EPO_OUT_ONLY - Ping-pong only endpoint 0 OUT
	PPB_ALL          - Ping-pong all endpoints
	PPB_EPN_ONLY     - Ping-pong all endpoints except 0
*/
#define PPB_MODE PPB_EPN_ONLY

#define USB_USE_INTERRUPTS

/* Objects from usb_descriptors.c */
#define USB_DEVICE_DESCRIPTOR this_device_descriptor
#define USB_CONFIG_DESCRIPTOR_MAP usb_application_config_descs
#define USB_STRING_DESCRIPTOR_FUNC usb_application_get_string

/* Optional callbacks from usb.c. Leave them commented if you don't want to
   use them. For the prototypes and documentation for each one, see usb.h. */

/*
#define SET_CONFIGURATION_CALLBACK app_set_configuration_callback
#define GET_DEVICE_STATUS_CALLBACK app_get_device_status_callback
#define ENDPOINT_HALT_CALLBACK     app_endpoint_halt_callback
#define SET_INTERFACE_CALLBACK     app_set_interface_callback
#define GET_INTERFACE_CALLBACK     app_get_interface_callback
#define OUT_TRANSACTION_CALLBACK   app_out_transaction_callback
#define IN_TRANSACTION_COMPLETE_CALLBACK   app_in_transaction_complete_callback
#define UNKNOWN_SETUP_REQUEST_CALLBACK app_unknown_setup_request_callback
#define UNKNOWN_GET_DESCRIPTOR_CALLBACK app_unknown_get_descriptor_callback
#define START_OF_FRAME_CALLBACK    app_start_of_frame_callback
#define USB_RESET_CALLBACK         app_usb_reset_callback
*/
 
/* CDC Configuration functions. See usb_cdc.h for documentation. */
/*
#define CDC_SEND_ENCAPSULATED_COMMAND_CALLBACK app_send_encapsulated_command
#define CDC_GET_ENCAPSULATED_RESPONSE_CALLBACK app_get_encapsulated_response
#define CDC_SET_COMM_FEATURE_CALLBACK app_set_comm_feature_callback
#define CDC_CLEAR_COMM_FEATURE_CALLBACK app_clear_comm_feature_callback
#define CDC_GET_COMM_FEATURE_CALLBACK app_get_comm_feature_callback
#define CDC_SET_LINE_CODING_CALLBACK app_set_line_coding_callback
#define CDC_GET_LINE_CODING_CALLBACK app_get_line_coding_callback
#define CDC_SET_CONTROL_LINE_STATE_CALLBACK app_set_control_line_state_callback
#define CDC_SEND_BREAK_CALLBACK app_send_break_callback
*/
 
#endif /* USB_CONFIG_H__ */
