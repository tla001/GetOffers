/*
 * GetOfferQ54.h
 *
 *  Created on: 2016年11月15日
 *      Author: tla001
 *      title:字符流中第一个不重复的字符
 *      请实现一个函数用来找出字符流中第一个只出现一次的字符。
 *      例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。
 *      当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
 */

#ifndef GETOFFERQ54_H_
#define GETOFFERQ54_H_
#include "Include.h"
class GetOfferQ54 {
public:
	GetOfferQ54();
	virtual ~GetOfferQ54();
	//Insert one char from stringstream
	void Insert(char ch) {
		v.push_back(ch);
		if (m.find(ch) == m.end()) {
			m.insert(make_pair(ch, 1));
		} else
			m[ch]++;
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce() {
		for (vector<char>::iterator ite = v.begin(); ite != v.end(); ite++) {
			if (m[*ite] == 1)
				return *ite;
		}
		return '#';
	}
	map<char, int> m;
	vector<char> v;

};

#endif /* GETOFFERQ54_H_ */
