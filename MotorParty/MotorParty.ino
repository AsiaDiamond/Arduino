#include <Servo.h>

Servo servo_pin_1;
int _ABVAR_1_servoAngle = 0 ;
int _ABVAR_2_a;

void setup()
{
	_ABVAR_1_servoAngle = 0 ;

servo_pin_1.attach(1);
}

void loop()
{
	for (_ABVAR_2_a=1; _ABVAR_2_a<= ( 90 ); ++_ABVAR_2_a )
	{
		_ABVAR_1_servoAngle = ( _ABVAR_1_servoAngle + 1 ) ;
	servo_pin_1.write( _ABVAR_1_servoAngle );
		delay( 1000 );
	}
}


