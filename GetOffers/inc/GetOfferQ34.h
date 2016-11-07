/*
 * GetOfferQ34.h
 *
 *  Created on: 2016年11月3日
 *      Author: tla001
 *      title:第一个只出现一次的字符
 *      在一个字符串(1<=字符串长度<=10000，全部由大小写字母组成)
 *      中找到第一个只出现一次的字符,并返回它的位置
 */

#ifndef GETOFFERQ34_H_
#define GETOFFERQ34_H_

#include "Include.h"

class GetOfferQ34 {
public:
	GetOfferQ34();
	virtual ~GetOfferQ34();
	static int FirstNotRepeatingChar(string str);
	static void test();
};

#endif /* GETOFFERQ34_H_ */
