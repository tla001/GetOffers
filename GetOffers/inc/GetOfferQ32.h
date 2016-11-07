/*
 * GetOfferQ32.h
 *
 *  Created on: 2016年11月2日
 *      Author: tla001
 *      title :把数组排成最小的数
 *      输入一个正整数数组，把数组里所有数字拼接起来排成一个数，
 *      打印能拼接出的所有数字中最小的一个。例如输入数组{3，32，321}，
 *      则打印出这三个数字能排成的最小数字为321323
 */

#ifndef GETOFFERQ32_H_
#define GETOFFERQ32_H_

#include "Include.h"

class GetOfferQ32 {
public:
	GetOfferQ32();
	virtual ~GetOfferQ32();
	static bool compare(const string &str1, const string &str2);
	static string PrintMinNumber(vector<int> numbers);
	static void test();
};

#endif /* GETOFFERQ32_H_ */
