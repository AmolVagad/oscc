/**
 * @file globals.h
 * @brief Module globals.
 *
 */


#ifndef _OSCC_CAN_GATEWAY_GLOBALS_H_
#define _OSCC_CAN_GATEWAY_GLOBALS_H_


#include "mcp_can.h"


/*
 * @brief Chip select pin of the OBD CAN IC.
 *
 */
#define PIN_OBD_CAN_CHIP_SELECT ( 9 )

/*
 * @brief Chip select pin of the Control CAN IC.
 *
 */
#define PIN_CONTROL_CAN_CHIP_SELECT ( 10 )


#ifdef GLOBAL_DEFINED
    MCP_CAN g_obd_can( PIN_OBD_CAN_CHIP_SELECT );
    MCP_CAN g_control_can( PIN_CONTROL_CAN_CHIP_SELECT );

    #define EXTERN
#else
    extern MCP_CAN g_obd_can;
    extern MCP_CAN g_control_can;

    #define EXTERN extern
#endif


#endif /* _OSCC_CAN_GATEWAY_GLOBALS_H_ */
