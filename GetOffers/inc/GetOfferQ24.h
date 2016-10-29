/*
 * GetOfferQ24.h
 *
 *  Created on: 2016Äê10ÔÂ27ÈÕ
 *      Author: tla001
 */

#ifndef GETOFFERQ24_H_
#define GETOFFERQ24_H_

#include "Include.h"

class GetOfferQ24 {
public:
	GetOfferQ24();
	virtual ~GetOfferQ24();
	struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
	};
	static void InitTree(TreeNode *&T);
	static void create(TreeNode *&tree, char *str);
	static void levelOrder(TreeNode *tree);
	static void Print(vector<vector<int> > array);
	static vector<vector<int> > FindPath(TreeNode* root, int expectNumber);
	static void test();
};

#endif /* GETOFFERQ24_H_ */
