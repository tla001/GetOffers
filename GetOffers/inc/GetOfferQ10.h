/*
 * GetOfferQ10.h
 *
 *  Created on: 2016年10月21日
 *      Author: tla001
 *      title: 矩形覆盖
 *      我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
 *      请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
 */

#ifndef GETOFFERQ10_H_
#define GETOFFERQ10_H_

#include "Include.h"

class GetOfferQ10 {
public:
	GetOfferQ10();
	virtual ~GetOfferQ10();
	static int rectCover(int number);
	static void test();
};

#endif /* GETOFFERQ10_H_ */
