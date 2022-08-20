// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include <frc/Joystick.h>
#include <frc/XboxController.h>
#include <frc/PWMVictorSPX.h>
#include <frc/TimedRobot.h>
#include <frc/Spark.h>

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
    double x = m_stick.GetX(frc::GenericHID::kRightHand);
    double y = -m_stick.GetY(frc::GenericHID::kLeftHand); 
    double left = y+x;
    double right = y-x;
    m_motorLeft.Set(left);
    m_motorRight.Set(-right);
  }

 private:
  frc::XboxController m_stick{0};
  frc::Spark m_motorLeft{0};
  frc::Spark m_motorRight{1};
  
  

};

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
