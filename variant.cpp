/*
Code for Arduino compactability @stm32l496rg.

Date : 29-july-2019
Optipace Technologies

*/

#include "pins_arduino.h"


#ifdef __cplusplus
extern "C" {
#endif

// Pin number
const PinName digitalPin[] = {
	
//DIGITL PINS	
  PC_5,  //D0 //RX
  PC_4,  //D1 //TX
  PB_12, //D2
  PB_13, //D3
  PB_14, //D4
  PB_15, //D5
  PC_9,  //D6
  PC_8,  //D7
  PA_3,  //D8
  PA_2,  //D9
  PD_2,  //D10
  PC_12, //D11
  PC_11, //D12
  PC_10, //D13 - LED

//ANOLOG PINS  
  PA_4,  //D14/ A0
  PA_5,  //D15/ A1
  PC_3,  //D16/ A2
  PC_2,  //D17/ A3
  PC_1,  //D18/ A4
  PC_0,  //D19/ A5

//I2C  
  PB_9,  //D20 //SDA
  PB_8,  //D21 //SCL
  
//SPI
  PB_4, //D22  //MISO
  PB_5, //D23  //MOSI
  PB_3, //D24  //SCK

//RX/TX LEDS
  PB_2, //D25  //RX OUTPUT LED
  PA_10, //D26 //TX OUTPUT LED

//USB
  PA_9, //D27  //VBUS
  PA_11, //D28 //DM
  PA_12, //D29 //DP

//UART
  PA_0, //D30  //TX
  PA_1, //D31  //RX

//QSPI
  PB_11, //D32 //NCS
  PB_10, //D33 //CK
  PB_1, //D34 //IO0
  PB_0, //D35 //IO1
  PA_7, //D36 //IO2
  PA_6, //D37 //IO3

//DIGITL PINS
  PA_8, //D38 //ATN
  PC_7, //D39
  PC_6, //D40

//PAD PINS
  PA_15, //D41 //INT
  PB_7, //D42 //SDA
  PB_6, //D43 //SCL

//BUTTON
  PC_13 //D44 //BUTTON
  
}; 

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  *         The system Clock is configured as follows :
  *            System Clock source            = PLL (MSI)
  *            SYSCLK(Hz)                     = 80000000
  *            HCLK(Hz)                       = 80000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 1
  *            APB2 Prescaler                 = 1
  *            MSI Frequency(Hz)              = 4000000
  *            PLL_M                          = 1
  *            PLL_N                          = 40
  *            PLL_R                          = 2
  *            PLL_P                          = 7
  *            PLL_Q                          = 4
  *            Flash Latency(WS)              = 4
  * @param  None
  * @retval None
  */ 
  
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};

  // MSI is enabled after System reset, activate PLL with MSI as source 
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;

  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_6;
  RCC_OscInitStruct.MSICalibrationValue = RCC_MSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_MSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 40;
  RCC_OscInitStruct.PLL.PLLR = 2;
  RCC_OscInitStruct.PLL.PLLP = 7;
  RCC_OscInitStruct.PLL.PLLQ = 4;

  if(HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    // Initialization Error 
    while(1);
  }

  // Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
    // clocks dividers 
  RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  if(HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
  {
    // Initialization Error 
    while(1);
  }
}

#ifdef __cplusplus
}
#endif
