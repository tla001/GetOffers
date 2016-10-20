/*
 * GetOfferQ5.h
 *
 *  Created on: 2016年10月19日
 *      Author: tla001
 *      title:用两个栈实现队列
 *      用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
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
