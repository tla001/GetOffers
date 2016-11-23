/*
 * GetOfferQ63.h
 *
 *  Created on: 2016��11��23��
 *      Author: tla001
 *      title:�������е���λ��
 *      ��εõ�һ���������е���λ����������������ж�����������ֵ��
 *      ��ô��λ������������ֵ����֮��λ���м����ֵ��
 *      ������������ж���ż������ֵ����ô��λ������������ֵ����֮���м���������ƽ��ֵ��
 */

#ifndef GETOFFERQ63_H_
#define GETOFFERQ63_H_
#include "Include.h"
class GetOfferQ63 {
public:
	void Insert(int num) {
		data.push_back(num);
		std::sort(data.begin(), data.end());
	}

	double GetMedian() {
		unsigned int size = data.size();
		if (size & 1) {
			return data[size >> 1];
		} else {
			int left = data[(size >> 1) - 1];
			int right = data[size >> 1];
			return (static_cast<double>(left) + right) / 2;
		}
	}
private:
	vector<int> data;

//	 void Insert(int num)
//	    {
//	        count+=1;
//	        // Ԫ�ظ�����ż��ʱ,��С���ѶѶ�����󶥶�
//	        if(count%2==0){
//	            big_heap.push(num);
//	            small_heap.push(big_heap.top());
//	            big_heap.pop();
//	        }
//	        else{
//	            small_heap.push(num);
//	            big_heap.push(small_heap.top());
//	            small_heap.pop();
//	        }
//	    }
//
//	    double GetMedian()
//	    {
//	        if(count&0x1){
//	            return big_heap.top();
//	        }
//	        else{
//	            return double((small_heap.top()+big_heap.top())/2.0);
//	        }
//	    }
//	private:
//	    int count=0;
//	    priority_queue<int, vector<int>, less<int>> big_heap;        // ���һ���󶥶�
//	    priority_queue<int, vector<int>, greater<int>> small_heap;   // �ұ�һ��С����
//	    // �󶥶�����Ԫ�ؾ�С�ڵ���С���ѵ�����Ԫ��.
};

#endif /* GETOFFERQ63_H_ */
