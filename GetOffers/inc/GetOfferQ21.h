/*
 * GetOfferQ21.h
 *
 *  Created on: 2016年10月27日
 *      Author: tla001
 *      title:栈的压入、弹出序列
 *      输入两个整数序列，第一个序列表示栈的压入顺序，
 *      请判断第二个序列是否为该栈的弹出顺序。假设压入栈的所有数字均不相等。
 *      例如序列1,2,3,4,5是某栈的压入顺序，
 *      序列4，5,3,2,1是该压栈序列对应的一个弹出序列，
 *      但4,3,5,1,2就不可能是该压栈序列的弹出序列。
 *      （注意：这两个序列的长度是相等的）
 */

#ifndef GETOFFERQ21_H_
#define GETOFFERQ21_H_

#include "Include.h"

class GetOfferQ21 {
public:
	GetOfferQ21();
	virtual ~GetOfferQ21();
	static bool IsPopOrder(vector<int> pushV, vector<int> popV);
	static void test();
};

#endif /* GETOFFERQ21_H_ */
