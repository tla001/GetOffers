/*
 * GetOfferQ23.h
 *
 *  Created on: 2016��10��27��
 *      Author: tla001
 *      title:�����������ĺ����������
 *      ����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
 *      ����������Yes,�������No���������������������������ֶ�������ͬ��
 */

#ifndef GETOFFERQ23_H_
#define GETOFFERQ23_H_

#include "Include.h"

class GetOfferQ23 {
public:
	GetOfferQ23();
	virtual ~GetOfferQ23();
	static bool judge(vector<int> sequence, int start, int end) {
		if (start >= end)
			return true;
		int i = 0;
		for (i = end - 1; i >= start; i--) {
			if (sequence[i] < sequence[end])
				break;
		}
		for (int j = i - 1; j >= start; j--)
			if (sequence[j] > sequence[end])
				return false;
		return judge(sequence, start, i - 1) && judge(sequence, i, end - 1);
	}
	static bool VerifySquenceOfBST(vector<int> sequence) {
		if (sequence.size() == 0)
			return false;
		return judge(sequence, 0, sequence.size() - 1);
	}
	static void test();
}
;

#endif /* GETOFFERQ23_H_ */
