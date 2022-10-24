/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Projects.h"


/* MASTER_CODE */

int main()
{
	 M_UART_Void_UARTInit();
	M_UART_Void_UARTSetBaudRate(9600);
	 H_Flex_Sensor_Void_SenosorInit();
	 H_LCD_Void_LCDInit();

	 while(1)
		 {
		u8 SENSOR1_UNBEND = (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)<=163) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=160);
		u8 SENSOR2_UNBEND = (H_Flex_Sensor_U8_SenosorRead(SENSOR2_READING)<=163) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR2_READING)>=160);
		u8 SENSOR3_UNBEND = (H_Flex_Sensor_U8_SenosorRead(SENSOR3_READING)<=163) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR3_READING)>=160);
		u8 SENSOR4_UNBEND = (H_Flex_Sensor_U8_SenosorRead(SENSOR4_READING)<=163) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR4_READING)>=160);
		u8 SENSOR5_UNBEND = (H_Flex_Sensor_U8_SenosorRead(SENSOR5_READING)<=163) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR5_READING)>=160);

		 	 if ( (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)<=168) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=166))
	 		 {
                M_UART_Void_UARTSend('R');
	 		 }
	 		 else if ( (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)<=163) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=160))
	 		 {
	                M_UART_Void_UARTSend('O');
	 		 }
	 		 else if ( (H_Flex_Sensor_U8_SenosorRead(SENSOR2_READING)<=168) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=166))
	 	 	 {
	                M_UART_Void_UARTSend('L');
	 	 	 }
	  		 else if ( (H_Flex_Sensor_U8_SenosorRead(SENSOR2_READING)<=163) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=160))
	 		 {
	                M_UART_Void_UARTSend('O');
	 		 }
	 		 else if ( (H_Flex_Sensor_U8_SenosorRead(SENSOR3_READING)<=168) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=166))
	 	 	 {
	                M_UART_Void_UARTSend('F');
	 	 	 }
	 		 else if ( (H_Flex_Sensor_U8_SenosorRead(SENSOR4_READING)<=168) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=166))
	 		 {
	                M_UART_Void_UARTSend('B');
	 		 }
	 		 else if ( (H_Flex_Sensor_U8_SenosorRead(SENSOR5_READING)<=168) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=166))
	 	 	 {
	                M_UART_Void_UARTSend('I');
	 	 	 }
	  		 else if ( (H_Flex_Sensor_U8_SenosorRead(SENSOR5_READING)<=163) &&  (H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)>=160))
	 		 {
	                M_UART_Void_UARTSend('D');
	 		 }
	  		 else if (SENSOR1_UNBEND && SENSOR2_UNBEND && SENSOR3_UNBEND && SENSOR4_UNBEND && SENSOR5_UNBEND)
	  		 {
	                M_UART_Void_UARTSend('S');
	  		 }
		 }
}
