################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/BitmapDatabase.cpp \
../TouchGFX/generated/images/src/SVGDatabase.cpp \
../TouchGFX/generated/images/src/image_BG_MAIN.cpp \
../TouchGFX/generated/images/src/image_output-onlinepngtools.cpp \
../TouchGFX/generated/images/src/image_output-onlinepngtools_0.cpp \
../TouchGFX/generated/images/src/image_output-onlinepngtools_25.cpp \
../TouchGFX/generated/images/src/image_output-onlinepngtools_60.cpp \
../TouchGFX/generated/images/src/image_output-onlinepngtools_80.cpp 

OBJS += \
./TouchGFX/generated/images/src/BitmapDatabase.o \
./TouchGFX/generated/images/src/SVGDatabase.o \
./TouchGFX/generated/images/src/image_BG_MAIN.o \
./TouchGFX/generated/images/src/image_output-onlinepngtools.o \
./TouchGFX/generated/images/src/image_output-onlinepngtools_0.o \
./TouchGFX/generated/images/src/image_output-onlinepngtools_25.o \
./TouchGFX/generated/images/src/image_output-onlinepngtools_60.o \
./TouchGFX/generated/images/src/image_output-onlinepngtools_80.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/BitmapDatabase.d \
./TouchGFX/generated/images/src/SVGDatabase.d \
./TouchGFX/generated/images/src/image_BG_MAIN.d \
./TouchGFX/generated/images/src/image_output-onlinepngtools.d \
./TouchGFX/generated/images/src/image_output-onlinepngtools_0.d \
./TouchGFX/generated/images/src/image_output-onlinepngtools_25.d \
./TouchGFX/generated/images/src/image_output-onlinepngtools_60.d \
./TouchGFX/generated/images/src/image_output-onlinepngtools_80.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/%.o TouchGFX/generated/images/src/%.su TouchGFX/generated/images/src/%.cyclo: ../TouchGFX/generated/images/src/%.cpp TouchGFX/generated/images/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src

clean-TouchGFX-2f-generated-2f-images-2f-src:
	-$(RM) ./TouchGFX/generated/images/src/BitmapDatabase.cyclo ./TouchGFX/generated/images/src/BitmapDatabase.d ./TouchGFX/generated/images/src/BitmapDatabase.o ./TouchGFX/generated/images/src/BitmapDatabase.su ./TouchGFX/generated/images/src/SVGDatabase.cyclo ./TouchGFX/generated/images/src/SVGDatabase.d ./TouchGFX/generated/images/src/SVGDatabase.o ./TouchGFX/generated/images/src/SVGDatabase.su ./TouchGFX/generated/images/src/image_BG_MAIN.cyclo ./TouchGFX/generated/images/src/image_BG_MAIN.d ./TouchGFX/generated/images/src/image_BG_MAIN.o ./TouchGFX/generated/images/src/image_BG_MAIN.su ./TouchGFX/generated/images/src/image_output-onlinepngtools.cyclo ./TouchGFX/generated/images/src/image_output-onlinepngtools.d ./TouchGFX/generated/images/src/image_output-onlinepngtools.o ./TouchGFX/generated/images/src/image_output-onlinepngtools.su ./TouchGFX/generated/images/src/image_output-onlinepngtools_0.cyclo ./TouchGFX/generated/images/src/image_output-onlinepngtools_0.d ./TouchGFX/generated/images/src/image_output-onlinepngtools_0.o ./TouchGFX/generated/images/src/image_output-onlinepngtools_0.su ./TouchGFX/generated/images/src/image_output-onlinepngtools_25.cyclo ./TouchGFX/generated/images/src/image_output-onlinepngtools_25.d ./TouchGFX/generated/images/src/image_output-onlinepngtools_25.o ./TouchGFX/generated/images/src/image_output-onlinepngtools_25.su ./TouchGFX/generated/images/src/image_output-onlinepngtools_60.cyclo ./TouchGFX/generated/images/src/image_output-onlinepngtools_60.d ./TouchGFX/generated/images/src/image_output-onlinepngtools_60.o ./TouchGFX/generated/images/src/image_output-onlinepngtools_60.su ./TouchGFX/generated/images/src/image_output-onlinepngtools_80.cyclo ./TouchGFX/generated/images/src/image_output-onlinepngtools_80.d ./TouchGFX/generated/images/src/image_output-onlinepngtools_80.o ./TouchGFX/generated/images/src/image_output-onlinepngtools_80.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src

