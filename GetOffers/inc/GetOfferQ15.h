/*
 * GetOfferQ15.h
 *
 *  Created on: 2016Äê10ÔÂ23ÈÕ
 *      Author: tla001
 */

#ifndef GETOFFERQ15_H_
#define GETOFFERQ15_H_

#include "Include.h"

class GetOfferQ15 {
public:
	GetOfferQ15();
	virtual ~GetOfferQ15();
	struct ListNode {
		int val;
		struct ListNode *next;
	};
	static ListNode *ReverseList(ListNode *pHead);
	static void Insert(ListNode *&pHead, int val);
	static void print(ListNode *pHead);
	static void test();
};

#endif /* GETOFFERQ15_H_ */
