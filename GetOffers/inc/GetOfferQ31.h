/*
 * GetOfferQ31.h
 *
 *  Created on: 2016��11��1��
 *      Author: tla001
 *      title:������1���ֵĴ�������1��n������1���ֵĴ�����
 *      ���1~13��������1���ֵĴ���,�����100~1300��������1���ֵĴ�����
 *      Ϊ�����ر�����һ��1~13�а���1��������1��10��11��12��13��˹�����6��,
 *      ���Ƕ��ں�����������û���ˡ�ACMerϣ�����ǰ����,������������ձ黯,
 *      ���Ժܿ���������Ǹ�����������1���ֵĴ�����
 */

#ifndef GETOFFERQ31_H_
#define GETOFFERQ31_H_

#include "Include.h"

class GetOfferQ31 {
public:
	GetOfferQ31();
	virtual ~GetOfferQ31();
	static int NumberOf1Between1AndN_Solution(int n);
	static void test();
};

#endif /* GETOFFERQ31_H_ */
