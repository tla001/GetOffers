/*
 * GetOfferQ16.h
 *
 *  Created on: 2016年10月25日
 *      Author: tla001
 *      title:合并两个排序的链表
 *      输入两个单调递增的链表，输出两个链表合成后的链表，
 *      当然我们需要合成后的链表满足单调不减规则。
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
