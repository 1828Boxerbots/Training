#pragma once
#include "CameraSubsystem.h"
#include "DriveTrainSubsystem.h"
#include "LoaderSubsystem.h"
#include "ShooterSubsystem.h"
class ShooterCommand
{
public:
	ShooterCommand(DriveTrainSubsystem*pDTS,CameraSubsystem*pCS,LoaderSubsystem*pLS,ShooterSubsystem*pSS);
	DriveTrainSubsystem *m_pDTS;
	CameraSubsystem *m_pCS;
	LoaderSubsystem *m_pLS;
	ShooterSubsystem *m_pSS;
	int m_isFinished = false;
	double GetCurrentDistance();
	double GetCorrectDistance();
	double delta()
	{
		return 0.001;
	}
	bool IsFinished();
	void execute();
};

