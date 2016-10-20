/*
 * GetOfferQ7.cpp
 *
 *  Created on: 2016Äê10ÔÂ20ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ7.h"

GetOfferQ7::GetOfferQ7() {
	// TODO Auto-generated constructor stub

}

GetOfferQ7::~GetOfferQ7() {
	// TODO Auto-generated destructor stub
}

int GetOfferQ7::Fibonacci(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	if (n > 2) {
		int *a = (int *) malloc(sizeof(int) * n);
		a[0] = 1;
		a[1] = 1;
		for (int i = 2; i < n; i++) {
			a[i] = a[i - 1] + a[i - 2];
		}
		int ret = a[n - 1];
		free(a);
		return ret;
	}
	return 0;
}
void GetOfferQ7::test() {
	int n = 0;
	while (cin >> n) {
		if (n > 0) {
			cout << Fibonacci(n) << endl;
		} else {
			cout << "redo \n";
		}
	}
}
