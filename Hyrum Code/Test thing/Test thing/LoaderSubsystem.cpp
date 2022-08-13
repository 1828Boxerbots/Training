#include "LoaderSubsystem.h"

LoaderSubsystem::LoaderSubsystem()
{

}
void LoaderSubsystem::LoadBall(double speed)
{
	m_motorRight.Set(-speed);
	m_motorLeft.Set(speed);
}

void LoaderSubsystem::LoadToSensor(double speed)
{
}
