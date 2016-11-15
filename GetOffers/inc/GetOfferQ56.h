/*
 * GetOfferQ56.h
 *
 *  Created on: 2016年11月15日
 *      Author: tla001
 *      title:删除链表中重复的结点
 *      在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，
 *      重复的结点不保留，返回链表头指针。
 *      例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
 */

#ifndef GETOFFERQ56_H_
#define GETOFFERQ56_H_

#include "Include.h"

class GetOfferQ56 {
public:
	GetOfferQ56();
	virtual ~GetOfferQ56();
	struct ListNode {
		int val;
		struct ListNode *next;
		ListNode(int x) :
				val(x), next(NULL) {
		}
	};
	ListNode* deleteDuplication(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL)
			return pHead;
		ListNode *newHead = new ListNode(-1);
		newHead->next = pHead;
		ListNode *p1 = pHead;
		ListNode *pre = newHead;
		ListNode *p2 = pHead->next;
		while (p2 != NULL) {
			if (p1->val != p2->val) {
				pre = p1;
				p1 = p1->next;
				p2 = p2->next;
			} else {
				while (p2 != NULL && p1->val == p2->val) {
					p2 = p2->next;
				}
//				ListNode *tmp;
//				while (p1 != p2) {
//					tmp = p1->next;
//					free(p1);
//					p1 = tmp;
//				}
				pre->next = p2;
				p1 = pre;
			}
		}
		return newHead->next;
	}
};

#endif /* GETOFFERQ56_H_ */
