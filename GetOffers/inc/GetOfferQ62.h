/*
 * GetOfferQ62.h
 *
 *  Created on: 2016年11月23日
 *      Author: tla001
 *      title:二叉搜索树的第k个结点
 *      给定一颗二叉搜索树，请找出其中的第k大的结点。
 *      例如， 5 / \ 3 7 /\ /\ 2 4 6 8 中，
 *      按结点数值大小顺序第三个结点的值为4
 */

#ifndef GETOFFERQ62_H_
#define GETOFFERQ62_H_
#include "Include.h"
class GetOfferQ62 {
public:
	GetOfferQ62();
	virtual ~GetOfferQ62();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	//二叉搜索树中序遍历本身就是有序的
	TreeNode* KthNode(TreeNode* pRoot, int k) {
		if (pRoot == NULL || k <= 0)
			return NULL;
		vector<TreeNode*> vec;
		Inorder(pRoot, vec);
		if (k > vec.size())
			return NULL;
		return vec[k - 1];
	}
	void Inorder(TreeNode *pRoot, vector<TreeNode*>&vec) {
		if (pRoot == NULL)
			return;
		Inorder(pRoot->left, vec);
		vec.push_back(pRoot);
		Inorder(pRoot->right, vec);
	}
};

#endif /* GETOFFERQ62_H_ */
