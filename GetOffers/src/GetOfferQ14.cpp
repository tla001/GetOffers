/*
 * GetOfferQ14.cpp
 *
 *  Created on: 2016Äê10ÔÂ23ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ14.h"

GetOfferQ14::GetOfferQ14() {
	// TODO Auto-generated constructor stub

}

GetOfferQ14::~GetOfferQ14() {
	// TODO Auto-generated destructor stub
}

GetOfferQ14::ListNode *GetOfferQ14::FindKthToTail(ListNode *pListNode,
		unsigned int k) {
//	int num = 0;
//	ListNode *root = pListNode;
//	while (root != NULL) {
//		num++;
//		root = root->next;
//	}
//	//cout << "num= " << num << endl;
//	root = pListNode;
//	for (int i = 0; (i < num - k) && root != NULL; i++) {
//		root = root->next;
//	}
//	ListNode *node = root;
//	return node;
	if (pListNode == NULL || k <= 0) {
		return NULL;
	}
	ListNode *pTail = pListNode, *pHead = pListNode;
	for (int i = 0; i < k; i++) {
		if (pHead != NULL) {
			pHead = pHead->next;
		} else {
			return NULL;
		}
	}
	while (pHead != NULL) {
		pHead = pHead->next;
		pTail = pTail->next;
	}
	return pTail;
}
void GetOfferQ14::Insert(ListNode *&pListHead, int val) {
	if (pListHead == NULL) {
		pListHead = (ListNode *) malloc(sizeof(ListNode));
		pListHead->val = val;
		pListHead->next = NULL;
	} else {
		ListNode *root = pListHead;
		ListNode *tmp = (ListNode*) malloc(sizeof(ListNode));
		tmp->next = NULL;
		tmp->val = val;
		while (root->next != NULL) {
			root = root->next;
		}
		root->next = tmp;
	}
}
void GetOfferQ14::print(ListNode *pListNode) {
	ListNode *root = pListNode;
	while (root != NULL) {
		cout << root->val << "\t";
		root = root->next;
	}
	cout << endl;
}
void GetOfferQ14::test() {
	ListNode *pListNode = NULL;
	int n = 8;
	for (int i = 0; i < n; i++) {
		Insert(pListNode, i);
	}
	print(pListNode);
	cout << "input k= " << endl;
	int k = 0;
//	ListNode *node = FindKthToTail(pListNode, 1);
//	print(node);
	while (cin >> k) {
		ListNode *node = FindKthToTail(pListNode, k);
		print(node);
		cout << "input k= " << endl;
	}
}
