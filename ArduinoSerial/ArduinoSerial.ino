#include <AFMotor.h>

AF_DCMotor motor_dc_2(2, MOTOR12_64KHZ);
AF_DCMotor motor_dc_1(1, MOTOR12_64KHZ);

void setup()
{

}

void loop()
{
	motor_dc_1.setSpeed(255);
	motor_dc_1.run(FORWARD);
	motor_dc_2.setSpeed(255);
	motor_dc_2.run(FORWARD);
	delay( 3000 );
	motor_dc_1.setSpeed(0);
	motor_dc_1.run(FORWARD);
	motor_dc_2.setSpeed(255);
	motor_dc_2.run(FORWARD);
	delay( 6000 );
}

 
