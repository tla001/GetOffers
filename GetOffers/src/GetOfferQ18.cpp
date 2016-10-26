/*
 * GetOfferQ18.cpp
 *
 *  Created on: 2016年10月26日
 *      Author: tla001
 */

#include "GetOfferQ18.h"

GetOfferQ18::GetOfferQ18() {
	// TODO Auto-generated constructor stub

}

GetOfferQ18::~GetOfferQ18() {
	// TODO Auto-generated destructor stub
}

void GetOfferQ18::InitTree(TreeNode* &T) {
	T = (TreeNode*) malloc(sizeof(TreeNode));
	if (!T) {
		return;
	} else {
		T->val = NULL;
		T->left = NULL;
		T->right = NULL;
	}
}
void GetOfferQ18::create(TreeNode *&tree, char *str) {
	int length = strlen(str);
	int i = 1;
	TreeNode* root, *temp;
	queue<TreeNode*> q;
	//根节点
	InitTree(root);
	root->val = str[0];
	q.push(root);
	tree = root;

	while (!q.empty()) {
		temp = q.front();
		q.pop();
		if (i <= length && str[i] != '\0') {
			InitTree(root);
			root->val = str[i];
			q.push(root);
			temp->left = root;
		}
		i++;
		if (i <= length && str[i] != '\0') {
			InitTree(root);
			root->val = str[i];
			q.push(root);
			temp->right = root;
		}
		i++;
	}
}
void GetOfferQ18::levelOrder(TreeNode *tree) {
	TreeNode* root, *TNode;
	queue<TreeNode *> q;
	//q.InitQueue();
	root = tree;
	if (!root)
		exit(-1);
	q.push(root);
	while (!q.empty()) {
		TNode = (TreeNode*) q.front();
		q.pop();
		//Visit(TNode);
		if (TNode->val) {
			printf("%c\t", TNode->val);
		}
		if (TNode->left)
			q.push(TNode->left);
		if (TNode->right)
			q.push(TNode->right);
	}
	cout << endl;
}
void GetOfferQ18::Mirror(TreeNode *pRoot) {
	if (pRoot == NULL)
		return;
	if (pRoot->left != NULL || pRoot->right != NULL) {
		TreeNode *node = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = node;
	}
	if (pRoot->left)
		Mirror(pRoot->left);
	if (pRoot->right)
		Mirror(pRoot->right);
}
void GetOfferQ18::test() {
	char str1[] = "ABCDEFGHIJKL";
	TreeNode *p1;
	create(p1, str1);
	levelOrder(p1);
	Mirror(p1);
	levelOrder(p1);
}
