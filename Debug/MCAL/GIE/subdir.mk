################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/GIE/GIE_Prog.c 

OBJS += \
./MCAL/GIE/GIE_Prog.o 

C_DEPS += \
./MCAL/GIE/GIE_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/GIE/%.o: ../MCAL/GIE/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\DELL G3\Desktop\slave\APP" -I"C:\Users\DELL G3\Desktop\slave" -I"C:\Users\DELL G3\Desktop\slave\HAL" -I"C:\Users\DELL G3\Desktop\slave\MCAL" -I"C:\Users\DELL G3\Desktop\slave\APP\Projects" -I"C:\Users\DELL G3\Desktop\slave\HAL\Buzzer" -I"C:\Users\DELL G3\Desktop\slave\HAL\DCMotor" -I"C:\Users\DELL G3\Desktop\slave\HAL\Flex_Sensor" -I"C:\Users\DELL G3\Desktop\slave\HAL\LCD" -I"C:\Users\DELL G3\Desktop\slave\HAL\Servo" -I"C:\Users\DELL G3\Desktop\slave\MCAL\ADC" -I"C:\Users\DELL G3\Desktop\slave\MCAL\DIO" -I"C:\Users\DELL G3\Desktop\slave\MCAL\GIE" -I"C:\Users\DELL G3\Desktop\slave\MCAL\Timer" -I"C:\Users\DELL G3\Desktop\slave\MCAL\UART" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

