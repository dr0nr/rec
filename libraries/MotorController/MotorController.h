#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H

#include "Arduino.h"

#define MC_THROTTLE_MIN 0
#define MC_THROTTLE_MAX 100

#define MC_MOTOR_COUNT 4

struct MC_motor{
	long pulse;
	int pin;
	int pos;
	int throttleOffset;
};

class MotorController{
protected: 
	MC_motor motors[MC_MOTOR_COUNT];
	int ServoPwmValueMin;
	int ServoPwmValueMax;
	long mapThrottle(int);
public:
	MotorController(void );
	void startup(void );
	void apply(void );
	void setMotor(int, long);
};

#endif