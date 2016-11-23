/*
 * GetOfferQ62.h
 *
 *  Created on: 2016��11��23��
 *      Author: tla001
 *      title:�����������ĵ�k�����
 *      ����һ�Ŷ��������������ҳ����еĵ�k��Ľ�㡣
 *      ���磬 5 / \ 3 7 /\ /\ 2 4 6 8 �У�
 *      �������ֵ��С˳�����������ֵΪ4
 */

#ifndef GETOFFERQ62_H_
#define GETOFFERQ62_H_
#include "Include.h"
class GetOfferQ62 {
public:
	GetOfferQ62();
	virtual ~GetOfferQ62();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	//�����������������������������
	TreeNode* KthNode(TreeNode* pRoot, int k) {
		if (pRoot == NULL || k <= 0)
			return NULL;
		vector<TreeNode*> vec;
		Inorder(pRoot, vec);
		if (k > vec.size())
			return NULL;
		return vec[k - 1];
	}
	void Inorder(TreeNode *pRoot, vector<TreeNode*>&vec) {
		if (pRoot == NULL)
			return;
		Inorder(pRoot->left, vec);
		vec.push_back(pRoot);
		Inorder(pRoot->right, vec);
	}
};

#endif /* GETOFFERQ62_H_ */
