/*
 * GetOfferQ50.h
 *
 *  Created on: 2016年11月10日
 *      Author: tla001
 *      title:数组中重复的数字
 *      在一个长度为n的数组里的所有数字都在0到n-1的范围内。
 *      数组中某些数字是重复的，但不知道有几个数字是重复的。
 *      也不知道每个数字重复几次。请找出数组中任意一个重复的数字。
 *       例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，
 *       那么对应的输出是重复的数字2或者3。
 */

#ifndef GETOFFERQ50_H_
#define GETOFFERQ50_H_

#include "Include.h"

class GetOfferQ50 {
public:
	GetOfferQ50();
	virtual ~GetOfferQ50();
	static bool duplicate(int numbers[], int length, int* duplication) {
		map<int, int> m;
		for (int i = 0; i < length; i++) {
			if (m.find(numbers[i]) == m.end()) {
				m.insert(make_pair(numbers[i], 1));
			} else {
				*duplication = numbers[i];
				return true;
			}
		}
		return false;
	}
	static void test() {
		int a[] = { 2, 3, 1, 0, 2, 5, 3 };
		int length = sizeof(a) / sizeof(a[0]);
		int dup;
		cout << duplicate(a, length, &dup) << "\t" << dup << endl;
	}
};

#endif /* GETOFFERQ50_H_ */
