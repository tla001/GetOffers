/*
 * GetOfferQ30.h
 *
 *  Created on: 2016��11��1��
 *      Author: tla001
 *      title:���������������
 *      HZż������Щרҵ������������Щ�Ǽ����רҵ��ͬѧ��
 *      ��������鿪����,���ַ�����:�ڹ��ϵ�һάģʽʶ����,
 *      ������Ҫ��������������������,������ȫΪ������ʱ��,
 *      ����ܺý��������,��������а�������,�Ƿ�Ӧ�ð���ĳ������,
 *      �������Աߵ��������ֲ����أ�����:{6,-3,-2,7,-15,1,2,2},
 *      ����������������Ϊ8(�ӵ�0����ʼ,����3��Ϊֹ)����᲻�ᱻ������ס��
 */

#ifndef GETOFFERQ30_H_
#define GETOFFERQ30_H_

#include "Include.h"

class GetOfferQ30 {
public:
	GetOfferQ30();
	virtual ~GetOfferQ30();
	static int FindGreatestSumOfSubArray(vector<int> array);
	static void test();
};

#endif /* GETOFFERQ30_H_ */
