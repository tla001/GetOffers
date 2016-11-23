/*
 * GetOfferQ61.h
 *
 *  Created on: 2016年11月22日
 *      Author: tla001
 *      title:序列化二叉树
 *      请实现两个函数，分别用来序列化和反序列化二叉树
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
	 1. 对于序列化：使用前序遍历，递归的将二叉树的值转化为字符，并且在每次二叉树的结点
	 不为空时，在转化val所得的字符之后添加一个' ， '作为分割。对于空节点则以 '#' 代替。
	 2. 对于反序列化：按照前序顺序，递归的使用字符串中的字符创建一个二叉树(特别注意：
	 在递归时，递归函数的参数一定要是char ** ，这样才能保证每次递归后指向字符串的指针会
	 随着递归的进行而移动！！！)
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
