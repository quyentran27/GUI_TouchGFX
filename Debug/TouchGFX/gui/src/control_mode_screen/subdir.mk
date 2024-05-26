################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/control_mode_screen/CONTROL_MODEPresenter.cpp \
../TouchGFX/gui/src/control_mode_screen/CONTROL_MODEView.cpp 

OBJS += \
./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEPresenter.o \
./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEView.o 

CPP_DEPS += \
./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEPresenter.d \
./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/control_mode_screen/%.o TouchGFX/gui/src/control_mode_screen/%.su TouchGFX/gui/src/control_mode_screen/%.cyclo: ../TouchGFX/gui/src/control_mode_screen/%.cpp TouchGFX/gui/src/control_mode_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-control_mode_screen

clean-TouchGFX-2f-gui-2f-src-2f-control_mode_screen:
	-$(RM) ./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEPresenter.cyclo ./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEPresenter.d ./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEPresenter.o ./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEPresenter.su ./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEView.cyclo ./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEView.d ./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEView.o ./TouchGFX/gui/src/control_mode_screen/CONTROL_MODEView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-control_mode_screen

