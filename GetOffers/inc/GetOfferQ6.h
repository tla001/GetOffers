/*
 * GetOfferQ6.h
 *
 *  Created on: 2016��10��20��
 *      Author: tla001
 *      title:��ת�������С����
 *      ��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
 *����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
 *��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1��
 *NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
 */

#ifndef GETOFFERQ6_H_
#define GETOFFERQ6_H_

#include "Include.h"

class GetOfferQ6 {
public:
	GetOfferQ6();
	virtual ~GetOfferQ6();

	static int minNumberInRotatrArray(vector<int> rotateArray);
	static int binaryfind(vector<int> a, int low, int high);
	static void test();
};

#endif /* GETOFFERQ6_H_ */
