/*
 * GetOfferQ21.cpp
 *
 *  Created on: 2016Äê10ÔÂ27ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ21.h"

GetOfferQ21::GetOfferQ21() {
	// TODO Auto-generated constructor stub

}

GetOfferQ21::~GetOfferQ21() {
	// TODO Auto-generated destructor stub
}
bool GetOfferQ21::IsPopOrder(vector<int> pushV, vector<int> popV) {
	if (pushV.size() == 0)
		return false;
	vector<int> stack;
	for (int i = 0, j = 0; i < pushV.size();) {
		stack.push_back(pushV[i++]);
		while (j < popV.size() && stack.back() == popV[j]) {
			stack.pop_back();
			j++;
		}
	}
	return stack.empty();
}
void GetOfferQ21::test() {
	int a1[] = { 1, 2, 3, 4, 5 };
	int a2[] = { 4, 5, 3, 2, 1 };
	int length = sizeof(a1) / sizeof(a1[0]);
	vector<int> pushV(a1, a1 + length);
	vector<int> popV(a2, a2 + length);
	cout << IsPopOrder(pushV, popV);
}
