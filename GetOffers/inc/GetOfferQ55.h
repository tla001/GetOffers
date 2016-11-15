/*
 * GetOfferQ55.h
 *
 *  Created on: 2016��11��15��
 *      Author: tla001
 *      title:�����л�����ڽ��
 *
 */

#ifndef GETOFFERQ55_H_
#define GETOFFERQ55_H_

#include "Include.h"

class GetOfferQ55 {
public:
	GetOfferQ55();
	virtual ~GetOfferQ55();
	/*
	 * �ж�һ�������Ƿ���ڻ���һ���򵥵ķ���������ʹ��һ����ָ�롢��һ����ָ�룬
	 * ��ָ��ÿ������������ָ��ÿ����һ����������л�����������Ȼ�������ġ�
	 * ������ѵ�����Ҫ�ҳ�������㡣��ʵҲ���ѣ����ж��Ƿ��л����ƣ�
	 * �����������ֱ�Ϊ1��2��ָ���������ֱ��������������ʱ��ָ���߹��ĳ��Ⱦ��ǻ��ĳ��ȡ�
	 * ���������������ָ�������趨Ϊ��ʼ�㣬������ָ���Բ���1����һ��������������ǻ�����ʼ�㡣
	 ֤��Ҳ�ܼ򵥣�֤�����£�

	 ����ע�⵽��һ������ʱ

	 ��ָ���߹���·��S1 = �ǻ����ֳ��� + ��A��

	 ��ָ���߹���·��S2 = �ǻ����ֳ��� + n * ���� + ��A��

	 S1 * 2 = S2���ɵ� �ǻ����ֳ��� = n * ���� - ��A��

	 ��ָ��A�ص���ʼ����߹�һ���ǻ����ֳ��ȣ�ָ��B�߹�����ȵĳ��ȣ�Ҳ����n * ���� - ��A����
	 ���ûص����Ŀ�ͷ��
	 */
	struct ListNode {
		int val;
		struct ListNode *next;
		ListNode(int x) :
				val(x), next(NULL) {
		}
	};
	ListNode* EntryNodeOfLoop(ListNode* pHead) {
		ListNode *n1 = pHead;
		ListNode *n2 = pHead;
		while (n2->next != NULL) {
			n1 = n1->next;
			n2 = n2->next->next;
			if (n1 == n2)
				break;
		}
		if (n2->next == NULL)
			return NULL;
		n1 = pHead;
		while (n1 != n2) {
			n1 = n1->next;
			n2 = n2->next;
		}
		return n2;
	}
};

#endif /* GETOFFERQ55_H_ */
