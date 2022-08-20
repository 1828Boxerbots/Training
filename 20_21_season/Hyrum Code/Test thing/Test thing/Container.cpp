#include "Container.h"

Container::Container()
{
}

void Container::Init()
{
	m_pDriveTrainSubsystem = new DriveTrainSubsystem();
	m_pCameraSubsystem = new CameraSubsystem();
	m_pLoaderSubsystem = new LoaderSubsystem();
	m_pShooterSubsystem = new ShooterSubsystem();
	m_pShooterCommand = new ShooterCommand(m_pDriveTrainSubsystem, m_pCameraSubsystem, m_pLoaderSubsystem, m_pShooterSubsystem);
}
