/*
 * GetOfferQ12.h
 *
 *  Created on: 2016��10��22��
 *      Author: tla001
 *      title:��ֵ�������η�
 *      ����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η�
 */

#ifndef GETOFFERQ12_H_
#define GETOFFERQ12_H_

#include "Include.h"

class GetOfferQ12 {
public:
	GetOfferQ12();
	virtual ~GetOfferQ12();

	static double Power(double base, int exponent);
	static void test();
};

#endif /* GETOFFERQ12_H_ */
