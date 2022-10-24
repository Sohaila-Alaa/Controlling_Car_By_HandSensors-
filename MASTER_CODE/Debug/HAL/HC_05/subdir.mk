################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/HC_05/HC_05_Prog.c 

OBJS += \
./HAL/HC_05/HC_05_Prog.o 

C_DEPS += \
./HAL/HC_05/HC_05_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/HC_05/%.o: ../HAL/HC_05/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\DELL G3\Desktop\slave\APP" -I"C:\Users\DELL G3\Desktop\slave\HAL\Flex_Sensor" -I"C:\Users\DELL G3\Desktop\slave\HAL\HC_05" -I"C:\Users\DELL G3\Desktop\slave\MCAL\UART" -I"C:\Users\DELL G3\Desktop\slave\HAL\Servo" -I"C:\Users\DELL G3\Desktop\slave\HAL\DCMotor" -I"C:\Users\DELL G3\Desktop\slave\MCAL\GIE" -I"C:\Users\DELL G3\Desktop\slave\MCAL\Timer" -I"C:\Users\DELL G3\Desktop\slave\MCAL\ADC" -I"C:\Users\DELL G3\Desktop\slave\HAL\LCD" -I"C:\Users\DELL G3\Desktop\slave\APP\Projects" -I"C:\Users\DELL G3\Desktop\slave\HAL\Buzzer" -I"C:\Users\DELL G3\Desktop\slave" -I"C:\Users\DELL G3\Desktop\slave\HAL" -I"C:\Users\DELL G3\Desktop\slave\MCAL" -I"C:\Users\DELL G3\Desktop\slave\MCAL\DIO" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


