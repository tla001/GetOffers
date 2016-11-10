/*
 * GetOfferQ47.h
 *
 *  Created on: 2016Äê11ÔÂ9ÈÕ
 *      Author: tla001
 *      title:
 */

#ifndef GETOFFERQ47_H_
#define GETOFFERQ47_H_

#include "Include.h"

class GetOfferQ47 {
public:
	GetOfferQ47();
	virtual ~GetOfferQ47();
	static int Sum_Solution(int n) {
		return (int) (pow(n, 2) + n) >> 1;
	}
	static void test() {
		int n = 5;
		cout << Sum_Solution(n) << endl;
	}
};

#endif /* GETOFFERQ47_H_ */
