/*
 * GetOfferQ17.h
 *
 *  Created on: 2016��10��25��
 *      Author: tla001
 *      title:�����ӽṹ
 *      �������ö�����A��B���ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��
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
