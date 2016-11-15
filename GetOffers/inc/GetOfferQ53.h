/*
 * GetOfferQ53.h
 *
 *  Created on: 2016��11��15��
 *      Author: tla001
 *      title:��ʾ��ֵ���ַ���
 *      ��ʵ��һ�����������ж��ַ����Ƿ��ʾ��ֵ������������С������
 *      ���磬�ַ���"+100","5e2","-123","3.1416"��"-1E-16"����ʾ��ֵ��
 *      ����"12e","1a3.14","1.2.3","+-5"��"12e+4.3"�����ǡ�
 */

#ifndef GETOFFERQ53_H_
#define GETOFFERQ53_H_

#include "Include.h"

class GetOfferQ53 {
public:
	GetOfferQ53();
	virtual ~GetOfferQ53();
	bool isNumeric(char* str) {
		// ��Ƿ��š�С���㡢e�Ƿ���ֹ�
		bool sign = false, decimal = false, hasE = false;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == 'e' || str[i] == 'E') {
				if (i == strlen(str) - 1)
					return false; // e����һ��Ҫ������
				if (hasE)
					return false;  // ����ͬʱ��������e
				hasE = true;
			} else if (str[i] == '+' || str[i] == '-') {
				// �ڶ��γ���+-���ţ�����������e֮��
				if (sign && str[i - 1] != 'e' && str[i - 1] != 'E')
					return false;
				// ��һ�γ���+-���ţ��Ҳ������ַ�����ͷ����Ҳ���������e֮��
				if (!sign && i > 0 && str[i - 1] != 'e' && str[i - 1] != 'E')
					return false;
				sign = true;
			} else if (str[i] == '.') {
				// e���治�ܽ�С���㣬С���㲻�ܳ�������
				if (hasE || decimal)
					return false;
				decimal = true;
			} else if (str[i] < '0' || str[i] > '9') // ���Ϸ��ַ�
				return false;
		}
		return true;
	}
};

#endif /* GETOFFERQ53_H_ */
