// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>

#include <frc/motorcontrol/MotorControllerGroup.h>
#include "ctre/Phoenix.h"

class Gearbox : public frc2::SubsystemBase {
 public:
  Gearbox();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void Go(double percent);

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

  WPI_TalonFX m_mainMotor { 1 };
  WPI_TalonFX m_followMotor { 2 };

  frc::MotorControllerGroup m_motors { m_mainMotor, m_followMotor };
};
