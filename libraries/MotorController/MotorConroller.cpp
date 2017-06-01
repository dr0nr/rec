#include "Arduino.h"
#include "MotorController.h"


MotorController::MotorController(void ){
	MotorController::ServoPwmValueMin = 1000;
	MotorController::ServoPwmValueMax = 2000;

	for(int i = 0; i < MC_MOTOR_COUNT; i++){
		MotorController::motors[i].pulse = MotorController::ServoPwmValueMin;
	}
}

long MotorController::mapThrottle(int throttle){
	return (throttle - MC_THROTTLE_MIN) * (MotorController::ServoPwmValueMax - MotorController::ServoPwmValueMin) / (MC_THROTTLE_MAX - MC_THROTTLE_MIN) + MotorController::ServoPwmValueMin;
}

void MotorController::startup(void ){
	return;
}

void MotorController::setMotor(int index, long pulse){
	MotorController::motors[index].pulse = pulse;
}

void MotorController::apply(void ){

}