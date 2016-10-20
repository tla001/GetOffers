/*
 * GetOfferQ5.cpp
 *
 *  Created on: 2016年10月19日
 *      Author: tla001
 *      title:用两个栈实现队列
 *      用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
 */

#include "GetOfferQ5.h"

GetOfferQ5::GetOfferQ5() {
	// TODO Auto-generated constructor stub

}

GetOfferQ5::~GetOfferQ5() {
	// TODO Auto-generated destructor stub
}

void GetOfferQ5::push(int node) {
	stack1.push(node);
}
int GetOfferQ5::pop() {
	if (stack1.empty())
		return NULL;
	int node;
	int ret;
	while (!stack1.empty()) {
		node = stack1.top();
		stack2.push(node);
		stack1.pop();
	}
	ret = stack2.top();
	stack2.pop();
	while (!stack2.empty()) {
		node = stack2.top();
		stack1.push(node);
		stack2.pop();
	}
	return ret;
}
void GetOfferQ5Test() {
	GetOfferQ5 *a = new GetOfferQ5();
	cout << a->pop() << endl;
	for (int i = 1; i < 10; i++) {
		a->push(i);
	}
	for (int i = 1; i < 10; i++) {
		cout << a->pop() << "\t";
	}
	cout << endl << a->pop() << endl;
}
