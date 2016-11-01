/*
 * GetOfferQ28.h
 *
 *  Created on: 2016年10月31日
 *      Author: tla001
 *      title:数组中出现次数超过一半的数字
 *      数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
 *      例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
 *      由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
 */

#ifndef GETOFFERQ28_H_
#define GETOFFERQ28_H_

#include "Include.h"

class GetOfferQ28 {
public:
	GetOfferQ28();
	virtual ~GetOfferQ28();
	static int MoreThanHalfNum_Solution(vector<int> numbers);
	static void test();
};

#endif /* GETOFFERQ28_H_ */
