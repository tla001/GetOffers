/*
 * GetOfferQ35.h
 *
 *  Created on: 2016��11��3��
 *      Author: tla001
 *      title:�����е������
 *      �������е��������֣����ǰ��һ�����ִ��ں�������֣�
 *      ���������������һ������ԡ�����һ������,
 *      �����������е�����Ե�����P������P��1000000007ȡģ�Ľ�������
 *       �����P%1000000007
 */

#ifndef GETOFFERQ35_H_
#define GETOFFERQ35_H_

#include "Include.h"

class GetOfferQ35 {
public:
	GetOfferQ35();
	virtual ~GetOfferQ35();
	static int InversePairs(vector<int> data);
	static int mergesort(vector<int>&data, int start, int end);
	static void test();
};

#endif /* GETOFFERQ35_H_ */
