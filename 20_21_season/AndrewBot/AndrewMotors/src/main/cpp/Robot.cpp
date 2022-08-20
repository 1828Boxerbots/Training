// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include <frc/XboxController.h>
#include <frc/Spark.h>
#include <frc/TimedRobot.h>


/**
 * This sample program shows how to control a motor using a joystick. In the
 * operator control part of the program, the joystick is read and the value is
 * written to the motor.
 *
 * Joystick analog values range from -1 to 1 and speed controller inputs as
 * range from -1 to 1 making it easy to work together.
 */
class Robot : public frc::TimedRobot {
 public:
  void TeleopPeriodic() override
  {

    double left;
    double right;
    double x;
    double y;
    x = m_stick.GetX(frc::GenericHID::kRightHand);
    y = -m_stick.GetY(frc::GenericHID::kLeftHand);
    left = (y+x);
    right = (y-x);
    
    m_motorL.Set(left);
    m_motorR.Set(-right);
    bool aButton;
    bool bButton;
    bool Shooter;
    bool loaderIn;
    bool loaderOut;
    aButton = m_stick.GetAButton();
    bButton = m_stick.GetBButton();
    Shooter = m_stick.GetBumper(frc::GenericHID::kLeftHand);
    loaderIn = m_stick.GetXButton();
    loaderOut = m_stick.GetYButton();
    if (aButton == true && bButton == false)
    {
      m_motorTurret.Set(-0.5);
    }
    if (bButton == true && aButton == false)
    {
      m_motorTurret.Set(0.5);
    }
    if (aButton == false && bButton == false)
    {
      m_motorTurret.Set(0.0);
    }
    if (aButton == true && bButton ==true)
    {
      m_motorTurret.Set(0.0);
    }
    if (Shooter == true)
    {
      m_motorShooter.Set(-0.5);
    }
    if (Shooter == false)
    {
      m_motorShooter.Set(0.0);
    }
    if (loaderIn == true && loaderOut == false)
    {
      m_motorLoader.Set(0.5);
    }
    if (loaderOut == true && loaderIn == false)
    {
      m_motorLoader.Set(-0.5);
    }
    if (loaderIn == false && loaderOut == false)
    {
      m_motorLoader.Set(0.0);
    }
    if (loaderIn == true && loaderOut == true)
    {
      m_motorLoader.Set(0.0);
    }
  }

 private:
  frc::XboxController m_stick{0};
  frc::Spark m_motorL{2};
  frc::Spark m_motorR{3};
  frc::Spark m_motorTurret{4};
  frc::Spark m_motorShooter{5};
  frc::Spark m_motorLoader{9};
};

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
