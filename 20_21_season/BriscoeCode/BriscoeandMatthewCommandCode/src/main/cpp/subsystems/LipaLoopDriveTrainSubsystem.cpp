// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/LipaLoopDriveTrainSubsystem.h"

LipaLoopDriveTrainSubsystem::LipaLoopDriveTrainSubsystem() = default;

// This method will be called once per scheduler run
void LipaLoopDriveTrainSubsystem::Periodic() {}

void LipaLoopDriveTrainSubsystem::Straight(double power)
{
    m_motorL.Set(-power);
    m_motorR.Set(power);
}

void LipaLoopDriveTrainSubsystem::Turn(double power)
{
    m_motorL.Set(-power);
    m_motorR.Set(-power);
}

void LipaLoopDriveTrainSubsystem::Init()
{
    m_motorL.Set(0.0);
    m_motorR.Set(0.0);
}

double LipaLoopDriveTrainSubsystem::GetTime()
{
return 0.0;
}
void LipaLoopDriveTrainSubsystem::ForwardTime(double seconds, double power)
{
float TimeStart=GetTime();

 while ((GetTime()-TimeStart)<seconds)
 {
     Straight(power);
 }
 Straight (0);
}
