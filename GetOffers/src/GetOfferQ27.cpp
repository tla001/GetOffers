/*
 * GetOfferQ27.cpp
 *
 *  Created on: 2016年10月30日
 *      Author: tla001
 */

#include "GetOfferQ27.h"

GetOfferQ27::GetOfferQ27() {
	// TODO Auto-generated constructor stub

}

GetOfferQ27::~GetOfferQ27() {
	// TODO Auto-generated destructor stub
}
void GetOfferQ27::cal(vector<string>& v, int k, string str) {
	if (k == str.size() - 1)
		v.push_back(str);
	set<char> s;  //记录出现过的字符
	sort(str.begin() + k, str.end());  //保证按字典序输出
	for (int i = k; i < str.size(); i++) {
		if (s.find(str[i]) == s.end()) {
			s.insert(str[i]);
			swap(str[i], str[k]);
			cal(v, k + 1, str);
			swap(str[i], str[k]);
		}
	}
}
vector<string> GetOfferQ27::Permutation(string str) {
	vector < string > v;
	cal(v, 0, str);
	return v;
}

void GetOfferQ27::test() {
	string str = "aa";
	vector < string > v = Permutation(str);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}
