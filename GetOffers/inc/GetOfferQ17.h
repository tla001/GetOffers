/*
 * GetOfferQ17.h
 *
 *  Created on: 2016年10月25日
 *      Author: tla001
 *      title:树的子结构
 *      输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
 */

#ifndef GETOFFERQ17_H_
#define GETOFFERQ17_H_

#include "Include.h"

class GetOfferQ17 {
public:
	GetOfferQ17();
	virtual ~GetOfferQ17();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
	};
	static bool isSubtree(TreeNode* pRootA, TreeNode* pRootB);
	static bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2);
	static void InitTree(TreeNode *&T);
	static void create(TreeNode *&tree, char *str);
	static void levelOrder(TreeNode *tree);
	static void test();
};

#endif /* GETOFFERQ17_H_ */
