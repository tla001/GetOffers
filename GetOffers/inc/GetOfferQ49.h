/*
 * GetOfferQ49.h
 *
 *  Created on: 2016年11月10日
 *      Author: tla001
 *      title:把字符串转换成整数
 *      将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。
 *       数值为0或者字符串不是一个合法的数值则返回0
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
		//判断是否输入为空
		if (str.empty()) {
			return 0;
		}
		int cur = 0;
		//处理空格
		while (isspace(str[cur]))
			++cur;
		//处理正负
		int sign = 1;
		if (str[cur] == '+' || str[cur] == '-') {
			if (str[cur] == '-')
				sign = -1;
			cur++;
		}
		//确定是数字后再进行后续操作
		while (isdigit(str[cur])) {
			//处理溢出
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
