/*
 * GetOfferQ4.h
 *
 *  Created on: 2016��10��18��
 *      Author: tla001
 *      title �ؽ�������
 *      ����ĳ��������ǰ���������������Ľ�������ؽ����ö�������
 *      ���������ǰ���������������Ľ���ж������ظ������֡�
 *      ��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}��
 *      ���ؽ������������ء�
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
