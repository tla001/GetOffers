/*
 * GetOfferQ44.h
 *
 *  Created on: 2016��11��8��
 *      Author: tla001
 *      title:��ת����˳����
 *      ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��
 *      дЩ�����ڱ����ϡ�ͬ��Cat��Fishд�������ĸ���Ȥ��
 *      ��һ������Fish������������ȴ������������˼��
 *      ���磬��student. a am I������������ʶ����
 *      ��һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ���ȷ�ľ���Ӧ���ǡ�I am a student.����
 *      Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��
 */

#ifndef GETOFFERQ44_H_
#define GETOFFERQ44_H_

#include "Include.h"

class GetOfferQ44 {
public:
	GetOfferQ44();
	virtual ~GetOfferQ44();
	static string ReverseSentence(string str) {
		vector < string > res;
		string ret;
		int length = str.size();
		if (length < 1)
			return ret;
		int last = 0;
		int index = str.find_first_of(' ', last);
		cout << "index= " << index << endl;
		while (index > 0) {
			res.push_back(str.substr(last, index - last));
			last = index + 1;
			index = str.find_first_of(' ', last);
			cout << "index= " << index << endl;
		}
		if (length - last > 0) {
			res.push_back(str.substr(last, length - last));
		}
		int i;
		for (i = res.size() - 1; i >= 1; i--)
			ret += res[i] + " ";
		ret += res[i];
		return ret;
	}
	static void test() {
		string str = "";
		cout << ReverseSentence(str) << endl;
	}
};

#endif /* GETOFFERQ44_H_ */
