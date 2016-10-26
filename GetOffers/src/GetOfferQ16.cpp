/*
 * GetOfferQ16.cpp
 *
 *  Created on: 2016Äê10ÔÂ25ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ16.h"

GetOfferQ16::GetOfferQ16() {
	// TODO Auto-generated constructor stub

}

GetOfferQ16::~GetOfferQ16() {
	// TODO Auto-generated destructor stub
}
GetOfferQ16::ListNode* GetOfferQ16::Merge(ListNode* pHead1, ListNode* pHead2) {
	ListNode *head1 = pHead1;
	ListNode *head2 = pHead2;
	ListNode *tmp1 = NULL;
	ListNode *tmp2 = NULL;
	ListNode *list = (ListNode *) malloc(sizeof(ListNode));
	list->next = NULL;
	ListNode *head = list;

	while (head1 != NULL && head2 != NULL) {
		if (head1->val <= head2->val) {
			if (head1->next != NULL) {
				tmp1 = head1->next;
			} else {
				tmp1 = NULL;
			}
			head->next = head1;
			head = head->next;
			head1 = tmp1;
		} else {
			if (head2->next != NULL) {
				tmp2 = head2->next;
			} else {
				tmp2 = NULL;
			}
			head->next = head2;
			head = head->next;
			head2 = tmp2;
		}
	}
	while (head1 != NULL) {
		if (head1->next != NULL) {
			tmp1 = head1->next;
		} else {
			tmp1 = NULL;
		}
		head->next = head1;
		head = head->next;
		head1 = tmp1;
	}
	while (head2 != NULL) {
		if (head2->next != NULL) {
			tmp2 = head2->next;
		} else {
			tmp2 = NULL;
		}
		head->next = head2;
		head = head->next;
		head2 = tmp2;
	}
	return list->next;
}
void GetOfferQ16::Insert(ListNode *&pHead, int val) {
	if (pHead == NULL) {
		pHead = (ListNode *) malloc(sizeof(ListNode));
		pHead->val = val;
		pHead->next = NULL;
	} else {
		ListNode *root = pHead;
		ListNode *tmp = (ListNode*) malloc(sizeof(ListNode));
		tmp->next = NULL;
		tmp->val = val;
		while (root->next != NULL) {
			root = root->next;
		}
		root->next = tmp;
	}
}
void GetOfferQ16::print(ListNode *pListNode) {
	ListNode *root = pListNode;
	while (root != NULL) {
		cout << root->val << "\t";
		root = root->next;
	}
	cout << endl;
}
void GetOfferQ16::test() {
	ListNode *pHead1 = NULL;
	ListNode *pHead2 = NULL;
	int n = 8;
//	for (int i = 0; i < n; i++) {
//		Insert(pHead1, i);
//		Insert(pHead2, i + 1);
//	}
//	for (int i = n; i < n + n / 2; i++) {
//		//Insert(pHead1, i);
//		Insert(pHead2, i + 1);
//	}
	print(pHead1);
	print(pHead2);
	ListNode *list = Merge(pHead1, pHead2);
	print(list);
}
