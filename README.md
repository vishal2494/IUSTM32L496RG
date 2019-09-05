# IUSTM32L496RG
/*
Instructions for adding NUCLEO-L496RG board in the vsCode.
*/

1) For installing PlatformIO extension in vsCode refer the document(PlatformIO Setup Document.pdf).

2) After installing PlatformIO, the platformIO folder will get create in the following location
	i) 	In Windows 	-> C:\Users\userName\.platformio
	II) In Linux   	-> home/userName/.platformio

3) Copy the *.json file from "~/IUSTM32L496RG_v01/jsonFile/IUSTM32L496RG.json" to "~/.platformio/platforms/stm32/boards" location.

4) Copy the entire folder from "~/IUSTM32L496RG_v01/IUSTM32L496RG" to "~/.platformio/packages/framework-arduinostm32/variants/" location.

5) After that reload the vsCode, then we can find "IU STM32 L496RG" board in the platformIO boards list.

6) Regarding examples,
   i)  After creating the project in the PlatformIO, use the given examples(main.cpp).
   ii) Also follow comments in all example programs.
   iii)Use the below mentioned pin numbers for arduino uno compatability
   
		*DIGITL PIN NUMBERS					(0 to 13)
		*ANOLOG PIN NUMBERS					(14 to 19)
		*I2C COMMUNICATION PIN NUMBERS		(21 for SDA, 20 for SCl)
		*ON BOARD RGB LED PIN NUMBERS		(LED_GREEN/26, LED_BLUE/38, LED_RED/25)

