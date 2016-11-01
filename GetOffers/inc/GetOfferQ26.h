/*
 * GetOfferQ26.h
 *
 *  Created on: 2016��10��30��
 *      Author: tla001
 *      title:������������˫������
 *      ����һ�ö��������������ö���������ת����һ�������˫������
 *      Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��
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
