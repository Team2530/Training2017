/*
 * DriveTrain.h
 *
 *  Created on: Nov 2, 2016
 *      Author: celeste173
 */

#ifndef SRC_DRIVETRAIN_H_
#define SRC_DRIVETRAIN_H_

class DriveTrain {
	MotorController leftMotorController
	MotorController rightMotorController
	void drive (float leftJoystick, float rightJoystick);
	void goStraight (float speed);

};



#endif /* SRC_DRIVETRAIN_H_ */
