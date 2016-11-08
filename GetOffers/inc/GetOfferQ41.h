/*
 * GetOfferQ41.h
 *
 *  Created on: 2016年11月8日
 *      Author: tla001
 *      title:和为S的连续正数序列
 *
 */

#ifndef GETOFFERQ41_H_
#define GETOFFERQ41_H_

#include "Include.h"

class GetOfferQ41 {
public:
	GetOfferQ41();
	virtual ~GetOfferQ41();
	vector<vector<int> > FindContinuousSequence(int sum) {
		vector<vector<int>> res;
		int high = 2;
		int low = 1;
		while (high > low) {
			int cur = (high + low) * (high - low + 1) / 2;
			if (cur < sum)
				high++;
			else if (cur == sum) {
				vector<int> tem;
				for (int i = low; i <= high; i++)
					tem.push_back(i);
				res.push_back(tem);
				low++;
			} else {
				low++;
			}
		}
		return res;
	}
};

#endif /* GETOFFERQ41_H_ */
