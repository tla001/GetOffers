/*
 * GetOfferQ35.cpp
 *
 *  Created on: 2016年11月3日
 *      Author: tla001
 */

#include "GetOfferQ35.h"

GetOfferQ35::GetOfferQ35() {
	// TODO Auto-generated constructor stub

}

GetOfferQ35::~GetOfferQ35() {
	// TODO Auto-generated destructor stub
}

int GetOfferQ35::InversePairs(vector<int> data) {
	int length = data.size();
	if (length == 0)
		return 0;
	return mergesort(data, 0, length - 1) % 1000000007;
}
int GetOfferQ35::mergesort(vector<int>&data, int start, int end) {
	if (start >= end) {
		return 0;
	}
	int mid = (start + end) / 2;
	int lcount = mergesort(data, start, mid) % 1000000007;
	int rcount = mergesort(data, mid + 1, end) % 1000000007;

	vector<int> copy(data);
	int head = mid;
	int tail = end;
	int count = 0;
	int index = end;
	while (head >= start && tail >= mid + 1) {
		if (data[head] > data[tail]) {
			copy[index--] = data[head--];
			count += tail - mid;
			if (count >= 1000000007)
				count %= 1000000007;
		} else {
			copy[index--] = data[tail--];
		}
	}
	while (head >= start) {
		copy[index--] = data[head--];
	}
	while (tail >= mid + 1) {
		copy[index--] = data[tail--];
	}
	for (int i = start; i <= end; i++) {
		data[i] = copy[i];
	}
	return (lcount + rcount + count) % 1000000007;
}
void GetOfferQ35::test() {
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size = sizeof(a) / sizeof(a[0]);
	vector<int> data(a, a + size);
	cout << InversePairs(data) << endl;
}
//int InversePairs(vector<int> data) {
//	if (data.size() <= 1)
//		return 0; //如果少于等于1个元素，直接返回0
//	int* copy = new int[data.size()];
//	//初始化该数组，该数组作为存放临时排序的结果，最后要将排序的结果复制到原数组中
//	for (unsigned int i = 0; i < data.size(); i++)
//		copy[i] = 0;
//	//调用递归函数求解结果
//	int count = InversePairCore(data, copy, 0, data.size() - 1);
//	delete[] copy; //删除临时数组
//	return count;
//}
////程序的主体函数
//int InversePairCore(vector<int>& data, int*& copy, int start, int end) {
//	if (start == end) {
//		copy[start] = data[start];
//		return 0;
//	}
//	//将数组拆分成两部分
//	int length = (end - start) / 2; //这里使用的下标法，下面要用来计算逆序个数；也可以直接使用mid=（start+end）/2
//	//分别计算左边部分和右边部分
//	int left = InversePairCore(data, copy, start, start + length) % 1000000007;
//	int right = InversePairCore(data, copy, start + length + 1, end)
//			% 1000000007;
//	//进行逆序计算
//	int i = start + length;        //前一个数组的最后一个下标
//	int j = end;        //后一个数组的下标
//	int index = end;        //辅助数组下标，从最后一个算起
//	int count = 0;
//	while (i >= start && j >= start + length + 1) {
//		if (data[i] > data[j]) {
//			copy[index--] = data[i--];
//			//统计长度
//			count += j - start - length;
//			if (count >= 1000000007)        //数值过大求余
//				count %= 1000000007;
//		} else {
//			copy[index--] = data[j--];
//		}
//	}
//	for (; i >= start; --i) {
//		copy[index--] = data[i];
//	}
//	for (; j >= start + length + 1; --j) {
//		copy[index--] = data[j];
//	}
//	//排序
//	for (int i = start; i <= end; i++) {
//		data[i] = copy[i];
//	}
//	//返回最终的结果
//	return (count + left + right) % 1000000007;
//}
