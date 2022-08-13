// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include <frc/Victorsp.h>
#include <frc2/command/SubsystemBase.h>

class LipaLoopDriveTrainSubsystem : public frc2::SubsystemBase {
 public:
  LipaLoopDriveTrainSubsystem();
  void Straight(double power);
  void Turn(double power);
 void ForwardTime(double seconds, double power);
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

void Init();
 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  frc::VictorSP m_motorR{3};
  frc::VictorSP m_motorL{4};
  double GetTime();
};

