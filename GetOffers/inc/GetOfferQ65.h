/*
 * GetOfferQ65.h
 *
 *  Created on: 2016��11��24��
 *      Author: tla001
 *      title:�����е�·��
 *      �����һ�������������ж���һ���������Ƿ����һ������ĳ�ַ��������ַ���·����
 *      ·�����ԴӾ����е�����һ�����ӿ�ʼ��ÿһ�������ھ���������
 *      ���ң����ϣ������ƶ�һ�����ӡ����һ��·�������˾����е�ĳһ�����ӣ�
 *      ���·�������ٽ���ø��ӡ� ���� a b c e s f c s a d e e ����
 *      �а���һ���ַ���"bccced"��·�������Ǿ����в�����"abcb"·����
 *      ��Ϊ�ַ����ĵ�һ���ַ�bռ���˾����еĵ�һ�еڶ�������֮��·�������ٴν���ø��ӡ�
 */

#ifndef GETOFFERQ65_H_
#define GETOFFERQ65_H_

#include "Include.h"

class GetOfferQ65 {
public:
	GetOfferQ65();
	virtual ~GetOfferQ65();
	/*
	 * �����������㷨
	 ����һ�������û�˷������ĵ����⡣���ȣ��ھ�������ѡһ��������Ϊ·������㡣���·���ϵĵ�i���ַ�����ch����ô������Ӳ����ܴ���·���ϵ�
	 ��i��λ�á����·���ϵĵ�i���ַ�������ch����ô�����ڵĸ���Ѱ��·���ϵĵ�i+1���ַ������ھ���߽��ϵĸ���֮�⣬�������Ӷ���4�����ڵĸ��ӡ�
	 �ظ��������ֱ��·���ϵ������ַ����ھ������ҵ���Ӧ��λ�á�
	 ���ڻ�˷���ĵݹ����ԣ�·�����Ա�����һ��ջ�����ھ����ж�λ��·����ǰn���ַ���λ��֮�������n���ַ���Ӧ�ĸ��ӵ���Χ��û���ҵ���n+1��
	 �ַ������ʱ��ֻҪ��·���ϻص���n-1���ַ������¶�λ��n���ַ���
	 ����·�������ظ��������ĸ��ӣ�����Ҫ������ַ������Сһ���Ĳ���ֵ����������ʶ·���Ƿ��Ѿ�����ÿ�����ӡ� ������������Ϊ��row,col����
	 ���Ӻ�·���ַ�������Ӧ���ַ�һ��ʱ����4�����ڵĸ���(row,col-1),(row-1,col),(row,col+1)�Լ�(row+1,col)��ȥ��λ·���ַ�������һ���ַ�
	 ���4�����ڵĸ��Ӷ�û��ƥ���ַ�������һ�����ַ���������ǰ·���ַ������ַ��ھ����еĶ�λ����ȷ��������Ҫ�ص�ǰһ����Ȼ�����¶�λ��
	 һֱ�ظ�������̣�ֱ��·���ַ����������ַ����ھ������ҵ����ʵ�λ��
	 */
	bool hasPath(char* matrix, int rows, int cols, char* str) {
		if (str == NULL || rows <= 0 || cols <= 0)
			return false;
		bool *isOk = new bool[rows * cols]();
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++)
				if (isHsaPath(matrix, rows, cols, str, isOk, i, j))
					return true;
		}
		return false;
	}
	bool isHsaPath(char *matrix, int rows, int cols, char *str, bool *isOk,
			int curx, int cury) {
		if (*str == '\0')
			return true;
		if (cury == cols) {
			curx++;
			cury = 0;
		}
		if (cury == -1) {
			curx--;
			cury = cols - 1;
		}
		if (curx < 0 || curx >= rows)
			return false;
		if (isOk[curx * cols + cury] || *str != matrix[curx * cols + cury])
			return false;
		isOk[curx * cols + cury] = true;
		bool sign = isHsaPath(matrix, rows, cols, str + 1, isOk, curx - 1, cury)
				|| isHsaPath(matrix, rows, cols, str + 1, isOk, curx + 1, cury)
				|| isHsaPath(matrix, rows, cols, str + 1, isOk, curx, cury - 1)
				|| isHsaPath(matrix, rows, cols, str + 1, isOk, curx, cury + 1);
		isOk[curx * cols + cury] = false;
		return sign;
	}
};

#endif /* GETOFFERQ65_H_ */
