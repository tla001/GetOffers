/*
 * GetOfferQ21.h
 *
 *  Created on: 2016��10��27��
 *      Author: tla001
 *      title:ջ��ѹ�롢��������
 *      ���������������У���һ�����б�ʾջ��ѹ��˳��
 *      ���жϵڶ��������Ƿ�Ϊ��ջ�ĵ���˳�򡣼���ѹ��ջ���������־�����ȡ�
 *      ��������1,2,3,4,5��ĳջ��ѹ��˳��
 *      ����4��5,3,2,1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
 *      ��4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С�
 *      ��ע�⣺���������еĳ�������ȵģ�
 */

#ifndef GETOFFERQ21_H_
#define GETOFFERQ21_H_

#include "Include.h"

class GetOfferQ21 {
public:
	GetOfferQ21();
	virtual ~GetOfferQ21();
	static bool IsPopOrder(vector<int> pushV, vector<int> popV);
	static void test();
};

#endif /* GETOFFERQ21_H_ */
