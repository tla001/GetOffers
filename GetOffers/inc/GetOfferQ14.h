/*
 * GetOfferQ14.h
 *
 *  Created on: 2016��10��23��
 *      Author: tla001
 *      title:�����е�����k�����
 *      ����һ����������������е�����k����㡣
 */

#ifndef GETOFFERQ14_H_
#define GETOFFERQ14_H_

#include "Include.h"

class GetOfferQ14 {
public:
	GetOfferQ14();
	virtual ~GetOfferQ14();

	struct ListNode {
		int val;
		struct ListNode *next;
	};

	static ListNode *FindKthToTail(ListNode *pListHead, unsigned int k);
	static void Insert(ListNode *&pListHead, int val);
	static void print(ListNode *pListNode);
	static void test();
};

#endif /* GGETOFFERQ14_H_ */
