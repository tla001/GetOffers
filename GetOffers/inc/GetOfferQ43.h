/*
 * GetOfferQ43.h
 *
 *  Created on: 2016��11��8��
 *      Author: tla001
 *      title:����ת�ַ���
 *      �����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵�����
 *      �������ַ���ģ�����ָ���������������һ���������ַ�����S��
 *      �������ѭ������Kλ���������������磬�ַ�����S=��abcXYZdef��,
 *      Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����
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
