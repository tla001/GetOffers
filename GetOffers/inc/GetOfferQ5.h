/*
 * GetOfferQ5.h
 *
 *  Created on: 2016��10��19��
 *      Author: tla001
 *      title:������ջʵ�ֶ���
 *      ������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������ �����е�Ԫ��Ϊint���͡�
 */

#ifndef GETOFFERQ5_H_
#define GETOFFERQ5_H_

#include "Include.h"

class GetOfferQ5 {
public:
	GetOfferQ5();
	virtual ~GetOfferQ5();
	void push(int node);
	int pop();

private:
	stack<int> stack1;
	stack<int> stack2;
};
void GetOfferQ5Test();
#endif /* GETOFFERQ5_H_ */
