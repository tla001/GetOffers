/*
 * GetOfferQ29.h
 *
 *  Created on: 2016��11��1��
 *      Author: tla001
 *      title:��С��K����
 *		����n���������ҳ�������С��K��������������4,5,1,6,2,7,3,8��8�����֣�
 *		����С��4��������1,2,3,4,��
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
