/*
 * GetOfferQ40.h
 *
 *  Created on: 2016年11月7日
 *      Author: tla001
 *      title:数组中只出现一次的数字
 *      一个整型数组里除了两个数字之外，其他的数字都出现了两次。
 *      请写程序找出这两个只出现一次的数字
 */

#ifndef GETOFFERQ40_H_
#define GETOFFERQ40_H_

#include "Include.h"

class GetOfferQ40 {
public:
	GetOfferQ40();
	virtual ~GetOfferQ40();
	static void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
		map<int, int> m;
		for (int i = 0; i < data.size(); i++) {
			if (m.find(data[i]) == m.end()) {
				m.insert(make_pair(data[i], 1));
			} else {
				m[data[i]] = 0;
			}
		}
		vector<int> a;
		for (map<int, int>::iterator ite = m.begin(); ite != m.end(); ite++) {
			if (ite->second == 1)
				a.push_back(ite->first);
			//cout << ite->first << "\t" << ite->second << endl;
		}
		//cout << "a= " << a[0] << "\t" << a[1] << endl;
		*num1 = a[0];
		*num2 = a[1];
	}
	static void test() {
		int a[] = { 2, 4, 3, 6, 3, 2, 5, 5 };
		int size = sizeof(a) / sizeof(a[0]);
		vector<int> data(a, a + size);
		int num1, num2;
		FindNumsAppearOnce(data, &num1, &num2);
		cout << "num1= " << num1 << "\t" << "num2= " << num2 << endl;
	}
};

#endif /* GETOFFERQ40_H_ */
