/*
 * GetOfferQ28.h
 *
 *  Created on: 2016��10��31��
 *      Author: tla001
 *      title:�����г��ִ�������һ�������
 *      ��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
 *      ��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
 *      ��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
 */

#ifndef GETOFFERQ28_H_
#define GETOFFERQ28_H_

#include "Include.h"

class GetOfferQ28 {
public:
	GetOfferQ28();
	virtual ~GetOfferQ28();
	static int MoreThanHalfNum_Solution(vector<int> numbers);
	static void test();
};

#endif /* GETOFFERQ28_H_ */
