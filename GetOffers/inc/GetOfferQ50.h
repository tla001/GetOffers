/*
 * GetOfferQ50.h
 *
 *  Created on: 2016��11��10��
 *      Author: tla001
 *      title:�������ظ�������
 *      ��һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ�
 *      ������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�
 *      Ҳ��֪��ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡�
 *       ���磬������볤��Ϊ7������{2,3,1,0,2,5,3}��
 *       ��ô��Ӧ��������ظ�������2����3��
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
