/*
 * GetOfferQ33.h
 *
 *  Created on: 2016年11月2日
 *      Author: tla001
 *      title:丑数
 *      把只包含因子2、3和5的数称作丑数（Ugly Number）。
 *      例如6、8都是丑数，但14不是，因为它包含因子7。
 *      习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。
 */

#ifndef GETOFFERQ33_H_
#define GETOFFERQ33_H_

#include "Include.h"

class GetOfferQ33 {
public:
	GetOfferQ33();
	virtual ~GetOfferQ33();
	static int GetUglyNumber_Solution(int index);
	static void test();
};

#endif /* GETOFFERQ33_H_ */
