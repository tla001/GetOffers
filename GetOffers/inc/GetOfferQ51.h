/*
 * GetOfferQ51.h
 *
 *  Created on: 2016年11月11日
 *      Author: tla001
 *      title:构建乘积数组
 *      给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],
 *      其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法
 */

#ifndef GETOFFERQ51_H_
#define GETOFFERQ51_H_

#include "Include.h"

//B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]
//从左到右算 B[i]=A[0]*A[1]*...*A[i-1]
//从右到左算B[i]*=A[i+1]*...*A[n-1]
class GetOfferQ51 {
public:
	GetOfferQ51();
	virtual ~GetOfferQ51();
	vector<int> multiply(const vector<int>& A) {
		int n = A.size();
		vector<int> b(n);
		int ret = 1;
		for (int i = 0; i < n; ret *= A[i++]) {
			b[i] = ret;
		}
		ret = 1;
		for (int i = n - 1; i >= 0; ret *= A[i--]) {
			b[i] *= ret;
		}
		return b;
	}
};

#endif /* GETOFFERQ51_H_ */
