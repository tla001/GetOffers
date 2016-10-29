/*
 * GetOfferQ20.cpp
 *
 *  Created on: 2016Äê10ÔÂ26ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ20.h"

GetOfferQ20::GetOfferQ20() {
	// TODO Auto-generated constructor stub
	//index = -1;
}

GetOfferQ20::~GetOfferQ20() {
	// TODO Auto-generated destructor stub
}

void GetOfferQ20Test() {
	GetOfferQ20 *test = new GetOfferQ20();
	for (int i = 2; i <= 5; i++) {
		test->push(i);
	}
	test->pop();
	test->push(2);
	cout << test->top() << endl;
	cout << test->min() << endl;
}
