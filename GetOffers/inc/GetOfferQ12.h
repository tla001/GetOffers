/*
 * GetOfferQ12.h
 *
 *  Created on: 2016年10月22日
 *      Author: tla001
 *      title:数值的整数次方
 *      给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方
 */

#ifndef GETOFFERQ12_H_
#define GETOFFERQ12_H_

#include "Include.h"

class GetOfferQ12 {
public:
	GetOfferQ12();
	virtual ~GetOfferQ12();

	static double Power(double base, int exponent);
	static void test();
};

#endif /* GETOFFERQ12_H_ */
