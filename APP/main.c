/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Projects.h"

/* SLAVE_CODE */

int main()
{
 M_UART_Void_UARTInit();
  M_UART_Void_UARTSetBaudRate(9600);
 H_DCMotor_Void_DCMotorInit();
 H_Servo_Void_ServoInit();
 H_Buzzer_Void_BuzzerInit();

 u8 Sensor_U8_Received;

	  while(1)
	  {
		  Sensor_U8_Received=M_UART_Void_UARTRecBlock();;

		  switch (Sensor_U8_Received) {
			case 'R':
              H_Servo_Void_ServoSetAngle(-90);
              H_Servo_Void_ServoSetStart();

				break;
			case 'O':
	              H_Servo_Void_ServoSetAngle(0);
	              H_Servo_Void_ServoSetStart();
				break;
			case 'L':
	              H_Servo_Void_ServoSetAngle(180);
	              H_Servo_Void_ServoSetStart();
				break;
			case 'F':
                  H_DCMotor_Void_DCMotorSetDirection(CW);
                  H_Buzzer_Void_BuzzerOnce();
                  H_DCMotor_Void_DCMotorSetSpeed(100);
                  H_DCMotor_Void_DCMotorStart();
				break;
			case 'B':
                  H_DCMotor_Void_DCMotorSetDirection(ACW);
                  H_Buzzer_Void_BuzzerOnce();
                  H_DCMotor_Void_DCMotorSetSpeed(100);
                  H_DCMotor_Void_DCMotorStart();
				break;
			case 'I':
                H_DCMotor_Void_DCMotorSetSpeed(100);
                H_Buzzer_Void_BuzzerOnce();
                H_DCMotor_Void_DCMotorStart();
				break;
			case 'D':
                H_DCMotor_Void_DCMotorSetSpeed(60);
                H_Buzzer_Void_BuzzerOnce();
                H_DCMotor_Void_DCMotorStart();
				break;
			case 'S':
                H_DCMotor_Void_DCMotorStop();
				break;
			default:
				break;
		}

	  }
	return 0;
}
