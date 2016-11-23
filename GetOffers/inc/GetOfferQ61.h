/*
 * GetOfferQ61.h
 *
 *  Created on: 2016��11��22��
 *      Author: tla001
 *      title:���л�������
 *      ��ʵ�������������ֱ��������л��ͷ����л�������
 */

#ifndef GETOFFERQ61_H_
#define GETOFFERQ61_H_

#include "Include.h"

class GetOfferQ61 {
public:
	GetOfferQ61();
	virtual ~GetOfferQ61();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	/*
	 1. �������л���ʹ��ǰ��������ݹ�Ľ���������ֵת��Ϊ�ַ���������ÿ�ζ������Ľ��
	 ��Ϊ��ʱ����ת��val���õ��ַ�֮�����һ��' �� '��Ϊ�ָ���ڿսڵ����� '#' ���档
	 2. ���ڷ����л�������ǰ��˳�򣬵ݹ��ʹ���ַ����е��ַ�����һ��������(�ر�ע�⣺
	 �ڵݹ�ʱ���ݹ麯���Ĳ���һ��Ҫ��char ** ���������ܱ�֤ÿ�εݹ��ָ���ַ�����ָ���
	 ���ŵݹ�Ľ��ж��ƶ�������)
	 */
	char* Serialize(TreeNode *root) {
		if (!root)
			return "#";
		string r = to_string(root->val);
		r.push_back(',');
		char *left = Serialize(root->left);
		char *right = Serialize(root->right);
		char *ret = new char[strlen(left) + strlen(right) + r.size()];
		strcpy(ret, r.c_str());
		strcat(ret, left);
		strcat(ret, right);
		return ret;
	}
	TreeNode* decode(char *&str) {
		if (*str == '#') {
			str++;
			return NULL;
		}
		int num = 0;
		while (*str != ',')
			num = num * 10 + (*(str++) - '0');
		str++;
		TreeNode *root = new TreeNode(num);
		root->left = decode(str);
		root->right = decode(str);
		return root;
	}
	TreeNode* Deserialize(char *str) {
		return decode(str);
	}
};

#endif /* GETOFFERQ61_H_ */
