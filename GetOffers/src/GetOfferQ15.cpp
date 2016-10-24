/*
 * GetOfferQ15.cpp
 *
 *  Created on: 2016Äê10ÔÂ23ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ15.h"

GetOfferQ15::GetOfferQ15() {
	// TODO Auto-generated constructor stub

}

GetOfferQ15::~GetOfferQ15() {
	// TODO Auto-generated destructor stub
}
GetOfferQ15::ListNode *GetOfferQ15::ReverseList(ListNode *pHead) {
	if (pHead == NULL)
		return NULL;
	ListNode *root = pHead;
	ListNode *newroot = NULL;
	ListNode *tmpn = NULL;
	ListNode *tmpo = NULL;
	//newroot->next = NULL;
	while (root != NULL) {
		if (root->next != NULL)
			tmpo = root->next;
		else
			tmpo = NULL;
		tmpn = newroot;
		newroot = root;
		newroot->next = tmpn;
		root = tmpo;
		//tmpo = root;
	}
	return newroot;
}
void GetOfferQ15::Insert(ListNode *&pHead, int val) {
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
void GetOfferQ15::print(ListNode *pListNode) {
	ListNode *root = pListNode;
	while (root != NULL) {
		cout << root->val << "\t";
		root = root->next;
	}
	cout << endl;
}
void GetOfferQ15::test() {
	ListNode *pListNode = NULL;
	int n = 8;
	for (int i = 0; i < n; i++) {
		Insert(pListNode, i);
	}
	print(pListNode);
	ListNode *node = ReverseList(pListNode);
	print(node);
}
