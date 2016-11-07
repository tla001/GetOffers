/*
 * GetOfferQ32.cpp
 *
 *  Created on: 2016年11月2日
 *      Author: tla001
 */

#include "GetOfferQ32.h"

GetOfferQ32::GetOfferQ32() {
	// TODO Auto-generated constructor stub

}

GetOfferQ32::~GetOfferQ32() {
	// TODO Auto-generated destructor stub
}

//compare必须为静态
bool GetOfferQ32::compare(const string &str1, const string &str2) {
	string s1 = str1 + str2;
	string s2 = str2 + str1;
	return s1 < s2;
}
string GetOfferQ32::PrintMinNumber(vector<int> numbers) {
	string res;
	if (numbers.size() < 1)
		return res;
	vector < string > strnum;
	stringstream ss;
	string s;
	for (int i = 0; i < numbers.size(); i++) {
		//s.clear();
		ss.clear();
		ss << numbers[i];
		ss >> s;
		strnum.push_back(s);
		cout << s << "\t";
	}
	cout << endl;
	sort(strnum.begin(), strnum.end(), compare);
	for (int i = 0; i < strnum.size(); i++) {
		res.append(strnum[i]);
	}
	return res;
}
void GetOfferQ32::test() {
	int a[] = { 3, 32, 321 };
	int size = sizeof(a) / sizeof(a[0]);
	vector<int> numbers(a, a + size);
	cout << PrintMinNumber(numbers) << endl;
}
