/*
 * GetOfferQ49.h
 *
 *  Created on: 2016��11��10��
 *      Author: tla001
 *      title:���ַ���ת��������
 *      ��һ���ַ���ת����һ��������Ҫ����ʹ���ַ���ת�������Ŀ⺯����
 *       ��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0
 */

#ifndef GETOFFERQ49_H_
#define GETOFFERQ49_H_

#include "Include.h"

class GetOfferQ49 {
public:
	GetOfferQ49();
	virtual ~GetOfferQ49();

	static int StrToInt(string str) {
		static const int MAX_INT = (int) ((unsigned int) ~0 >> 1);
		static const int MIN_INT = -(int) ((unsigned) ~0 >> 1) - 1;
		unsigned int n = 0;

		//char * str1 = str.c_str();
		//�ж��Ƿ�����Ϊ��
		if (str.empty()) {
			return 0;
		}
		int cur = 0;
		//����ո�
		while (isspace(str[cur]))
			++cur;
		//��������
		int sign = 1;
		if (str[cur] == '+' || str[cur] == '-') {
			if (str[cur] == '-')
				sign = -1;
			cur++;
		}
		//ȷ�������ֺ��ٽ��к�������
		while (isdigit(str[cur])) {
			//�������
			int c = str[cur] - '0';
			if (sign > 0
					&& (n > MAX_INT / 10
							|| (n == MAX_INT / 10 && c > MAX_INT % 10))) {
				n = MAX_INT;
				break;
			} else if (sign < 0
					&& (n > (unsigned) MIN_INT / 10
							|| (n == (unsigned) MIN_INT
									&& c > (unsigned) MIN_INT % 10))) {
				n = MIN_INT;
				break;
			}
			n = n * 10 + c;
			cur++;
		}
		if (str[cur] == '\0')
			return sign > 0 ? n : -n;
		else
			return 0;
	}
	static void test() {
		string s = "  -123q45";
		cout << StrToInt(s) << endl;
	}
};

#endif /* GETOFFERQ49_H_ */
