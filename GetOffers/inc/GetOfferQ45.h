/*
 * GetOfferQ45.h
 *
 *  Created on: 2016年11月9日
 *      Author: tla001
 *      title:扑克牌顺子
 *
 */

#ifndef GETOFFERQ45_H_
#define GETOFFERQ45_H_

#include "Include.h"

class GetOfferQ45 {
public:
	GetOfferQ45();
	virtual ~GetOfferQ45();
	static bool compare(const int&a, const int&b) {
		return a < b;
	}
	static bool IsContinuous(vector<int> numbers) {
		int size = numbers.size();
		if (size < 5)
			return false;
		sort(numbers.begin(), numbers.end(), compare);
//		for (vector<int>::iterator item = numbers.begin();
//				item != numbers.end(); item++) {
//			cout << *item << "\t";
//		}
//		cout << endl;
		int zeros = 0;
		int diff = 0;
		for (int i = 0; i < size; i++) {
			if (numbers[i] == 0)
				zeros++;
			else
				break;
		}
		for (int i = size - 1; i > zeros; i--) {
			int tem = numbers[i] - numbers[i - 1];
			if (tem > 0)
				diff += tem;
			else
				return false;
		}
		if (diff <= 4)
			return true;
		else
			return false;
//		if (zeros == 4) {
//			return true;
//		} else if (zeros == 3) {
//			diff = numbers[4] - numbers[3];
//			if (diff <= 4) {
//				return true;
//			} else
//				return false;
//		} else if (zeros == 2) {
//			diff = numbers[4] - numbers[2];
//			if (diff <= 4)
//				return true;
//			else
//				return false;
//		} else if (zeros == 1) {
//			diff = numbers[4] - numbers[1];
//			if (diff <= 4)
//				return true;
//			else
//				return false;
//		} else if (zeros == 0) {
//			diff = numbers[4] - numbers[0];
//			if (diff <= 4)
//				return true;
//			else
//				return false;
//		}
	}
	static void test() {
		int a[] = { 4, 6, 5, 0, 4 };
		int size = sizeof(a) / sizeof(a[0]);
		vector<int> numbers(a, a + size);
		cout << IsContinuous(numbers) << endl;
	}
};

#endif /* GETOFFERQ45_H_ */
