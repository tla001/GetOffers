/*
 * GetOfferQ6.cpp
 *
 *  Created on: 2016Äê10ÔÂ20ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ6.h"

GetOfferQ6::GetOfferQ6() {
	// TODO Auto-generated constructor stub

}

GetOfferQ6::~GetOfferQ6() {
	// TODO Auto-generated destructor stub
}

int GetOfferQ6::minNumberInRotatrArray(vector<int> rotateArray) {
	if (rotateArray.size() == 0)
		return 0;
	return binaryfind(rotateArray, 0, rotateArray.size() - 1);
}
int GetOfferQ6::binaryfind(vector<int> a, int low, int high) {
	if (low + 1 == high || low == high) {
		return a[high] < a[low] ? a[high] : a[low];
	}
	int mid = (low + high) / 2;
	if (a[mid] == a[low] && a[mid] == a[high]) {
		int find1 = binaryfind(a, low, mid);
		int find2 = binaryfind(a, mid + 1, high);
		return find1 < find2 ? find1 : find2;
	} else if (a[mid] >= a[low] && a[mid] > a[high]) {
		return binaryfind(a, mid, high);
	} else {
		return binaryfind(a, low, mid);
	}
}
void GetOfferQ6::test() {
	int a[] = { 3, 4, 5, 1, 2 };
	int length = sizeof(a) / sizeof(a[0]);
	vector<int> rotateArray(a, a + length);
	for (vector<int>::iterator item = rotateArray.begin();
			item != rotateArray.end(); item++) {
		cout << *item << "\t";
	}
	cout << endl;
	int min = minNumberInRotatrArray(rotateArray);
	cout << min << endl;
}
