/*
 * GetOfferQ28.cpp
 *
 *  Created on: 2016年10月31日
 *      Author: tla001
 */

#include "GetOfferQ28.h"

GetOfferQ28::GetOfferQ28() {
	// TODO Auto-generated constructor stub

}

GetOfferQ28::~GetOfferQ28() {
	// TODO Auto-generated destructor stub
}

int GetOfferQ28::MoreThanHalfNum_Solution(vector<int> numbers) {
	/*
	 * 查找最多，然后判断
	 */
//	int n = numbers.size();
//	if (n == 0)
//		return 0;
//	int num = numbers[0], count = 1;
//	for (int i = 1; i < n; i++) {
//		if (numbers[i] == num)
//			count++;
//		else
//			count--;
//		if (count == 0) {
//			num = numbers[i];
//			count = 1;
//		}
//	}
//	// Verifying
//	count = 0;
//	for (int i = 0; i < n; i++) {
//		if (numbers[i] == num)
//			count++;
//	}
//	if (count * 2 > n)
//		return num;
//	return 0;
	/*
	 * hash map
	 */
	map<int, int> arr;
	for (int i = 0; i < numbers.size(); i++) {
		if (arr.find(numbers[i]) == arr.end())
			arr.insert(make_pair(numbers[i], 1));
		else
			arr[numbers[i]]++;
		if (arr[numbers[i]] * 2 > numbers.size())
			return numbers[i];
	}
}
void GetOfferQ28::test() {
	int a[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	//int a[] = { 0, 0, 0, 0 };
	int size = sizeof(a) / sizeof(a[0]);
	vector<int> numbers(a, a + size);
	cout << MoreThanHalfNum_Solution(numbers) << endl;
}
