/*
 * GetOfferQ59.h
 *
 *  Created on: 2016��11��18��
 *      Author: tla001
 *      title:��֮����˳���ӡ������
 *      ��ʵ��һ����������֮���δ�ӡ������������һ�а��մ����ҵ�˳���ӡ��
 *      �ڶ��㰴�մ��������˳���ӡ�������а��մ����ҵ�˳���ӡ���������Դ�����
 */

#ifndef GETOFFERQ59_H_
#define GETOFFERQ59_H_

#include "Include.h"

class GetOfferQ59 {
public:
	GetOfferQ59();
	virtual ~GetOfferQ59();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	vector<vector<int> > Print(TreeNode* pRoot) {
		vector < vector<int> > result;
		stack<TreeNode *> stack1, stack2;
		if (pRoot != NULL)
			stack1.push(pRoot);
		TreeNode *node;
		while (!stack1.empty() || !stack2.empty()) {
			vector<int> data;
			if (!stack1.empty()) {
				while (!stack1.empty()) {
					node = stack1.top();
					stack1.pop();
					data.push_back(node->val);
					if (node->left != NULL)
						stack2.push(node->left);
					if (node->right != NULL)
						stack2.push(node->right);
				}
				result.push_back(data);
			} else if (!stack2.empty()) {
				while (!stack2.empty()) {
					node = stack2.top();
					stack2.pop();
					data.push_back(node->val);
					if (node->right != NULL)
						stack1.push(node->right);
					if (node->left != NULL)
						stack1.push(node->left);
				}
				result.push_back(data);
			}
		}
		return result;
	}
};

#endif /* GETOFFERQ59_H_ */
