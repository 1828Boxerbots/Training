#include "DriveTrainSubsystem.h"

DriveTrainSubsystem::DriveTrainSubsystem()
{

}

void DriveTrainSubsystem::TankDrive(double RightStick,double LeftStick)
{
	m_motorRight1.Set(-RightStick);
	m_motorRight2.Set(-RightStick);
	m_motorLeft1.Set(RightStick);
	m_motorLeft2.Set(RightStick);
}

void DriveTrainSubsystem::Turn(double input)
{
	m_motorRight1.Set(-input);
	m_motorRight2.Set(-input);
	m_motorLeft1.Set(-input);
	m_motorLeft2.Set(-input);
}
