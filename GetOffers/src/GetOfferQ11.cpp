/*
 * GetOfferQ11.cpp
 *
 *  Created on: 2016年10月22日
 *      Author: tla001
 */

#include "GetOfferQ11.h"

GetOfferQ11::GetOfferQ11() {
	// TODO Auto-generated constructor stub

}

GetOfferQ11::~GetOfferQ11() {
	// TODO Auto-generated destructor stub
}
void GetOfferQ11::print(int n) {
	int length = sizeof(int) * 8;
	for (int i = 0; i < length; i++) {
		cout << (1 & (n >> i));
	}
	cout << endl;
}
//机器里是使用补码计算的
int GetOfferQ11::NumberOf1(int n) {
	int length = sizeof(int) * 8;
	int num = 0;
	for (int i = 0; i < length; i++) {
		if ((1 & (n >> i)) == 1)
			num++;
	}
	return num;
}
void GetOfferQ11::test() {
	cout << "input :" << endl;
	int n;
	while (cin >> n) {
		print(n);
		cout << "num of 1:" << NumberOf1(n) << endl;
	}
}
