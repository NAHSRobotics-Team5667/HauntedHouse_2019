/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

package frc.robot.subsystems;

import edu.wpi.first.wpilibj.command.Subsystem;
import frc.robot.commands.AirCommand;
import edu.wpi.first.wpilibj.Solenoid;


/**
 * Add your docs here.
 */
public class AirSubsystem extends Subsystem {
  // Put methods for controlling this subsystem
  // here. Call these from Commands.
  Solenoid sol1 = new Solenoid(0);
  Solenoid sol2 = new Solenoid(1);
  
  
 
  @Override
  public void initDefaultCommand(){
    // Set the default command for a subsystem here.
    setDefaultCommand(new AirCommand());
  }
  public void open() {
      sol1.set(true);
      sol2.set(true);
    }
    
  public void close() {
      sol1.set(false);
      sol2.set(false);
    }
  }

