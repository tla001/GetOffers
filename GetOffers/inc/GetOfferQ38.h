/*
 * GetOfferQ38.h
 *
 *  Created on: 2016Äê11ÔÂ7ÈÕ
 *      Author: tla001
 */

#ifndef GETOFFERQ38_H_
#define GETOFFERQ38_H_

#include "Include.h"

class GetOfferQ38 {
public:
	GetOfferQ38();
	virtual ~GetOfferQ38();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
				val(x), left(NULL), right(NULL) {
		}
	};
	int TreeDepth(TreeNode* pRoot) {
		if (pRoot == NULL)
			return 0;
		int right = 1;
		int left = 1;
		left += TreeDepth(pRoot->left);
		right += TreeDepth(pRoot->right);

		return left > right ? left : right;
	}
};
#endif /* GETOFFERQ38_H_ */
