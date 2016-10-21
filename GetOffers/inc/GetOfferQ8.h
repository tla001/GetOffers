/*
 * GetOfferQ8.h
 *
 *  Created on: 2016年10月21日
 *      Author: tla001
 *      title 跳台阶
 *      一只青蛙一次可以跳上1级台阶，也可以跳上2级。
 *      求该青蛙跳上一个n级的台阶总共有多少种跳法。
 */

#ifndef GETOFFERQ8_H_
#define GETOFFERQ8_H_

#include "Include.h"

class GetOfferQ8 {
public:
	GetOfferQ8();
	virtual ~GetOfferQ8();
	static int jumpFloor(int number);
	static void test();
};

#endif /* GETOFFERQ8_H_ */
