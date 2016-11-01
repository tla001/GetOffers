/*
 * GetOfferQ26.cpp
 *
 *  Created on: 2016Äê10ÔÂ30ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ26.h"

GetOfferQ26::GetOfferQ26() {
	// TODO Auto-generated constructor stub

}

GetOfferQ26::~GetOfferQ26() {
	// TODO Auto-generated destructor stub
}
void GetOfferQ26::insert(TreeNode *&tree, int val) {
	if (tree == NULL) {
		tree = (TreeNode *) malloc(sizeof(TreeNode));
		tree->val = val;
		tree->left = NULL;
		tree->right = NULL;
	} else {
		if (tree->val > val) {
			insert(tree->left, val);
		} else if (tree->val < val) {
			insert(tree->right, val);
		} else
			return;
	}
}
void GetOfferQ26::postOrder(TreeNode *tree) {
	if (tree) {
		postOrder(tree->left);
		postOrder(tree->right);
		cout << tree->val << "\t";
	}
}
void GetOfferQ26::inOrder(TreeNode *tree) {
	if (tree) {
		inOrder(tree->left);
		cout << tree->val << "\t";
		inOrder(tree->right);
	}
}
GetOfferQ26::TreeNode *GetOfferQ26::Convert(TreeNode *pRootOfTree) {
	if (pRootOfTree == NULL)
		return NULL;
	stack<TreeNode *> s;
	vector<TreeNode *> v;
	TreeNode *root = pRootOfTree;
	TreeNode *newRoot = NULL, *last = NULL;
	while (root || !s.empty()) {
		while (root) {
			s.push(root);
			root = root->left;
		}
		if (!s.empty()) {
			root = s.top();
			s.pop();
			//cout << root->val << "\t";
			v.push_back(root);
			root = root->right;
		}
	}
	newRoot = v.front();
	root = newRoot;
	for (int i = 1; i < v.size(); i++) {
		root->right = v[i];
		root->left = last;
		last = root;
		root = root->right;
	}
	root->left = last;
	return newRoot;
}
void GetOfferQ26::test() {
	int a[] = { 7, 2, 4, 6, 3, 1, 5 };
	int size = sizeof(a) / sizeof(a[0]);
	TreeNode * tree = NULL;
	for (int i = 0; i < size; i++) {
		insert(tree, a[i]);
	}
	postOrder(tree);
	cout << endl;
	inOrder(tree);
	cout << endl;
	TreeNode * T = Convert(tree);
	TreeNode *node = T;
	cout << "T" << endl;
	while (node->right) {
		cout << node->val << "\t";
		node = node->right;
	}
	cout << endl;
	while (node) {
		cout << node->val << "\t";
		node = node->left;
	}
	cout << endl;
}
