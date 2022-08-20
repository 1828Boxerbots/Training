#pragma once
#include "CameraSubsystem.h"
#include "DriveTrainSubsystem.h"
#include "LoaderSubsystem.h"
#include "ShooterCommand.h"
#include "ShooterSubsystem.h"
class Container
{
public:
	Container();
	DriveTrainSubsystem * m_pDriveTrainSubsystem = nullptr;
	CameraSubsystem* m_pCameraSubsystem = nullptr;
	LoaderSubsystem* m_pLoaderSubsystem = nullptr;
	ShooterSubsystem* m_pShooterSubsystem = nullptr;
	ShooterCommand* m_pShooterCommand = nullptr;
	void Init();

};

