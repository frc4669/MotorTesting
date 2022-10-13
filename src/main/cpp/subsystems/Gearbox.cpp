// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Gearbox.h"

Gearbox::Gearbox() {
    m_mainMotor.ConfigSupplyCurrentLimit(SupplyCurrentLimitConfiguration(true, 25, 25, 0.5));
    m_followMotor.ConfigStatorCurrentLimit(StatorCurrentLimitConfiguration(true, 25, 25, 0.5));

    m_mainMotor.SetSafetyEnabled(false);
    m_followMotor.SetSafetyEnabled(false);

    m_followMotor.Follow(m_mainMotor);
};

void Gearbox::Go(double percent) {
    m_motors.Set(percent);
}

// This method will be called once per scheduler run
void Gearbox::Periodic() {}
