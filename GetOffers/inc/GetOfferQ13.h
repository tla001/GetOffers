/*
 * GetOfferQ13.h
 *
 *  Created on: 2016��10��22��
 *      Author: tla001
 *      title:��������˳��ʹ����λ��ż��ǰ��
 *      ����һ���������飬ʵ��һ�����������������������ֵ�˳��
 *      ʹ�����е�����λ�������ǰ�벿�֣����е�ż��λ��λ������ĺ�벿�֣�
 *      ����֤������������ż����ż��֮������λ�ò���
 */

#ifndef GETOFFERQ13_H_
#define GETOFFERQ13_H_

#include "Include.h"

class GetOfferQ13 {
public:
	GetOfferQ13();
	virtual ~GetOfferQ13();

	static void reOrderArray(vector<int> &array);
	static void test();
};

#endif /* GETOFFERQ13_H_ */
