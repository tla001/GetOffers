/*
 * GetOfferQ20.h
 *
 *  Created on: 2016年10月26日
 *      Author: tla001
 *      title:包含min函数的栈
 *      定义栈的数据结构，请在该类型中实现一个能够得到栈最小元素的min函数
 */

#ifndef GETOFFERQ20_H_
#define GETOFFERQ20_H_

#include "Include.h"

class GetOfferQ20 {
public:
	GetOfferQ20();
	virtual ~GetOfferQ20();
	void push(int value) {
		index++;
		arr.push_back(value);
	}
	void pop() {
		if (index > 0)
			arr.pop_back();
	}
	int top() {
		return arr[index - 1];
	}
	int min() {
		if (arr.empty())
			return NULL;
		int min = arr[0];
		for (int i = 1; i < arr.size(); i++) {
			if (arr[i] < min)
				min = arr[i];
		}
		return min;
	}
private:
	int index = -1;
	vector<int> arr;
};
void GetOfferQ20Test();
#endif /* GETOFFERQ20_H_ */
