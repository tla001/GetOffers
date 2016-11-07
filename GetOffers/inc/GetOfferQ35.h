/*
 * GetOfferQ35.h
 *
 *  Created on: 2016年11月3日
 *      Author: tla001
 *      title:数组中的逆序对
 *      在数组中的两个数字，如果前面一个数字大于后面的数字，
 *      则这两个数字组成一个逆序对。输入一个数组,
 *      求出这个数组中的逆序对的总数P。并将P对1000000007取模的结果输出。
 *       即输出P%1000000007
 */

#ifndef GETOFFERQ35_H_
#define GETOFFERQ35_H_

#include "Include.h"

class GetOfferQ35 {
public:
	GetOfferQ35();
	virtual ~GetOfferQ35();
	static int InversePairs(vector<int> data);
	static int mergesort(vector<int>&data, int start, int end);
	static void test();
};

#endif /* GETOFFERQ35_H_ */
