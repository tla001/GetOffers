/*
 * GetOfferQ44.h
 *
 *  Created on: 2016年11月8日
 *      Author: tla001
 *      title:翻转单词顺序列
 *      牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，
 *      写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，
 *      有一天他向Fish借来翻看，但却读不懂它的意思。
 *      例如，“student. a am I”。后来才意识到，
 *      这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”。
 *      Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？
 */

#ifndef GETOFFERQ44_H_
#define GETOFFERQ44_H_

#include "Include.h"

class GetOfferQ44 {
public:
	GetOfferQ44();
	virtual ~GetOfferQ44();
	static string ReverseSentence(string str) {
		vector < string > res;
		string ret;
		int length = str.size();
		if (length < 1)
			return ret;
		int last = 0;
		int index = str.find_first_of(' ', last);
		cout << "index= " << index << endl;
		while (index > 0) {
			res.push_back(str.substr(last, index - last));
			last = index + 1;
			index = str.find_first_of(' ', last);
			cout << "index= " << index << endl;
		}
		if (length - last > 0) {
			res.push_back(str.substr(last, length - last));
		}
		int i;
		for (i = res.size() - 1; i >= 1; i--)
			ret += res[i] + " ";
		ret += res[i];
		return ret;
	}
	static void test() {
		string str = "";
		cout << ReverseSentence(str) << endl;
	}
};

#endif /* GETOFFERQ44_H_ */
