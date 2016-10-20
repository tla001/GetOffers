/*
 * GetOfferQ4.cpp
 *
 *  Created on: 2016Äê10ÔÂ18ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ4.h"

GetOfferQ4::GetOfferQ4() {
	// TODO Auto-generated constructor stub

}

GetOfferQ4::~GetOfferQ4() {
	// TODO Auto-generated destructor stub
}

GetOfferQ4::TreeNode *GetOfferQ4::reConstructBinaryTree(vector<int> pre,
		vector<int> in) {
	TreeNode * tree = (TreeNode *) malloc(sizeof(TreeNode));
	tree->val = pre[0];
	unsigned int index = 0;
	for (; index < pre.size(); index++) {
		if (in[index] == pre[0]) {
			break;
		}
	}
	vector<int> inL(in.begin(), in.begin() + index);
	vector<int> inR(in.begin() + index + 1, in.end());

	vector<int> preL(pre.begin() + 1, pre.begin() + index + 1);
	vector<int> preR(pre.begin() + index + 1, pre.end());

	if (index == 0)
		tree->left = NULL;
	else
		tree->left = reConstructBinaryTree(preL, inL);
	if (preR.size() == 0)
		tree->right = NULL;
	else
		tree->right = reConstructBinaryTree(preR, inR);

	return tree;
}
void GetOfferQ4::visit(TreeNode *T) {
	if (T) {
		cout << T->val << "\t";
	}
}
void GetOfferQ4::preOrder(TreeNode *T) {
	if (T) {
		visit(T);
		preOrder(T->left);
		preOrder(T->right);
	}
}
void GetOfferQ4::inOrder(TreeNode *T) {
	if (T) {
		inOrder(T->left);
		visit(T);
		inOrder(T->right);
	}
}
void GetOfferQ4::postOrder(TreeNode *T) {
	if (T) {
		postOrder(T->left);
		postOrder(T->right);
		visit(T);
	}
}
void GetOfferQ4::test() {
	int apre[] = { 1, 2, 4, 7, 3, 5, 6, 8 };
	int ain[] = { 4, 7, 2, 1, 5, 3, 8, 6 };
	int length = sizeof(apre) / sizeof(apre[0]);
//	vector<int> *pre = new vector<int>();
//		pre->reserve(length);
//		pre->assign(&apre[0], &apre[length]);
//		//pre(apre, apre + length);
//		for (vector<int>::iterator item = pre->begin(); item != pre->end();
//				item++) {
//			cout << *item << "\t";
//		}
//		cout << endl;
//		vector<int> *in = new vector<int>();
//		in->reserve(length);
//		in->assign(&ain[0], &ain[length]);
//		for (vector<int>::iterator item = in->begin(); item != in->end(); item++) {
//			cout << *item << "\t";
//		}
//		cout << endl;
	vector<int> pre(apre, apre + length);
	for (vector<int>::iterator item = pre.begin(); item != pre.end(); item++) {
		cout << *item << "\t";
	}
	cout << endl;
	vector<int> in(ain, ain + length);
	for (vector<int>::iterator item = in.begin(); item != in.end(); item++) {
		cout << *item << "\t";
	}
	cout << endl;
	TreeNode *tree = GetOfferQ4::reConstructBinaryTree(pre, in);
	preOrder(tree);
	cout << endl;
	inOrder(tree);
	cout << endl;
	postOrder(tree);
	cout << endl;
}
