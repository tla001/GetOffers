/*
 * GetOfferQ32.h
 *
 *  Created on: 2016��11��2��
 *      Author: tla001
 *      title :�������ų���С����
 *      ����һ�����������飬����������������ƴ�������ų�һ������
 *      ��ӡ��ƴ�ӳ���������������С��һ����������������{3��32��321}��
 *      ���ӡ���������������ųɵ���С����Ϊ321323
 */

#ifndef GETOFFERQ32_H_
#define GETOFFERQ32_H_

#include "Include.h"

class GetOfferQ32 {
public:
	GetOfferQ32();
	virtual ~GetOfferQ32();
	static bool compare(const string &str1, const string &str2);
	static string PrintMinNumber(vector<int> numbers);
	static void test();
};

#endif /* GETOFFERQ32_H_ */
