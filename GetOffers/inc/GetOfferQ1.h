/*
 * GetOfferQ1.h
 *
 *  Created on: 2016��10��16��
 *      Author: tla001
 *      title:��ά�����еĲ���
 *      ��Ŀ����
 *		��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������
 *		ÿһ�ж����մ��ϵ��µ�����˳�����������һ��������
 *		����������һ����ά�����һ���������ж��������Ƿ��и�������
 */

#ifndef GETOFFERQ1_H_
#define GETOFFERQ1_H_

#include "Include.h"

class GetOfferQ1 {
public:
	GetOfferQ1();
	virtual ~GetOfferQ1();
	static bool Find(vector<vector<int> > array, int target);
	static void Create(vector<vector<int> > *array);
	static void Print(vector<vector<int> > array);
	static void test();
};

#endif /* GETOFFERQ1_H_ */
