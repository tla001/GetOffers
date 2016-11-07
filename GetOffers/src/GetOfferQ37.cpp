/*
 * GetOfferQ37.cpp
 *
 *  Created on: 2016Äê11ÔÂ7ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ37.h"

GetOfferQ37::GetOfferQ37() {
	// TODO Auto-generated constructor stub

}

GetOfferQ37::~GetOfferQ37() {
	// TODO Auto-generated destructor stub
}

int GetOfferQ37::GetNumberOfK(vector<int> data, int k) {
	int low = 0;
	int high = data.size() - 1;
	int mid;
	int num = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		if (data[mid] > k) {
			high = mid - 1;
		} else if (data[mid] < k) {
			low = mid + 1;
		} else {
			int temp = mid;
			while (data[temp--] == k) {
				num++;
			}
			while (data[++mid] == k) {
				num++;
			}
			return num;
		}
	}
	return num;
}
void GetOfferQ37::test() {
	int a[] = { 1, 2, 3, 3, 4, 4, 4, 5, 6, 6, 6, 6 };
	int size = sizeof(a) / sizeof(a[0]);

	vector<int> data(a, a + size);
	int k = 6;
	cout << GetNumberOfK(data, k) << endl;
}
