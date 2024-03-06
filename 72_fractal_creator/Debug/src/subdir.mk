################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/72_fractal_creator.cpp \
../src/Bitmap.cpp \
../src/Mandelbrot.cpp 

CPP_DEPS += \
./src/72_fractal_creator.d \
./src/Bitmap.d \
./src/Mandelbrot.d 

OBJS += \
./src/72_fractal_creator.o \
./src/Bitmap.o \
./src/Mandelbrot.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/72_fractal_creator.d ./src/72_fractal_creator.o ./src/Bitmap.d ./src/Bitmap.o ./src/Mandelbrot.d ./src/Mandelbrot.o

.PHONY: clean-src

