/*
 * GetOfferQ66.h
 *
 *  Created on: 2016��11��24��
 *      Author: tla001
 *      title:�������˶���Χ
 *      ������һ��m�к�n�еķ���һ�������˴�����0,0�ĸ��ӿ�ʼ�ƶ���
 *      ÿһ��ֻ�������ң��ϣ����ĸ������ƶ�һ��
 *      ���ǲ��ܽ�������������������λ֮�ʹ���k�ĸ��ӡ�
 *      ���磬��kΪ18ʱ���������ܹ����뷽��35,37������Ϊ3+5+3+7 = 18��
 *      ���ǣ������ܽ��뷽��35,38������Ϊ3+5+3+8 = 19�����ʸû������ܹ��ﵽ���ٸ����ӣ�
 */

#ifndef GETOFFERQ66_H_
#define GETOFFERQ66_H_

#include "Include.h"

class GetOfferQ66 {
public:
	GetOfferQ66();
	virtual ~GetOfferQ66();
	int movingCount(int threshold, int rows, int cols) {
		bool* flag = new bool[rows * cols];
		for (int i = 0; i < rows * cols; i++)
			flag[i] = false;
		int count = moving(threshold, rows, cols, 0, 0, flag); //�ӣ�0,0�����꿪ʼ����;
		delete[] flag;
		return count;
	}
	//��������ƶ�λ��
	int moving(int threshold, int rows, int cols, int i, int j, bool* flag) {
		int count = 0;
		if (check(threshold, rows, cols, i, j, flag)) {
			flag[i * cols + j] = true;
			//��Ƿ��ʹ��������־flag����Ҫ���ݣ���ΪֻҪ�����ʹ����ɡ�
			//��Ϊ����ܷ��ʣ����ʹ����1.���ܷ��ʣ�Ҳ�����·��ʹ���
			count = 1 + moving(threshold, rows, cols, i - 1, j, flag)
					+ moving(threshold, rows, cols, i, j - 1, flag)
					+ moving(threshold, rows, cols, i + 1, j, flag)
					+ moving(threshold, rows, cols, i, j + 1, flag);
		}
		return count;
	}
	//��鵱ǰλ���Ƿ���Է���
	bool check(int threshold, int rows, int cols, int i, int j, bool* flag) {
		if (i >= 0 && i < rows && j >= 0 && j < cols
				&& getSum(i) + getSum(j) <= threshold
				&& flag[i * cols + j] == false)
			return true;
		return false;
	}
	//����λ�õ���ֵ
	int getSum(int number) {
		int sum = 0;
		while (number > 0) {
			sum += number % 10;
			number /= 10;
		}
		return sum;
	}
};

#endif /* GETOFFERQ66_H_ */
