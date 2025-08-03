################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_Programme.c \
../DIO_program.c \
../GIE_Program.c \
../LCD_programm.c \
../TIMER1_prog.c \
../TMR0_Program.c \
../main.c 

OBJS += \
./ADC_Programme.o \
./DIO_program.o \
./GIE_Program.o \
./LCD_programm.o \
./TIMER1_prog.o \
./TMR0_Program.o \
./main.o 

C_DEPS += \
./ADC_Programme.d \
./DIO_program.d \
./GIE_Program.d \
./LCD_programm.d \
./TIMER1_prog.d \
./TMR0_Program.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


