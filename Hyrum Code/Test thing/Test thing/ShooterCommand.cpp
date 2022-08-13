#include "ShooterCommand.h"
#include <math.h>
#include <iostream>
ShooterCommand::ShooterCommand(DriveTrainSubsystem* pDTS, CameraSubsystem* pCS, LoaderSubsystem* pLS, ShooterSubsystem* pSS)
{
	m_pDTS = pDTS;
	m_pCS = pCS;
	m_pLS = pLS;
	m_pSS = pSS;
}

double ShooterCommand::GetCurrentDistance()
{

	return 0.0;
}

double ShooterCommand::GetCorrectDistance()
{
	return 0.0;
}

void ShooterCommand::execute()
{
	//If the blob is in the line of sight
	if (m_pCS->GetBlob() == 0)
	{
		//if the current distance is where it needs to be
		if (fabs(GetCurrentDistance()-GetCorrectDistance())<=delta())
		{
			//Stop
			m_pDTS->Turn(0.0);
			//load and shoot
			m_pLS->LoadBall();
			m_pSS->Shoot();
			m_isFinished = true;
		}
		//if you are past the distance to shoot
		else if (GetCurrentDistance() < GetCorrectDistance())
		{
			//back up
			m_pDTS->TankDrive(-1.0, -1.0);
		}
		//if you are before the distance to shoot
		else if (GetCurrentDistance() > GetCorrectDistance())
		{
			//move forward
			m_pDTS->TankDrive(1.0, 1.0);
		}
		else
		{
			std::cout << "You did something VERY wrong";
		}
	}
	//If blob can't be found
	else if (m_pCS->GetBlob() == 666)
	{
		//turn right
		m_pDTS->Turn(1); 
	}
	//if blob is right of sensor
	else if (m_pCS->GetBlob() == 1)
	{
		//turn right
		m_pDTS->Turn(1);
	}
	//if blob is left of sensor
	else if (m_pCS->GetBlob() == -1)
	{
		//turn left
		m_pDTS->Turn(-1);
	}

}
bool ShooterCommand::IsFinished()
{
	return m_isFinished;
}