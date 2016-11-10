/*
 * GetOfferQ48.h
 *
 *  Created on: 2016年11月9日
 *      Author: tla001
 *      title:不用加减乘除做加法
 *      写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号
 */

#ifndef GETOFFERQ48_H_
#define GETOFFERQ48_H_

#include "Include.h"

class GetOfferQ48 {
public:
	GetOfferQ48();
	virtual ~GetOfferQ48();
	int Add(int num1, int num2) {
		if (num2 == 0)
			return num1;
		int sum = num1 ^ num2;
		int carry = (num1 & num2) << 1;
		return Add(sum, carry);
	}
};

#endif /* GETOFFERQ48_H_ */
