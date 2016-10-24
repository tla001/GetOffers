/*
 * GetOfferQ13.cpp
 *
 *  Created on: 2016年10月22日
 *      Author: tla001
 */

#include "GetOfferQ13.h"

GetOfferQ13::GetOfferQ13() {
	// TODO Auto-generated constructor stub

}

GetOfferQ13::~GetOfferQ13() {
	// TODO Auto-generated destructor stub
}

void GetOfferQ13::reOrderArray(vector<int> &array) {
//	for (int i = 0; i < array.size(); i++) {
//		for (int j = array.size() - 1; j > i; j--) {
//			if (array[j] % 2 == 1 && array[j - 1] % 2 == 0) //前偶后奇交换
//					{
//				swap(array[j], array[j - 1]);
//			}
//		}
//	}

//	vector<int> array_temp;
//	vector<int>::iterator ib1, ie1;
//	ib1 = array.begin();
//
//	for (; ib1 != array.end();) {            //遇见偶数，就保存到新数组，同时从原数组中删除
//		if (*ib1 % 2 == 0) {
//			array_temp.push_back(*ib1);
//			ib1 = array.erase(ib1);
//		} else {
//			ib1++;
//		}
//
//	}
//	vector<int>::iterator ib2, ie2;
//	ib2 = array_temp.begin();
//	ie2 = array_temp.end();
//
//	for (; ib2 != ie2; ib2++)             //将新数组的数添加到老数组
//			{
//		array.push_back(*ib2);
//	}

	int size = array.size();
	if (size == 1 || size == 0)
		return;
	int minpos = 0; //奇数位置
	int maxpos = 0;
	int i, j;
	int temp, pos;
	for (j = 0; j < size / 2; j++) {
		for (i = j; i < size - j; i++) {
			if (array[i] % 2 == 1) { //奇数
				minpos = i;
				break;
			}
		}
		temp = array[minpos];
		pos = minpos;
		while (pos > j) {
			array[pos] = array[--pos];
		}
		array[j] = temp;
		for (i = size - 1 - j; i >= j; i--) {

			if (array[i] % 2 == 0) { //偶数
				maxpos = i;
				break;
			}
		}
		temp = array[maxpos];
		pos = maxpos;
		while (maxpos < size - j - 1) {
			array[maxpos] = array[++maxpos];
		}
		array[size - j - 1] = temp;

//		cout << "minpos= " << minpos << "\t" << "maxpos= " << maxpos << endl;
//		for (int i = j + 1; i < size - j - 1; i++)
//			cout << array[i] << "\t";
//		cout << endl;
//		cout << array[j] << "\t" << array[size - j - 1] << endl;
//		for (int i = 0; i < size; i++)
//			cout << array[i] << "\t";
//		cout << endl;
	}

//	if ((array.end() - array.begin()) >= 2) {
//		vector<int> array(array.begin() + 1, array.end() - 1);
//		for (vector<int>::iterator item = array.begin(); item != array.end();
//				item++) {
//			cout << *item << "\t";
//		}
//		cout << endl;
//		reOrderArray(array);
//	}
}
void GetOfferQ13::test() {
//	int a[] = { 2, 4, 6, 1, 3, 5, 7 };
//	int size = sizeof(a) / sizeof(a[0]);
//	vector<int> array(a, a + size);
//	reOrderArray(array);
//	for (int i = 0; i < size; i++)
//		cout << array[i] << "\t";
//	cout << endl;
	vector<int> array;
	int n = 7;
	for (int i = 1; i <= n; i++) {
		array.push_back(i);
	}
	for (int i = 0; i < n; i++)
		cout << array[i] << "\t";
	cout << endl;
	reOrderArray(array);
	for (int i = 0; i < n; i++)
		cout << array[i] << "\t";
	cout << endl;
	//	for (vector<int>::iterator item = array.begin(); item != array.end();
	//			item++) {
	//		cout << *item << "\t";
	//	}
}
