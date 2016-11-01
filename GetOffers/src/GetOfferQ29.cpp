/*
 * GetOfferQ29.cpp
 *
 *  Created on: 2016年11月1日
 *      Author: tla001
 */

#include "GetOfferQ29.h"

GetOfferQ29::GetOfferQ29() {
	// TODO Auto-generated constructor stub

}

GetOfferQ29::~GetOfferQ29() {
	// TODO Auto-generated destructor stub
}
void GetOfferQ29::quicksort(vector<int>&a, int k, int left, int right) {
	int i, j;
	int pivot;
	pivot = a[left];
	i = left;
	j = right + 1;
	for (;;) {
		while (a[++i] < pivot) {
		}
		while (a[--j] > pivot) {
		}
		if (i < j)
			swap(a[i], a[j]);
		else
			break;
	}
	//重置枢纽元
	swap(a[j], a[left]);
	if (k <= j - left)
		quicksort(a, k, left, j - 1);
	else if (k > j - left + 1)
		quicksort(a, k - (j - left + 1), j + 1, right);
}
vector<int> GetOfferQ29::GetLeastNumbers_Solution(vector<int> input, int k) {
	vector<int> res;
	if (k > input.size() || k < 1)
		return res;
	quicksort(input, k, 0, input.size() - 1);
	res.assign(input.begin(), input.begin() + k);
	return res;
}
void GetOfferQ29::print(vector<int> a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}
void GetOfferQ29::test() {
	int a[] = { 2, 7, 3, 0, 4, 5 };
	int size = sizeof(a) / sizeof(a[0]);
	int k = 5;
	vector<int> input(a, a + size);
	print(input);
	vector<int> res = GetLeastNumbers_Solution(input, k);
	print(res);
}
