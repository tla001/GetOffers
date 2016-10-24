/*
 * GetOfferQ14.h
 *
 *  Created on: 2016年10月23日
 *      Author: tla001
 *      title:链表中倒数第k个结点
 *      输入一个链表，输出该链表中倒数第k个结点。
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
