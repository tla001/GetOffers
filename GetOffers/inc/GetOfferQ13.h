/*
 * GetOfferQ13.h
 *
 *  Created on: 2016年10月22日
 *      Author: tla001
 *      title:调整数组顺序使奇数位于偶数前面
 *      输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
 *      使得所有的奇数位于数组的前半部分，所有的偶数位于位于数组的后半部分，
 *      并保证奇数和奇数，偶数和偶数之间的相对位置不变
 */

#ifndef GETOFFERQ13_H_
#define GETOFFERQ13_H_

#include "Include.h"

class GetOfferQ13 {
public:
	GetOfferQ13();
	virtual ~GetOfferQ13();

	static void reOrderArray(vector<int> &array);
	static void test();
};

#endif /* GETOFFERQ13_H_ */
