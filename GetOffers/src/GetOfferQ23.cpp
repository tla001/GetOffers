/*
 * GetOfferQ23.cpp
 *
 *  Created on: 2016Äê10ÔÂ27ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ23.h"

GetOfferQ23::GetOfferQ23() {
	// TODO Auto-generated constructor stub

}

GetOfferQ23::~GetOfferQ23() {
	// TODO Auto-generated destructor stub
}

void GetOfferQ23::test() {
	int a[] = { 1, 3, 5, 6, 4, 2, 7 };
	int length = sizeof(a) / sizeof(a[0]);
	vector<int> seq(a, a + length);
	cout << VerifySquenceOfBST(seq) << endl;
}
