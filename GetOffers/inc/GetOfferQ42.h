/*
 * GetOfferQ42.h
 *
 *  Created on: 2016��11��8��
 *      Author: tla001
 *      title:��ΪS����������
 *      ����һ����������������һ������S���������в�����������
 *      ʹ�����ǵĺ�������S������ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
 */

#ifndef GETOFFERQ42_H_
#define GETOFFERQ42_H_

#include "Include.h"

class GetOfferQ42 {
public:
	GetOfferQ42();
	virtual ~GetOfferQ42();
	static vector<int> FindNumbersWithSum(vector<int> array, int sum) {
//		map<int, vector<int>> m;
//		vector<int> res;
//		int begin = 0;
//		int end = array.size() - 1;
//		//���������м�ƽ�
//		while (begin < end) {
//			long curSum = array[begin] + array[end];
//			if (curSum == sum) {
//				//printf("%d %d\n", array[begin], array[end]);
//				res.push_back(array[begin]);
//				res.push_back(array[end]);
//				m.insert(make_pair(array[begin] * array[end], res));
//				break;
//			} else {
//				if (curSum < sum)
//					begin++;
//				else
//					end--;
//			}
//		}
//		return m.begin()->second;

		vector<int> res;
		int begin = 0;
		int end = array.size() - 1;
		//���������м�ƽ�
		while (begin < end) {
			long curSum = array[begin] + array[end];
			if (curSum == sum) {
				//printf("%d %d\n", array[begin], array[end]);
				res.push_back(array[begin]);
				res.push_back(array[end]);
				return res;
			} else {
				if (curSum < sum)
					begin++;
				else
					end--;
			}
		}
		return res;
	}
	static void test() {
		int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		int length = sizeof(a) / sizeof(a[0]);
		int sum = 9;
		vector<int> arr(a, a + length);
		vector<int> res = FindNumbersWithSum(arr, sum);
		for (int i = 0; i < res.size(); i++)
			cout << res[i] << "\t";
		cout << endl;
	}
};

#endif /* GETOFFERQ42_H_ */
