/*
 * GetOfferQ29.h
 *
 *  Created on: 2016年11月1日
 *      Author: tla001
 *      title:最小的K个数
 *		输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，
 *		则最小的4个数字是1,2,3,4,。
 */

#ifndef GETOFFERQ29_H_
#define GETOFFERQ29_H_

#include "Include.h"

class GetOfferQ29 {
public:
	GetOfferQ29();
	virtual ~GetOfferQ29();
	static void quicksort(vector<int>&a, int k, int left, int right);
	static vector<int> GetLeastNumbers_Solution(vector<int> input, int k);
	static void print(vector<int> a);
	static void test();
};

#endif /* GETOFFERQ29_H_ */
