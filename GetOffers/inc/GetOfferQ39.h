/*
 * GetOfferQ39.h
 *
 *  Created on: 2016年11月7日
 *      Author: tla001
 *      title:平衡二叉树
 *     输入一棵二叉树，判断该二叉树是否是平衡二叉树。
 */

#ifndef GETOFFERQ39_H_
#define GETOFFERQ39_H_

#include "Include.h"

class GetOfferQ39 {
public:
	GetOfferQ39();
	virtual ~GetOfferQ39();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	int TreeDepth(TreeNode* pRoot) {
		if (pRoot == NULL)
			return 0;
		int right = 1;
		int left = 1;
		left += TreeDepth(pRoot->left);
		right += TreeDepth(pRoot->right);

		return left > right ? left : right;
	}
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (pRoot == NULL)
			return true;
		int left = TreeDepth(pRoot->left);
		int right = TreeDepth(pRoot->right);
		int diff = right - left;
		if (diff > 1 || diff < -1)
			return false;
		return IsBalanced_Solution(pRoot->left)
				&& IsBalanced_Solution(pRoot->right);
	}
};

#endif /* GETOFFERQ39_H_ */
