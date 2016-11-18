/*
 * GetOfferQ60.h
 *
 *  Created on: 2016年11月18日
 *      Author: tla001
 *      title:把二叉树打印成多行
 *      从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行
 */

#ifndef GETOFFERQ60_H_
#define GETOFFERQ60_H_

#include "Include.h"

class GetOfferQ60 {
public:
	GetOfferQ60();
	virtual ~GetOfferQ60();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	vector<vector<int> > Print(TreeNode* pRoot) {
		vector < vector<int> > res;
		if (pRoot == NULL)
			return res;
		queue<TreeNode*> stack1, stack2;
		stack1.push(pRoot);
		TreeNode *node;
		while (!stack1.empty() || !stack2.empty()) {
			vector<int> data;
			if (!stack1.empty()) {
				while (!stack1.empty()) {
					node = stack1.front();
					stack1.pop();
					data.push_back(node->val);
					if (node->left)
						stack2.push(node->left);
					if (node->right)
						stack2.push(node->right);
				}
				res.push_back(data);

			} else if (!stack2.empty()) {
				while (!stack2.empty()) {
					node = stack2.front();
					stack2.pop();
					data.push_back(node->val);
					if (node->left)
						stack1.push(node->left);
					if (node->right)
						stack1.push(node->right);
				}
				res.push_back(data);
			}
		}
		return res;
	}

};

#endif /* GETOFFERQ60_H_ */
