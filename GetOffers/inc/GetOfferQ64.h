/*
 * GetOfferQ64.h
 *
 *  Created on: 2016年11月23日
 *      Author: tla001
 *      title:滑动窗口的最大值
 */

#ifndef GETOFFERQ64_H_
#define GETOFFERQ64_H_
#include "Include.h"
class GetOfferQ64 {
public:
	GetOfferQ64();
	virtual ~GetOfferQ64();
	static int getMax(const vector<int>&num, int start, int end) {
		int max = num[start];
		for (int i = start + 1; i < end; i++) {
			if (num[i] > max)
				max = num[i];
		}
		return max;
	}
	static vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
//		vector<int> res;
//		deque<int> s;
//		for (unsigned int i = 0; i < num.size(); ++i) {
//			while (s.size() && num[s.back()] <= num[i]) //从后面依次弹出队列中比当前num值小的元素，同时也能保证队列首元素为当前窗口最大值下标
//				s.pop_back();
//			while (s.size() && i - s.front() + 1 > size) //当当前窗口移出队首元素所在的位置，即队首元素坐标对应的num不在窗口中，需要弹出
//				s.pop_front();
//			s.push_back(i); //把每次滑动的num下标加入队列
//			if (size && i + 1 >= size) //当滑动窗口首地址i大于等于size时才开始写入窗口最大值
//				res.push_back(num[s.front()]);
//		}
//		return res;
		vector<int> res;
		if (size < 1 || num.size() < size || num.size() < 1)
			return res;
		for (int i = 0; i < num.size() - size + 1; i++) {
			res.push_back(getMax(num, i, i + size));
		}
		return res;
	}
	static void test() {
		int a[] = { 2, 3, 4, 2, 6, 2, 5, 1 };
		int size = sizeof(a) / sizeof(a[0]);
		vector<int> num(a, a + size);
		int k = 3;
		vector<int> res = maxInWindows(num, k);
		for (vector<int>::iterator ite = res.begin(); ite != res.end(); ite++) {
			cout << *ite << "\t";
		}
		cout << endl;
	}
};

#endif /* GETOFFERQ64_H_ */
