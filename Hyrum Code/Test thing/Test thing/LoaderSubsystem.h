#pragma once
#include "Spark.h"
#include "Constants.h"
class LoaderSubsystem
{
public:
	LoaderSubsystem();
	void LoadBall(double speed = 1.0);
	void LoadToSensor(double speed = 1.0);
	Spark m_motorRight{ PWM_PORT_LOADER_RIGHT_MOTOR };
	Spark m_motorLeft{ PWM_PORT_LOADER_LEFT_MOTOR };
};