/*
 * GetOfferQ20.h
 *
 *  Created on: 2016��10��26��
 *      Author: tla001
 *      title:����min������ջ
 *      ����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ��СԪ�ص�min����
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
