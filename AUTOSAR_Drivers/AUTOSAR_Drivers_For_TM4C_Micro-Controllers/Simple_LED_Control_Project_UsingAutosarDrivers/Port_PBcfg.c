 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller
 *              - Port Driver
 *
 * Author: Marwan Abdelhakim Elmasry
 ******************************************************************************/

/*******************************************************************************
 *                              Includes Needed                                *
 *******************************************************************************/  
#include "Port_PBcfg.h"
   
#include "Port_cfg.h"
/* AUTOSAR Version checking between Port_PBcfg.h and Port_cfg.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_CFG_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_CFG_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_CFG_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_cfg.h does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.h and Port_Types.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_CFG_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_CFG_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_CFG_SW_PATCH_VERSION))
  #error "The SW version of Port_cfg.h does not match the expected version"
#endif 

/*******************************************************************************
 *                      Public Global Variables Definitions                    *
 *******************************************************************************/   
/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = {
	
	PORT_PORTA_ID, PORT_PIN0_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTA_ID, PORT_PIN1_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTA_ID, PORT_PIN2_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTA_ID, PORT_PIN3_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTA_ID, PORT_PIN4_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTA_ID, PORT_PIN5_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTA_ID, PORT_PIN6_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTA_ID, PORT_PIN7_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	
	PORT_PORTB_ID, PORT_PIN0_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTB_ID, PORT_PIN1_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTB_ID, PORT_PIN2_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTB_ID, PORT_PIN3_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTB_ID, PORT_PIN4_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTB_ID, PORT_PIN5_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTB_ID, PORT_PIN6_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTB_ID, PORT_PIN7_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	
	PORT_PORTC_ID, PORT_PIN0_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTC_ID, PORT_PIN1_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTC_ID, PORT_PIN2_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTC_ID, PORT_PIN3_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTC_ID, PORT_PIN4_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTC_ID, PORT_PIN5_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTC_ID, PORT_PIN6_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTC_ID, PORT_PIN7_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	
	PORT_PORTD_ID, PORT_PIN0_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTD_ID, PORT_PIN1_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTD_ID, PORT_PIN2_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTD_ID, PORT_PIN3_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTD_ID, PORT_PIN4_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTD_ID, PORT_PIN5_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTD_ID, PORT_PIN6_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTD_ID, PORT_PIN7_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	
	PORT_PORTE_ID, PORT_PIN0_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTE_ID, PORT_PIN1_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTE_ID, PORT_PIN2_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTE_ID, PORT_PIN3_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTE_ID, PORT_PIN4_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTE_ID, PORT_PIN5_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	
	PORT_PORTF_ID, PORT_PIN0_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
        /* LED 1 (RED) */
	PORT_CONFIG_LED1_PORT_NUM, PORT_CONFIG_LED1_CHANNEL_NUM, PORT_PIN_OUT, CANNOT_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DIO, CANNOT_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, STD_LOW,
	PORT_PORTF_ID, PORT_PIN2_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
	PORT_PORTF_ID, PORT_PIN3_ID, PORT_DEFAULT_DIRECTION, CAN_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DEFAULT, CAN_CHANAGE_PIN_MODE, INTERNAL_RESISTOR_OFF, NO_INITIAL_VALUE,
        /* Switch 1 */
	PORT_CONFIG_SW1_PORT_NUM, PORT_CONFIG_SW1_CHANNEL_NUM, PORT_PIN_IN, CANNOT_CHANAGE_PIN_DIRECTION, PORT_PIN_MODE_DIO, CANNOT_CHANAGE_PIN_MODE, PULL_UP, NO_INITIAL_VALUE 
};
