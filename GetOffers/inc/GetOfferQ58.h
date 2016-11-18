/*
 * GetOfferQ58.h
 *
 *  Created on: 2016��11��17��
 *      Author: tla001
 *      title:�ԳƵĶ�����
 *      ��ʵ��һ�������������ж�һ�Ŷ������ǲ��ǶԳƵġ�
 *      ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�
 */

#ifndef GETOFFERQ58_H_
#define GETOFFERQ58_H_

#include "Include.h"

class GetOfferQ58 {
public:
	GetOfferQ58();
	virtual ~GetOfferQ58();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	bool isSymmetrical(TreeNode* pRoot) {
		if (pRoot == NULL)
			return true;
		queue<TreeNode*> q1, q2;
		TreeNode *left, *right;
		q1.push(pRoot->left);
		q2.push(pRoot->right);
		while (!q1.empty() and !q2.empty()) {
			left = q1.front();
			q1.pop();
			right = q2.front();
			q2.pop();
			//���߶��ǿ�
			if (NULL == left && NULL == right)
				continue;
			//ֻ��һ���ǿ�
			if (NULL == left || NULL == right)
				return false;
			if (left->val != right->val)
				return false;
			q1.push(left->left);
			q1.push(left->right);
			q2.push(right->right);
			q2.push(right->left);
		}

		return true;
	}
	//˼·��������������˳���Ϊ����������Һ����Һ�������˳�������
	//����������˵���������ǶԳƵĶ�����
//	bool isSymmetrical(TreeNode* pRoot) {
//		return isSymmetrical(pRoot, pRoot);
//	}
//
//	bool isSymmetrical(TreeNode* pRoot1, TreeNode* pRoot2) {
//		if (pRoot1 == NULL && pRoot2 == NULL)
//			return true;
//		if (pRoot1 == NULL || pRoot2 == NULL)
//			return false;
//		if (pRoot1->val != pRoot2->val)
//			return false;
//		return isSymmetrical(pRoot1->left, pRoot2->right)
//				&& isSymmetrical(pRoot1->right, pRoot2->left);
//
//	}
};

#endif /* GETOFFERQ58_H_ */
