/*
 * GetOfferQ8.cpp
 *
 *  Created on: 2016Äê10ÔÂ21ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ8.h"

GetOfferQ8::GetOfferQ8() {
	// TODO Auto-generated constructor stub

}

GetOfferQ8::~GetOfferQ8() {
	// TODO Auto-generated destructor stub
}

int GetOfferQ8::jumpFloor(int number) {
	if (number == 1)
		return 1;
	else if (number == 2)
		return 2;
	else if (number > 2) {
		return jumpFloor(number - 1) + jumpFloor(number - 2);
	}
	return 0;
}
void GetOfferQ8::test() {
	cout << "input number :" << endl;
	int n = 0;
	while (cin >> n) {
		if (n > 0) {
			cout << jumpFloor(n) << endl;
		} else
			cout << "redo" << endl;
	}
}
