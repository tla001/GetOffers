/*
 * GetOfferQ30.cpp
 *
 *  Created on: 2016Äê11ÔÂ1ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ30.h"

GetOfferQ30::GetOfferQ30() {
	// TODO Auto-generated constructor stub

}

GetOfferQ30::~GetOfferQ30() {
	// TODO Auto-generated destructor stub
}
int GetOfferQ30::FindGreatestSumOfSubArray(vector<int> array) {
	if (array.size() == 0) {
		return 0;
	}
	int curSum = 0;
	int maxSum = array[0];
	for (int i = 0; i < array.size(); i++) {
		curSum = (array[i] > array[i] + curSum) ? array[i] : array[i] + curSum;
		maxSum = (curSum > maxSum) ? curSum : maxSum;
	}
	return maxSum;
}
void GetOfferQ30::test() {
	int a[] = { 6, -3, -2, 7, -15, 1, 2, 2 };
	int n = sizeof(a) / sizeof(a[0]);
	vector<int> array(a, a + n);
	cout << FindGreatestSumOfSubArray(array) << endl;
}
