/* #include "stm32f4_delay.h" */

#ifndef __STM32F4_DELAY_H
#define __STM32F4_DELAY_H

#include "stm32f4xx.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
void     HAL_InitTick( void );
void     HAL_IncTick( void );
uint32_t HAL_GetTick( void );
void     HAL_Delay( __IO uint32_t Delay );
/*=====================================================================================================*/
/*=====================================================================================================*/
#define delay_ms(__ms)  HAL_Delay(__ms)
void delay_us( __IO uint32_t vCnt_us );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif	 
