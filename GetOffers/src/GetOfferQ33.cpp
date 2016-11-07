/*
 * GetOfferQ33.cpp
 *
 *  Created on: 2016Äê11ÔÂ2ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ33.h"

GetOfferQ33::GetOfferQ33() {
	// TODO Auto-generated constructor stub

}

GetOfferQ33::~GetOfferQ33() {
	// TODO Auto-generated destructor stub
}
int GetOfferQ33::GetUglyNumber_Solution(int index) {
	if (index < 1)
		return 0;
	vector<int> k(index);
	k[0] = 1;
	int t2 = 0, t3 = 0, t5 = 0;
	for (int i = 1; i < index; i++) {
		k[i] = min(min(k[t2] * 2, k[t3] * 3), k[t5] * 5);
		if (k[i] == k[t2] * 2)
			t2++;
		if (k[i] == k[t3] * 3)
			t3++;
		if (k[i] == k[t5] * 5)
			t5++;
	}
	return k[index - 1];
}
void GetOfferQ33::test() {
	int index = 2;
	cout << GetUglyNumber_Solution(index) << endl;
}
