/*
 * GetOfferQ6.h
 *
 *  Created on: 2016年10月20日
 *      Author: tla001
 *      title:旋转数组的最小数字
 *      把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
 *输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
 *例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
 *NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
 */

#ifndef GETOFFERQ6_H_
#define GETOFFERQ6_H_

#include "Include.h"

class GetOfferQ6 {
public:
	GetOfferQ6();
	virtual ~GetOfferQ6();

	static int minNumberInRotatrArray(vector<int> rotateArray);
	static int binaryfind(vector<int> a, int low, int high);
	static void test();
};

#endif /* GETOFFERQ6_H_ */
