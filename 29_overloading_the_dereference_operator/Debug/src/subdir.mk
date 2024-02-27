################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/29_overloading_the_dereference_operator.cpp \
../src/Complex.cpp 

CPP_DEPS += \
./src/29_overloading_the_dereference_operator.d \
./src/Complex.d 

OBJS += \
./src/29_overloading_the_dereference_operator.o \
./src/Complex.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/29_overloading_the_dereference_operator.d ./src/29_overloading_the_dereference_operator.o ./src/Complex.d ./src/Complex.o

.PHONY: clean-src

