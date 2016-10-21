/*
 * GetOfferQ10.cpp
 *
 *  Created on: 2016Äê10ÔÂ21ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ10.h"

GetOfferQ10::GetOfferQ10() {
	// TODO Auto-generated constructor stub

}

GetOfferQ10::~GetOfferQ10() {
	// TODO Auto-generated destructor stub
}

int GetOfferQ10::rectCover(int number) {
	if (number == 1)
		return 1;
	else if (number == 2)
		return 2;
	else if (number > 2)
		return rectCover(number - 1) + rectCover(number - 2);
	return 0;
}
void GetOfferQ10::test() {
	cout << "input number :" << endl;
	int n = 0;
	while (cin >> n) {
		if (n > 0) {
			cout << rectCover(n) << endl;
		} else
			cout << "redo" << endl;
	}
}
