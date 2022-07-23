/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Port_Lcfg.c
 *        \brief  Confguration file for GPIO Module  
 *
 *      \details  Configure GPIO Ports in this file using Configured Pins array 
 *                The pins you want to configure needs to specify the Pin ID , Mode ,PULL UP or Pull DAWN and 
 *                the current  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Port_cfg.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/


Configured_Pins={
    {Port_PF0 , GPIO_MODE,OUTPUT,  PULL_DOWN,  mA_2},
    {Port_PF0 , GPIO_MODE,INPUT,   PULL_UP,    mA_8},
    {Port_PF0 , GPIO_MODE,OUTPUT,  OPEN_DRAIN, mA_2},
    {Port_PF0 , GPIO_MODE,OUTPUT,  PULL_DOWN,  mA_4},
};


/**********************************************************************************************************************
 *  END OF FILE: Port_Lcfg.c
 *********************************************************************************************************************/