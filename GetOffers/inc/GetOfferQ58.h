/*
 * GetOfferQ58.h
 *
 *  Created on: 2016年11月17日
 *      Author: tla001
 *      title:对称的二叉树
 *      请实现一个函数，用来判断一颗二叉树是不是对称的。
 *      注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
 */

#ifndef GETOFFERQ58_H_
#define GETOFFERQ58_H_

#include "Include.h"

class GetOfferQ58 {
public:
	GetOfferQ58();
	virtual ~GetOfferQ58();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	bool isSymmetrical(TreeNode* pRoot) {
		if (pRoot == NULL)
			return true;
		queue<TreeNode*> q1, q2;
		TreeNode *left, *right;
		q1.push(pRoot->left);
		q2.push(pRoot->right);
		while (!q1.empty() and !q2.empty()) {
			left = q1.front();
			q1.pop();
			right = q2.front();
			q2.pop();
			//两边都是空
			if (NULL == left && NULL == right)
				continue;
			//只有一边是空
			if (NULL == left || NULL == right)
				return false;
			if (left->val != right->val)
				return false;
			q1.push(left->left);
			q1.push(left->right);
			q2.push(right->right);
			q2.push(right->left);
		}

		return true;
	}
	//思路：如果先序遍历的顺序分为两种先左后右和先右后左两种顺序遍历，
	//如果两者相等说明二叉树是对称的二叉树
//	bool isSymmetrical(TreeNode* pRoot) {
//		return isSymmetrical(pRoot, pRoot);
//	}
//
//	bool isSymmetrical(TreeNode* pRoot1, TreeNode* pRoot2) {
//		if (pRoot1 == NULL && pRoot2 == NULL)
//			return true;
//		if (pRoot1 == NULL || pRoot2 == NULL)
//			return false;
//		if (pRoot1->val != pRoot2->val)
//			return false;
//		return isSymmetrical(pRoot1->left, pRoot2->right)
//				&& isSymmetrical(pRoot1->right, pRoot2->left);
//
//	}
};

#endif /* GETOFFERQ58_H_ */
