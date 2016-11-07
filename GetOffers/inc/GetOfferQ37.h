/*
 * GetOfferQ37.h
 *
 *  Created on: 2016年11月7日
 *      Author: tla001
 *      title:数字在排序数组中出现的次数
 *      统计一个数字在排序数组（从小到大排序）中出现的次数。
 */

#ifndef GETOFFERQ37_H_
#define GETOFFERQ37_H_

#include "Include.h"

class GetOfferQ37 {
public:
	GetOfferQ37();
	virtual ~GetOfferQ37();
	static int GetNumberOfK(vector<int> data, int k);
	static void test();
};

#endif /* GETOFFERQ37_H_ */
