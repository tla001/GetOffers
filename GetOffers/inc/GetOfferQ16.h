/*
 * GetOfferQ16.h
 *
 *  Created on: 2016��10��25��
 *      Author: tla001
 *      title:�ϲ��������������
 *      ���������������������������������ϳɺ������
 *      ��Ȼ������Ҫ�ϳɺ���������㵥����������
 */

#ifndef GETOFFERQ16_H_
#define GETOFFERQ16_H_

#include "Include.h"

class GetOfferQ16 {
public:
	GetOfferQ16();
	virtual ~GetOfferQ16();
	struct ListNode {
		int val;
		struct ListNode *next;
	};
	static ListNode* Merge(ListNode* pHead1, ListNode* pHead2);
	static void Insert(ListNode *&pHead, int val);
	static void print(ListNode *pHead);
	static void test();
};

#endif /* GETOFFERQ16_H_ */
