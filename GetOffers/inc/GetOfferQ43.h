/*
 * GetOfferQ43.h
 *
 *  Created on: 2016年11月8日
 *      Author: tla001
 *      title:左旋转字符串
 *      汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，
 *      就是用字符串模拟这个指令的运算结果。对于一个给定的字符序列S，
 *      请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,
 *      要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！
 */

#ifndef GETOFFERQ43_H_
#define GETOFFERQ43_H_

#include "Include.h"

class GetOfferQ43 {
public:
	GetOfferQ43();
	virtual ~GetOfferQ43();
	static void StrReverseString(string &s, int from, int to) {
		while (from < to) {
			char t = s[from];
			s[from++] = s[to];
			s[to--] = t;
		}
	}
	static string LeftRotateString(string str, int n) {
		int m = str.size();
		if (m < n)
			return str;
		n %= m;
		StrReverseString(str, 0, n - 1);
		StrReverseString(str, n, m - 1);
		StrReverseString(str, 0, m - 1);
		return str;
	}
	static void test() {
		int n = 3;
		string str = "abcXYZdef";
		cout << LeftRotateString(str, n) << endl;
	}

};

#endif /* GETOFFERQ43_H_ */
