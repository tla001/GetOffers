/*
 * GetOfferQ27.h
 *
 *  Created on: 2016��10��30��
 *      Author: tla001
 *      title:�ַ���������
 *      ����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С�
 *      ���������ַ���abc,���ӡ�����ַ�a,b,c�������г���
 *      �������ַ���abc,acb,bac,bca,cab��cba�� ����밴��ĸ˳�������
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
