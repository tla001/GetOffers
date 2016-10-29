/*
 * GetOfferQ25.h
 *
 *  Created on: 2016年10月29日
 *      Author: tla001
 *      title:复杂链表的复制
 *      输入一个复杂链表（每个节点中有节点值，以及两个指针，
 *      一个指向下一个节点，另一个特殊指针指向任意一个节点），
 *      返回结果为复制后复杂链表的head。
 *      （注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
 */

#ifndef GETOFFERQ25_H_
#define GETOFFERQ25_H_

#include "Include.h"

class GetOfferQ25 {
public:
	GetOfferQ25();
	virtual ~GetOfferQ25();
	struct RandomListNode {
		int label;
		struct RandomListNode *next, *random;
		RandomListNode(int x) :
				label(x), next(NULL), random(NULL) {
		}
	};
	static RandomListNode* Clone(RandomListNode* pHead);
	static void test();
};

#endif /* GETOFFERQ25_H_ */
