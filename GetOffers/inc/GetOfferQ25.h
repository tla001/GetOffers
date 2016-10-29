/*
 * GetOfferQ25.h
 *
 *  Created on: 2016��10��29��
 *      Author: tla001
 *      title:��������ĸ���
 *      ����һ����������ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬
 *      һ��ָ����һ���ڵ㣬��һ������ָ��ָ������һ���ڵ㣩��
 *      ���ؽ��Ϊ���ƺ��������head��
 *      ��ע�⣬���������벻Ҫ���ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�
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
