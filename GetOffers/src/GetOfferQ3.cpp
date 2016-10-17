/*
 * GetOfferQ3.cpp
 *
 *  Created on: 2016年10月17日
 *      Author: tla001
 */

#include "GetOfferQ3.h"

GetOfferQ3::GetOfferQ3() {
	// TODO Auto-generated constructor stub

}

GetOfferQ3::~GetOfferQ3() {
	// TODO Auto-generated destructor stub
}
void GetOfferQ3::create(struct ListNode *&head) {
	head = (struct ListNode *) malloc(sizeof(struct ListNode));
	head->next = NULL;
}
void GetOfferQ3::insert(struct ListNode *head, int val) {
	struct ListNode *node = (struct ListNode *) malloc(sizeof(struct ListNode));
	node->next = NULL;
	node->val = val;
	struct ListNode *root = head;
	while (root->next != NULL) {
		root = root->next;
	}
	root->next = node;
}
void GetOfferQ3::print(struct ListNode *head) {
	struct ListNode *root = head->next;
	while (root != NULL) {
		cout << root->val << "\t";
		root = root->next;
	}
	cout << endl;
}
vector<int> GetOfferQ3::printListFromTailToHead(struct ListNode* head) {
	vector<int> *tem = new vector<int>();
	struct ListNode *root = head->next; //注意头结点是否存东西
	while (root != NULL) {
		//cout << root->val << "\t";
		tem->push_back(root->val);
		root = root->next;
	}

	vector<int>::reverse_iterator item;
	for (item = tem->rbegin(); item != tem->rend(); item++) {
		cout << *item << "\t";
	}
	cout << endl;
	//翻转
	reverse(tem->begin(), tem->end());
	return *tem;
}
void GetOfferQ3::print(vector<int> vec) {
	vector<int>::iterator item;
	for (item = vec.begin(); item != vec.end(); item++) {
		cout << *item << "\t";
	}
	cout << endl;
}
void GetOfferQ3::test() {
	GetOfferQ3::ListNode *head;
	GetOfferQ3::create(head);
	GetOfferQ3::insert(head, 10);
	GetOfferQ3::insert(head, 3);
	GetOfferQ3::insert(head, 8);
	GetOfferQ3::print(head);

	vector<int> tem;
	tem = GetOfferQ3::printListFromTailToHead(head);
	GetOfferQ3::print(tem);
}
