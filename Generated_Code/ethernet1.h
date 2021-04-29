/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : ethernet1.h
**     Project     : ZDBox2_eth_status_print
**     Processor   : MPC5748G_176
**     Component   : enet
**     Version     : Component SDK_S32_PA_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32_PA_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2021-04-28, 16:28, # CodeGen: 0
**     Contents    :
**         ENET_DRV_GetDefaultConfig             - void ENET_DRV_GetDefaultConfig(enet_config_t * config);
**         ENET_DRV_Init                         - void ENET_DRV_Init(uint8_t instance,enet_state_t * state,const enet_config_t...
**         ENET_DRV_Deinit                       - void ENET_DRV_Deinit(uint8_t instance);
**         ENET_DRV_ReadFrame                    - status_t ENET_DRV_ReadFrame(uint8_t instance,uint8_t queue,enet_buffer_t *...
**         ENET_DRV_ProvideRxBuff                - void ENET_DRV_ProvideRxBuff(uint8_t instance,uint8_t queue,enet_buffer_t *...
**         ENET_DRV_SendFrame                    - status_t ENET_DRV_SendFrame(uint8_t instance,uint8_t queue,const...
**         ENET_DRV_GetTransmitStatus            - status_t ENET_DRV_GetTransmitStatus(uint8_t instance,uint8_t queue,const...
**         ENET_DRV_EnableMDIO                   - void ENET_DRV_EnableMDIO(uint8_t instance,bool miiPreambleDisabled);
**         ENET_DRV_MDIORead                     - status_t ENET_DRV_MDIORead(uint8_t instance,uint8_t phyAddr,uint8_t...
**         ENET_DRV_MDIOWrite                    - status_t ENET_DRV_MDIOWrite(uint8_t instance,uint8_t phyAddr,uint8_t...
**         ENET_DRV_MDIOReadMMD                  - status_t ENET_DRV_MDIOReadMMD(uint8_t instance,uint8_t phyAddr,uint8_t...
**         ENET_DRV_MDIOWriteMMD                 - status_t ENET_DRV_MDIOWriteMMD(uint8_t instance,uint8_t phyAddr,uint8_t...
**         ENET_DRV_SetMacAddr                   - void ENET_DRV_SetMacAddr(uint8_t instance,const uint8_t * macAddr);
**         ENET_DRV_GetMacAddr                   - void ENET_DRV_GetMacAddr(uint8_t instance,uint8_t * macAddr);
**         ENET_DRV_SetUnicastForward            - void ENET_DRV_SetUnicastForward(uint8_t instance,const uint8_t * macAddr,bool...
**         ENET_DRV_SetMulticastForward          - void ENET_DRV_SetMulticastForward(uint8_t instance,const uint8_t *...
**         ENET_DRV_SetMulticastForwardAll       - void ENET_DRV_SetMulticastForwardAll(uint8_t instance,bool enable);
**         ENET_DRV_SetSleepMode                 - void ENET_DRV_SetSleepMode(uint8_t instance,bool enable);
**         ENET_DRV_ConfigCounters               - void ENET_DRV_ConfigCounters(uint8_t instance,bool enable);
**         ENET_DRV_GetCounter                   - uint32_t ENET_DRV_GetCounter(uint8_t instance,enet_counter_t counter);
**         ENET_DRV_GetInterruptFlags            - uint32_t ENET_DRV_GetInterruptFlags(uint8_t instance);
**         ENET_DRV_SetSpeed                     - void ENET_DRV_SetSpeed(uint8_t instance,enet_mii_speed_t speed);
**         ENET_DRV_TimerInit                    - void ENET_DRV_TimerInit(uint8_t instance,enet_timer_config_t * timerConfig);
**         ENET_DRV_TimerStart                   - void ENET_DRV_TimerStart(uint8_t instance);
**         ENET_DRV_TimerStop                    - void ENET_DRV_TimerStop(uint8_t instance);
**         ENET_DRV_TimerSet                     - void ENET_DRV_TimerSet(uint8_t instance,uint32_t value);
**         ENET_DRV_TimerGet                     - void ENET_DRV_TimerGet(uint8_t instance,uint32_t * value);
**         ENET_DRV_TimerSetCorrection           - void ENET_DRV_TimerSetCorrection(uint8_t instance,uint32_t value,uint32_t...
**         ENET_DRV_TimerEnableChannel           - void ENET_DRV_TimerEnableChannel(uint8_t instance,uint8_t...
**         ENET_DRV_TimerSetCompare              - void ENET_DRV_TimerSetCompare(uint8_t instance,uint8_t channel,uint32_t value);
**         ENET_DRV_TimerGetCapture              - void ENET_DRV_TimerGetCapture(uint8_t instance,uint8_t channel,uint32_t *...
**         ENET_DRV_TimerSetPulseWidth           - void ENET_DRV_TimerSetPulseWidth(uint8_t instance,uint8_t channel,uint8_t...
**         ENET_DRV_ConfigTxScheme               - void ENET_DRV_ConfigTxScheme(uint8_t instance,enet_tx_scheme_t scheme);
**         ENET_DRV_ConfigIdleSlope              - void ENET_DRV_ConfigIdleSlope(uint8_t instance,uint8_t class,uint16_t...
**         ENET_DRV_ConfigClassMatch             - void ENET_DRV_ConfigClassMatch(uint8_t instance,uint8_t class,uint8_t...
**         ENET_DRV_ConfigRxFlush                - void ENET_DRV_ConfigRxFlush(uint8_t instance,uint8_t queue,bool enable);
**         ENET_DRV_EnableRxInterruptCoalescing  - void ENET_DRV_EnableRxInterruptCoalescing(uint8_t instance,uint8_t...
**         ENET_DRV_DisableRxInterruptCoalescing - void ENET_DRV_DisableRxInterruptCoalescing(uint8_t instance,uint8_t queue);
**         ENET_DRV_EnableTxInterruptCoalescing  - void ENET_DRV_EnableTxInterruptCoalescing(uint8_t instance,uint8_t...
**         ENET_DRV_DisableTxInterruptCoalescing - void ENET_DRV_DisableTxInterruptCoalescing(uint8_t instance,uint8_t queue);
**         ENET_DRV_SetFIFOThreshold             - void ENET_DRV_SetFIFOThreshold(uint8_t instance,enet_fifo_threshold_t...
**         ENET_DRV_SetTxFIFOWatermark           - void ENET_DRV_SetTxFIFOWatermark(uint8_t instance,uint16_t watermark);
**         ENET_DRV_EnableTxStoreAndForward      - void ENET_DRV_EnableTxStoreAndForward(uint8_t instance);
**         ENET_DRV_RxParserInit                 - void ENET_DRV_RxParserInit(uint8_t instance,enet_rx_parser_config_t * config);
**         ENET_DRV_RxParserDeinit               - void ENET_DRV_RxParserDeinit(uint8_t instance);
**         ENET_DRV_RxParserAddAcceptRule        - void ENET_DRV_RxParserAddAcceptRule(uint8_t instance,uint8_t...
**         ENET_DRV_RxParserAddRejectRule        - void ENET_DRV_RxParserAddRejectRule(uint8_t instance,enet_rx_parser_rule_t *...
**         ENET_DRV_RxParserAddLinkingRule       - void ENET_DRV_RxParserAddLinkingRule(uint8_t instance,uint8_t...
**         ENET_DRV_RxParserGetState             - uint32_t ENET_DRV_RxParserGetState(uint8_t instance);
**         ENET_DRV_RxParserGetCount             - uint32_t ENET_DRV_RxParserGetCount(uint8_t instance,enet_rx_parser_counter_t...
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file ethernet1.h
** @version 01.00
*/         
/*!
**  @addtogroup ethernet1_module ethernet1 module documentation
**  @{
*/         
#ifndef ethernet1_H
#define ethernet1_H
/* MODULE ethernet1. */

/* Include inherited beans */
#include "clockMan1.h"
#include "Cpu.h"
#include "enet_driver.h"

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files, with the same initialized values.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, global macro not referenced
 * The global macro is defined to be used by the application code.
 *
 */

/*! @brief Device instance number */
#define INST_ETHERNET1 (0U)
/*! @brief Driver state structure which holds driver runtime data */
extern enet_state_t ethernet1_State; 

/*! @brief Number of rings */
#define ETHERNET1_NUM_RINGS0 (1U)

/*! @brief The MAC address of the module */
extern uint8_t ethernet1_MacAddr[6];

/*! @brief Module configuration structures */
extern enet_config_t ethernet1_InitConfig0;

/*! @brief Buffer configuration structures */
extern const enet_buffer_config_t ethernet1_buffConfigArr0[ETHERNET1_NUM_RINGS0];

/*! @brief Module callbacks external declaration */
extern void rx_callback(uint8_t instance, enet_event_t event, uint8_t ring);


#endif
/* ifndef ethernet1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP C55 series of microcontrollers.
**
** ###################################################################
*/

