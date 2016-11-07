/*
 * GetOfferQ36.h
 *
 *  Created on: 2016年11月6日
 *      Author: tla001
 *      title:两个链表的第一个公共结点
 *      输入两个链表，找出它们的第一个公共结点。
 */

#ifndef GETOFFERQ36_H_
#define GETOFFERQ36_H_

#include "Include.h"

class GetOfferQ36 {
public:
	GetOfferQ36();
	virtual ~GetOfferQ36();
	struct ListNode {
		int val;
		struct ListNode *next;
		ListNode(int x) :
				val(x), next(NULL) {
		}
	};

	ListNode* FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
//		ListNode *p1 = pHead1;
//		ListNode *p2 = pHead2;
//		while (p1 != p2) {
//			p1 = (p1 == NULL ? pHead2 : p1->next);
//			p2 = (p2 == NULL ? pHead1 : p2->next);
//		}
//		return p1;
		map<ListNode*, int> m;
		ListNode *p = pHead1;
		while (p != NULL) {
			m[p] = 1;
			p = p->next;
		}
		p = pHead2;
		while (p != NULL) {
			if (m[p] == 1)
				return p;
			p = p->next;
		}
		return p;
	}
};

#endif /* GETOFFERQ36_H_ */
