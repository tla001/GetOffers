/*
 * GetOfferQ35.cpp
 *
 *  Created on: 2016��11��3��
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
//		return 0; //������ڵ���1��Ԫ�أ�ֱ�ӷ���0
//	int* copy = new int[data.size()];
//	//��ʼ�������飬��������Ϊ�����ʱ����Ľ�������Ҫ������Ľ�����Ƶ�ԭ������
//	for (unsigned int i = 0; i < data.size(); i++)
//		copy[i] = 0;
//	//���õݹ麯�������
//	int count = InversePairCore(data, copy, 0, data.size() - 1);
//	delete[] copy; //ɾ����ʱ����
//	return count;
//}
////��������庯��
//int InversePairCore(vector<int>& data, int*& copy, int start, int end) {
//	if (start == end) {
//		copy[start] = data[start];
//		return 0;
//	}
//	//�������ֳ�������
//	int length = (end - start) / 2; //����ʹ�õ��±귨������Ҫ�����������������Ҳ����ֱ��ʹ��mid=��start+end��/2
//	//�ֱ������߲��ֺ��ұ߲���
//	int left = InversePairCore(data, copy, start, start + length) % 1000000007;
//	int right = InversePairCore(data, copy, start + length + 1, end)
//			% 1000000007;
//	//�����������
//	int i = start + length;        //ǰһ����������һ���±�
//	int j = end;        //��һ��������±�
//	int index = end;        //���������±꣬�����һ������
//	int count = 0;
//	while (i >= start && j >= start + length + 1) {
//		if (data[i] > data[j]) {
//			copy[index--] = data[i--];
//			//ͳ�Ƴ���
//			count += j - start - length;
//			if (count >= 1000000007)        //��ֵ��������
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
//	//����
//	for (int i = start; i <= end; i++) {
//		data[i] = copy[i];
//	}
//	//�������յĽ��
//	return (count + left + right) % 1000000007;
//}
