/*
 * GetOfferQ22.h
 *
 *  Created on: 2016��10��27��
 *      Author: tla001
 *      title:�������´�ӡ������
 *      �������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ
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
