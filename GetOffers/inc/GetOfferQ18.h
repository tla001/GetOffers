/*
 * GetOfferQ18.h
 *
 *  Created on: 2016��10��26��
 *      Author: tla001
 *      title:�������ľ���
 *      �������ľ����壺Դ������
 *   	    8
 *   	   /  \
 *   	  6   10
 *   	 / \  / \
 *   	5  7 9 11
 *   	���������
 *   	    8
 *   	   /  \
 *   	  10   6
 *   	 / \  / \
 *   	11 9 7  5
 */

#ifndef GETOFFERQ18_H_
#define GETOFFERQ18_H_

#include "Include.h"

class GetOfferQ18 {
public:
	GetOfferQ18();
	virtual ~GetOfferQ18();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
	};
	static void InitTree(TreeNode *&T);
	static void create(TreeNode *&tree, char *str);
	static void levelOrder(TreeNode *tree);
	static void Mirror(TreeNode *pRoot);
	static void test();
};

#endif /* GETOFFERQ18_H_ */
