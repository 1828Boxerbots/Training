#pragma once
#include "Vector.h"
#include "Lidar.h"
#include "Constants.h"
class DriveTrainSubsystem
{
public:
	DriveTrainSubsystem();
	void TankDrive(double RightStick,double LeftStick);
	Vector m_motorRight1{ PWM_PORT_DRIVE_RIGHT_MOTOR_1 };
	Vector m_motorRight2{ PWM_PORT_DRIVE_RIGHT_MOTOR_2 };
	Vector m_motorLeft1{ PWM_PORT_DRIVE_LEFT_MOTOR_1 };
	Vector m_motorLeft2{ PWM_PORT_DRIVE_LEFT_MOTOR_2 };
	Lidar m_lidar{ PWM_PORT_SHOOTER_MOTOR };
	void Turn(double input);
};

