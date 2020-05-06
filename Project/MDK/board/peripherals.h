/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_gpt.h"
#include "fsl_clock.h"
#include "fsl_tempmon.h"
#include "fsl_qtmr.h"
#include "fsl_lpuart.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Definition of peripheral ID */
#define GPT2_PERIPHERAL GPT2
/* Definition of the clock source frequency */
#define GPT2_CLOCK_SOURCE 75000000UL
/* GPT2 interrupt vector ID (number). */
#define GPT2_GPT_IRQN GPT2_IRQn
/* GPT2 interrupt vector priority. */
#define GPT2_GPT_IRQ_PRIORITY 6
/* GPT2 interrupt handler identifier. */
#define GPT2_GPT_IRQHANDLER GPT2_IRQHandler
/* Definition of peripheral ID */
#define TEMPMON_PERIPHERAL TEMPMON
/* Definition of peripheral ID */
#define TMR2_PERIPHERAL TMR2
/* Definition of the timer channel Channel_3. */
#define TMR2_CHANNEL_3_CHANNEL kQTMR_Channel_3
/* Definition of the timer channel Channel_3 clock source frequency. */
#define TMR2_CHANNEL_3_CLOCK_SOURCE 18750000UL
/* Definition of peripheral ID */
#define COMMUNICATE_PERIPHERAL LPUART5
/* Definition of the clock source frequency */
#define COMMUNICATE_CLOCK_SOURCE 80000000UL
/* Rx transfer buffer size. */
#define COMMUNICATE_RX_BUFFER_SIZE 20
/* Rx transfer buffer size. */
#define COMMUNICATE_TX_BUFFER_SIZE 20

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const gpt_config_t GPT2_config;
extern const tempmon_config_t TEMPMON_config;
extern const qtmr_config_t TMR2_Channel_3_config;
extern const lpuart_config_t communicate_config;
extern lpuart_handle_t communicate_handle;
extern uint8_t communicate_rxBuffer[COMMUNICATE_RX_BUFFER_SIZE];
extern const lpuart_transfer_t communicate_rxTransfer;
extern uint8_t communicate_txBuffer[COMMUNICATE_TX_BUFFER_SIZE];
extern const lpuart_transfer_t communicate_txTransfer;

/***********************************************************************************************************************
 * Callback functions
 **********************************************************************************************************************/
/* LPUART transfer callback function for the communicate component (init. function BOARD_InitPeripherals)*/
extern void com_callback(LPUART_Type *base, lpuart_handle_t *handle, status_t status, void *userData);

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
