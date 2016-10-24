/*
 * GetOfferQ12.cpp
 *
 *  Created on: 2016Äê10ÔÂ22ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ12.h"

GetOfferQ12::GetOfferQ12() {
	// TODO Auto-generated constructor stub

}

GetOfferQ12::~GetOfferQ12() {
	// TODO Auto-generated destructor stub
}

double GetOfferQ12::Power(double base, int exponent) {
	double res = 1;
	int n = 0;
	//1 pow
	//res = pow(base, exponent);
	//return res;
	//2
	if (exponent < 0) {
		if (base == 0)
			return 0;
		n = -exponent;
	} else if (exponent == 0) {
		return 1.0;
	} else {
		n = exponent;
	}
	for (int i = 0; i < n; i++) {
		res *= base;
	}
	return exponent > 0 ? res : (double) 1 / res;
}
void GetOfferQ12::test() {
	double base;
	int exponent;
	while (cin >> base >> exponent) {
		cout << GetOfferQ12::Power(base, exponent) << endl;
	}
}
