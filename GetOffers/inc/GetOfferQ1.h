/*
 * GetOfferQ1.h
 *
 *  Created on: 2016年10月16日
 *      Author: tla001
 *      title:二维数组中的查找
 *      题目描述
 *		在一个二维数组中，每一行都按照从左到右递增的顺序排序，
 *		每一列都按照从上到下递增的顺序排序。请完成一个函数，
 *		输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
 */

#ifndef GETOFFERQ1_H_
#define GETOFFERQ1_H_

#include "Include.h"

class GetOfferQ1 {
public:
	GetOfferQ1();
	virtual ~GetOfferQ1();
	static bool Find(vector<vector<int> > array, int target);
	static void Create(vector<vector<int> > *array);
	static void Print(vector<vector<int> > array);
	static void test();
};

#endif /* GETOFFERQ1_H_ */
