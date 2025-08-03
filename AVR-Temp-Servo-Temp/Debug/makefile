################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
AVR-Temp-Servo-Temp.lss \

FLASH_IMAGE += \
AVR-Temp-Servo-Temp.hex \

EEPROM_IMAGE += \
AVR-Temp-Servo-Temp.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: AVR-Temp-Servo-Temp.elf secondary-outputs

# Tool invocations
AVR-Temp-Servo-Temp.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,AVR-Temp-Servo-Temp.map -mmcu=atmega16 -o "AVR-Temp-Servo-Temp.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

AVR-Temp-Servo-Temp.lss: AVR-Temp-Servo-Temp.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S AVR-Temp-Servo-Temp.elf  >"AVR-Temp-Servo-Temp.lss"
	@echo 'Finished building: $@'
	@echo ' '

AVR-Temp-Servo-Temp.hex: AVR-Temp-Servo-Temp.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex AVR-Temp-Servo-Temp.elf  "AVR-Temp-Servo-Temp.hex"
	@echo 'Finished building: $@'
	@echo ' '

AVR-Temp-Servo-Temp.eep: AVR-Temp-Servo-Temp.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex AVR-Temp-Servo-Temp.elf  "AVR-Temp-Servo-Temp.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: AVR-Temp-Servo-Temp.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 AVR-Temp-Servo-Temp.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) AVR-Temp-Servo-Temp.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
