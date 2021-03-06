// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "fireC.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

fireC::fireC(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::controlSS.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void fireC::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void fireC::Execute() {
	if (Robot::controlSS->loaded == true){
		Robot::controlSS->runSequence(4);
	}else{
		SmartDashboard::PutString("Messages: ", "Not loaded");
	}
}

// Make this return true when this Command no longer needs to run execute()
bool fireC::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void fireC::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void fireC::Interrupted() {
	Robot::controlSS->runSequence(5);
}
