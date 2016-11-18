/*
 * GetOfferQ57.h
 *
 *  Created on: 2016��11��17��
 *      Author: tla001
 *      title:����������һ�����
 *      ����һ�������������е�һ����㣬���ҳ��������˳�����һ����㲢�ҷ��ء�
 *      ע�⣬���еĽ�㲻�����������ӽ�㣬ͬʱ����ָ�򸸽���ָ�롣
 */

#ifndef GETOFFERQ57_H_
#define GETOFFERQ57_H_

#include "Include.h"

class GetOfferQ57 {
public:
	GetOfferQ57();
	virtual ~GetOfferQ57();
	struct TreeLinkNode {
		int val;
		struct TreeLinkNode *left;
		struct TreeLinkNode *right;
		struct TreeLinkNode *next;
		TreeLinkNode(int x) :
				val(x), left(NULL), right(NULL), next(NULL) {

		}
	};
	/*
	 * ��������������һ���ڵ㣬һ�������������
	 1.������Ϊ�գ��򷵻ؿգ�
	 2.�ڵ��Һ��Ӵ��ڣ�������һ��ָ��Ӹýڵ���Һ��ӳ�����
	 һֱ����ָ�����ӽ���ָ���ҵ���Ҷ�ӽڵ㼴Ϊ��һ���ڵ㣻
	 3.�ڵ㲻�Ǹ��ڵ㡣����ýڵ����丸�ڵ�����ӣ�
	 �򷵻ظ��ڵ㣻����������ϱ����丸�ڵ�ĸ��ڵ㣬�ظ�֮ǰ���жϣ����ؽ����
	 */
	TreeLinkNode* GetNext(TreeLinkNode* pNode) {
		if (pNode == NULL) {
			return NULL;
		}
		if (pNode->right != NULL) {
			pNode = pNode->right;
			while (pNode->left != NULL)
				pNode = pNode->left;
			return pNode;
		}
		while (pNode->next != NULL) {
			TreeLinkNode *proot = pNode->next;
			if (proot->left == pNode)
				return proot;
			pNode = pNode->next;
		}
		return NULL;
	}

};

#endif /* GETOFFERQ57_H_ */
