################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../utilidades/socket_utils.c 

OBJS += \
./utilidades/socket_utils.o 

C_DEPS += \
./utilidades/socket_utils.d 


# Each subdirectory must supply rules for building sources it contributes
utilidades/%.o: ../utilidades/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


