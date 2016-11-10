/*
 * GetOfferQ48.h
 *
 *  Created on: 2016��11��9��
 *      Author: tla001
 *      title:���üӼ��˳����ӷ�
 *      дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ��+��-��*��/�����������
 */

#ifndef GETOFFERQ48_H_
#define GETOFFERQ48_H_

#include "Include.h"

class GetOfferQ48 {
public:
	GetOfferQ48();
	virtual ~GetOfferQ48();
	int Add(int num1, int num2) {
		if (num2 == 0)
			return num1;
		int sum = num1 ^ num2;
		int carry = (num1 & num2) << 1;
		return Add(sum, carry);
	}
};

#endif /* GETOFFERQ48_H_ */
