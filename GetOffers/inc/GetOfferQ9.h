/*
 * GetOfferQ9.h
 *
 *  Created on: 2016年10月21日
 *      Author: tla001
 *      title :变态跳台阶
 *      一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
 *      求该青蛙跳上一个n级的台阶总共有多少种跳法
 */

#ifndef GETOFFERQ9_H_
#define GETOFFERQ9_H_

#include "Include.h"

class GetOfferQ9 {
public:
	GetOfferQ9();
	virtual ~GetOfferQ9();
	static int jumpFloorII(int number);
	static void test();
};

#endif /* GETOFFERQ9_H_ */
