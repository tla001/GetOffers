/*
 * GetOfferQ51.h
 *
 *  Created on: 2016��11��11��
 *      Author: tla001
 *      title:�����˻�����
 *      ����һ������A[0,1,...,n-1],�빹��һ������B[0,1,...,n-1],
 *      ����B�е�Ԫ��B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]������ʹ�ó���
 */

#ifndef GETOFFERQ51_H_
#define GETOFFERQ51_H_

#include "Include.h"

//B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]
//�������� B[i]=A[0]*A[1]*...*A[i-1]
//���ҵ�����B[i]*=A[i+1]*...*A[n-1]
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
