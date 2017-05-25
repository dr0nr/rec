


LIB_FOLDER=-libraries /Users/simon/Projects/dr0nr/dr0nr-esp/libraries
BUILD_FOLDER=-build-path /Users/simon/Projects/dr0nr/dr0nr-esp/build
ARDUINO=/Applications/Arduino.app/Contents/MacOS/Arduino
ARDUINO_BUILDER=/Applications/Arduino.app/Contents/Java/arduino-builder



FQBN=esp8266com:esp8266:nodemcuv2:CpuFrequency=160,UploadSpeed=921600,FlashSize=4M3M

all:
	@echo "Building..."
	@$(ARDUINO_BUILDER) -quiet -compile -logger=human -hardware /Applications/Arduino.app/Contents/Java/hardware -hardware /Users/simon/Library/Arduino15/packages -hardware /Users/simon/Documents/Arduino/hardware -tools /Applications/Arduino.app/Contents/Java/tools-builder -tools /Applications/Arduino.app/Contents/Java/hardware/tools/avr -tools /Users/simon/Library/Arduino15/packages -built-in-libraries /Applications/Arduino.app/Contents/Java/libraries -libraries /Users/simon/Documents/Arduino/libraries $(LIB_FOLDER) -fqbn=$(FQBN) -ide-version=10801 $(BUILD_FOLDER) -warnings=none -prefs=build.warn_data_percentage=75 -verbose /Users/simon/Projects/dr0nr/dr0nr-esp/dr0nr-esp.ino

clean:
	@echo "Cleaning..."
	@rm -rf build/*