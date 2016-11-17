/*
 * Right.h
 *
 *  Created on: Nov 9, 2016
 *      Author: celeste173
 */

#ifndef SRC_RIGHT_H_
#define SRC_RIGHT_H_



class Right {
	 VictorSP * rightMotor;
	 Encoder * rightEncoder;
	 void drive (float speed);
 };



#endif /* SRC_RIGHT_H_ */
