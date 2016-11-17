/*
 * Left.h
 *
 *  Created on: Nov 2, 2016
 *      Author: celeste173
 */

#ifndef SRC_MOTORCONTROLLER_H_
#define SRC_MOTORCONTROLLER_H_


class MotorController{
	VictorSP *Motor;
	Encoder *Encoder;

	void drive (float speed);
};



#endif /* SRC_MOTORCONTROLLER_H_ */
