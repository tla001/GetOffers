/*
 * GetOfferQ11.h
 *
 *  Created on: 2016年10月22日
 *      Author: tla001
 *      title:二进制中1的个数
 *      输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示
 */

#ifndef GETOFFERQ11_H_
#define GETOFFERQ11_H_

#include "Include.h"

class GetOfferQ11 {
public:
	GetOfferQ11();
	virtual ~GetOfferQ11();

	static int NumberOf1(int n);
	static void print(int n);
	static void test();
};

#endif /* GETOFFERQ11_H_ */
