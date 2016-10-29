/*
 * GetOfferQ25.cpp
 *
 *  Created on: 2016年10月29日
 *      Author: tla001
 */

#include "GetOfferQ25.h"

GetOfferQ25::GetOfferQ25() {
	// TODO Auto-generated constructor stub

}

GetOfferQ25::~GetOfferQ25() {
	// TODO Auto-generated destructor stub
}
GetOfferQ25::RandomListNode* GetOfferQ25::Clone(RandomListNode* pHead) {
	RandomListNode* list = NULL;

	if (pHead == NULL)
		return list;
	RandomListNode*tem = pHead;
	RandomListNode*node = NULL;
//	list = (RandomListNode*) malloc(sizeof(RandomListNode));
//	RandomListNode* node1 = list, *node2 = NULL;
//	while (node) {
//		if (node1 == list) {
//			node1->label = node->label;
//			node1->next = NULL;
//			node1->random = NULL;
//		} else {
//			node2 = (RandomListNode*) malloc(sizeof(RandomListNode));
//			node2->label = node->label;
//			node2->next = NULL;
//			node2->random = NULL;
//			node1->next = node2;
//			node1 = node2;
//		}
//		node = node->next;
//	}
	//先复制节点
	while (tem) {
		node = (RandomListNode*) malloc(sizeof(RandomListNode));
		node->label = tem->label;
		node->next = tem->next;
		node->random = NULL;
		tem->next = node;
		tem = node->next;
	}
	//设置复制节点的random
	tem = pHead;
	while (tem) {
		if (tem->random != NULL)
			tem->next->random = tem->random->next;
		tem = tem->next->next;
	}
	//刚复制结点和被复制结点拆开，还原被复制的链表，同时生成监制链表
	tem = pHead;
	list = tem->next;
	while (tem->next) {
		node = tem->next;
		tem->next = node->next;
		tem = node;
	}
	return list;
}
