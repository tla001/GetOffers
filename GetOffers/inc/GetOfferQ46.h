/*
 * GetOfferQ46.h
 *
 *  Created on: 2016年11月9日
 *      Author: tla001
 *      title:约瑟夫问题
 *
 */

#ifndef GETOFFERQ46_H_
#define GETOFFERQ46_H_

class GetOfferQ46 {
public:
	GetOfferQ46();
	virtual ~GetOfferQ46();
	static int LastRemaining_Solution(unsigned int n, unsigned int m) {
		if (n == 0)
			return -1;
		if (n == 1)
			return 0;
		else
			return (LastRemaining_Solution(n - 1, m) + m) % n;
	}
};

#endif /* GETOFFERQ46_H_ */
