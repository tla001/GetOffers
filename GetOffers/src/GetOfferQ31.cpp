/*
 * GetOfferQ31.cpp
 *
 *  Created on: 2016年11月1日
 *      Author: tla001
 */

#include "GetOfferQ31.h"

GetOfferQ31::GetOfferQ31() {
	// TODO Auto-generated constructor stub

}

GetOfferQ31::~GetOfferQ31() {
	// TODO Auto-generated destructor stub
}
int GetOfferQ31::NumberOf1Between1AndN_Solution(int n) {
//	int ones = 0;
//	for (long long m = 1; m <= n; m *= 10)
//		ones += (n / m + 8) / 10 * m + (n / m % 10 == 1) * (n % m + 1);
//	return ones;

//	int count = 0;
//	for (int i = 0; i <= n; i++) {
//		int temp = i;
//		//如果temp的任意位为1则count++
//		while (temp) {
//			if (temp % 10 == 1) {
//				count++;
//			}
//			temp /= 10;
//		}
//	}
//	return count;
	long long count = 0;
	int low = 0;
	int high = 0;
	int cur = 0;
	for (long long m = 1; m <= n; m *= 10) {
		low = n - (n / m) * m;
		cur = (n / m) % 10;
		high = n / (m * 10);
		if (cur == 0) {
			count += high * m;
		} else if (cur == 1) {
			count += high * m + low + 1;
		} else {
			count += (high + 1) * m;
		}
	}
	return count;
}
void GetOfferQ31::test() {
	int n = 0;
	while (cin >> n) {
		cout << "res= " << NumberOf1Between1AndN_Solution(n) << endl;
	}
}
