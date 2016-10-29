/*
 * GetOfferQ22.h
 *
 *  Created on: 2016年10月27日
 *      Author: tla001
 *      title:从上往下打印二叉树
 *      从上往下打印出二叉树的每个节点，同层节点从左至右打印
 */

#ifndef GETOFFERQ22_H_
#define GETOFFERQ22_H_

#include "Include.h"

class GetOfferQ22 {
public:
	GetOfferQ22();
	virtual ~GetOfferQ22();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
	};
	static void InitTree(TreeNode *&T);
	static void create(TreeNode *&tree, char *str);
	static void levelOrder(TreeNode *tree);
	static vector<int> PrintFromTopToBottom(TreeNode *root);
	static void test();
};

#endif /* GETOFFERQ22_H_ */
