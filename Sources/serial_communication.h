/*******************************************************************************
* NXP Semiconductors
* (c) Copyright 2016 NXP Semiconductors
* ALL RIGHTS RESERVED.
********************************************************************************
Services performed by NXP in this matter are performed AS IS and without any 
warranty. CUSTOMER retains the final decision relative to the total design
and functionality of the end product. NXP neither guarantees nor will be held
liable by CUSTOMER for the success of this project.
NXP DISCLAIMS ALL WARRANTIES, EXPRESSED, IMPLIED OR STATUTORY INCLUDING,
BUT NOT LIMITED TO, IMPLIED WARRANTY OF MERCHANTABILITY OR FITNESS FOR
A PARTICULAR PURPOSE ON ANY HARDWARE, SOFTWARE ORE ADVISE SUPPLIED 
TO THE PROJECT BY NXP, AND OR NAY PRODUCT RESULTING FROM NXP SERVICES. 
IN NO EVENT SHALL NXP BE LIABLE FOR INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING
OUT OF THIS AGREEMENT. 
CUSTOMER agrees to hold NXP harmless against any and all claims demands 
or actions by anyone on account of any damage, or injury, whether commercial,
contractual, or tortuous, rising directly or indirectly as a result 
of the advise or assistance supplied CUSTOMER in connection with product, 
services or goods supplied under this Agreement.
********************************************************************************
* File              serial_communication.h
* Owner             Lukas Zadrapa
* Version           1.0
* Date              Jun-20-2016
* Classification    General Business Information
* Brief             Serial communication
********************************************************************************
* Detailed Description:
********************************************************************************
Revision History:
Ver  Date         Author            Description of Changes
1.0  Jun-20-2016  Lukas Zadrapa     Initial version
*******************************************************************************/
#ifndef _SCI_H
#define _SCI_H

/*******************************************************************************
* Includes
*******************************************************************************/

/*******************************************************************************
* Constants
*******************************************************************************/
#define COMM_BUFFER_SIZE 256

/*******************************************************************************
* Macros 
*******************************************************************************/

/*******************************************************************************
* Types
*******************************************************************************/

/*******************************************************************************
* Global variables
*******************************************************************************/
 extern int8_t TEMPdata;
/*******************************************************************************
* Global functions
*******************************************************************************/
void mpc_console_LINFlexD_Init (uint32_t MegaHertz,uint32_t BaudRate);
void OutStr(char * Str);
void PutChar(int8_t c);

/*******************************************************************************
* Inline functions
*******************************************************************************/

#endif /* _SCI_H */




