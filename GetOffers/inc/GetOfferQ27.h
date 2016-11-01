/*
 * GetOfferQ27.h
 *
 *  Created on: 2016年10月30日
 *      Author: tla001
 *      title:字符串的排列
 *      输入一个字符串,按字典序打印出该字符串中字符的所有排列。
 *      例如输入字符串abc,则打印出由字符a,b,c所能排列出来
 *      的所有字符串abc,acb,bac,bca,cab和cba。 结果请按字母顺序输出。
 */

#ifndef GETOFFERQ27_H_
#define GETOFFERQ27_H_

#include "Include.h"

class GetOfferQ27 {
public:
	GetOfferQ27();
	virtual ~GetOfferQ27();
	static void cal(vector<string>& v, int k, string str);
	static vector<string> Permutation(string str);
	static void test();
};

#endif /* GETOFFERQ27_H_ */
