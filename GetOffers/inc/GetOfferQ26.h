/*
 * GetOfferQ26.h
 *
 *  Created on: 2016年10月30日
 *      Author: tla001
 *      title:二叉搜索树与双向链表
 *      输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
 *      要求不能创建任何新的结点，只能调整树中结点指针的指向
 */

#ifndef GETOFFERQ26_H_
#define GETOFFERQ26_H_

#include "Include.h"

class GetOfferQ26 {
public:
	GetOfferQ26();
	virtual ~GetOfferQ26();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	static void insert(TreeNode *&tree, int val);
	static void postOrder(TreeNode *tree);
	static void inOrder(TreeNode *tree);
	static void test();
	static TreeNode* Convert(TreeNode* pRootOfTree);
};

#endif /* GETOFFERQ26_H_ */
