/*
 * GetOfferQ2.h
 *
 *  Created on: 2016年10月17日
 *      Author: tla001
 *      title:替换空格
 *      请实现一个函数，将一个字符串中的空格替换成“%20”。
 *      例如，当字符串为We Are Happy.则经过替换之后的
 *      字符串为We%20Are%20Happy。
 */

#ifndef GETOFFERQ2_H_
#define GETOFFERQ2_H_
#include "Include.h"
class GetOfferQ2 {
public:
	GetOfferQ2();
	virtual ~GetOfferQ2();
	static void replaceSpace(char *str, int length);
	static void replaceSpace2(char *str, int length);
	static void test();
};

#endif /* GETOFFERQ2_H_ */
