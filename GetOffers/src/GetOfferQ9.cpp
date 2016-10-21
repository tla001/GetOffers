/*
 * GetOfferQ9.cpp
 *
 *  Created on: 2016Äê10ÔÂ21ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ9.h"

GetOfferQ9::GetOfferQ9() {
	// TODO Auto-generated constructor stub

}

GetOfferQ9::~GetOfferQ9() {
	// TODO Auto-generated destructor stub
}

int GetOfferQ9::jumpFloorII(int number) {
	if (number == 0)
		return 1;
	if (number == 1)
		return 1;
	if (number > 1)
		return 2 * jumpFloorII(number - 1);
	return 0;
}
void GetOfferQ9::test() {
	cout << "input number :" << endl;
	int n = 0;
	while (cin >> n) {
		if (n > 0) {
			cout << jumpFloorII(n) << endl;
		} else
			cout << "redo" << endl;
	}
}
