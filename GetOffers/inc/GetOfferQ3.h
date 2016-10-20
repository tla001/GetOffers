/*
 * GetOfferQ3.h
 *
 *  Created on: 2016年10月17日
 *      Author: tla001
 *      title 从尾到头打印链表
 *      输入一个链表，从尾到头打印链表每个节点的值
 *      输出为需要打印的“新链表”的表头
 */

#ifndef GETOFFERQ3_H_
#define GETOFFERQ3_H_

#include "Include.h"

class GetOfferQ3 {
public:
	GetOfferQ3();
	virtual ~GetOfferQ3();
	struct ListNode {
		int val;
		struct ListNode *next;
	};
	static void create(struct ListNode *&head);
	static void insert(struct ListNode *head, int val);
	static void print(struct ListNode *head);
	static void print(vector<int> vec);
	static vector<int> printListFromTailToHead(struct ListNode* head);
	static void test();
//private:
//	struct ListNode {
//		int val;
//		struct ListNode *next;
//	};
};

#endif /* GETOFFERQ3_H_ */
