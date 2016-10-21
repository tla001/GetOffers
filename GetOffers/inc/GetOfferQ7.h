/*
 * GetOfferQ7.h
 *
 *  Created on: 2016年10月20日
 *      Author: tla001
 *      title:斐波那契数列
 *      大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。
 *		n<=39
 */

#ifndef GETOFFERQ7_H_
#define GETOFFERQ7_H_

#include "Include.h"

class GetOfferQ7 {
public:
	GetOfferQ7();
	virtual ~GetOfferQ7();
	static int Fibonacci(int n);
	static void test();
};

#endif /* GETOFFERQ7_H_ */
