/*
 * GetOfferQ4.h
 *
 *  Created on: 2016年10月18日
 *      Author: tla001
 *      title 重建二叉树
 *      输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
 *      假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
 *      例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，
 *      则重建二叉树并返回。
 */

#ifndef GETOFFERQ4_H_
#define GETOFFERQ4_H_

#include "Include.h"

class GetOfferQ4 {
public:
	GetOfferQ4();
	virtual ~GetOfferQ4();

	typedef struct treeNode {
		int val;
		treeNode *left;
		treeNode *right;
	} TreeNode;

	static TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> in);
	static void visit(TreeNode *T);
	static void preOrder(TreeNode *T);
	static void inOrder(TreeNode *T);
	static void postOrder(TreeNode *T);
	static void test();
};

#endif /* GETOFFERQ4_H_ */
