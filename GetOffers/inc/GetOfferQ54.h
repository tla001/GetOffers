/*
 * GetOfferQ54.h
 *
 *  Created on: 2016��11��15��
 *      Author: tla001
 *      title:�ַ����е�һ�����ظ����ַ�
 *      ��ʵ��һ�����������ҳ��ַ����е�һ��ֻ����һ�ε��ַ���
 *      ���磬�����ַ�����ֻ����ǰ�����ַ�"go"ʱ����һ��ֻ����һ�ε��ַ���"g"��
 *      ���Ӹ��ַ����ж���ǰ�����ַ���google"ʱ����һ��ֻ����һ�ε��ַ���"l"��
 */

#ifndef GETOFFERQ54_H_
#define GETOFFERQ54_H_
#include "Include.h"
class GetOfferQ54 {
public:
	GetOfferQ54();
	virtual ~GetOfferQ54();
	//Insert one char from stringstream
	void Insert(char ch) {
		v.push_back(ch);
		if (m.find(ch) == m.end()) {
			m.insert(make_pair(ch, 1));
		} else
			m[ch]++;
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce() {
		for (vector<char>::iterator ite = v.begin(); ite != v.end(); ite++) {
			if (m[*ite] == 1)
				return *ite;
		}
		return '#';
	}
	map<char, int> m;
	vector<char> v;

};

#endif /* GETOFFERQ54_H_ */
