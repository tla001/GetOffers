/*
 * GetOfferQ22.cpp
 *
 *  Created on: 2016年10月27日
 *      Author: tla001
 */

#include "GetOfferQ22.h"

GetOfferQ22::GetOfferQ22() {
	// TODO Auto-generated constructor stub

}

GetOfferQ22::~GetOfferQ22() {
	// TODO Auto-generated destructor stub
}

void GetOfferQ22::InitTree(TreeNode* &T) {
	T = (TreeNode*) malloc(sizeof(TreeNode));
	if (!T) {
		return;
	} else {
		T->val = NULL;
		T->left = NULL;
		T->right = NULL;
	}
}
void GetOfferQ22::create(TreeNode *&tree, char *str) {
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
void GetOfferQ22::levelOrder(TreeNode *tree) {
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
vector<int> GetOfferQ22::PrintFromTopToBottom(TreeNode *tree) {
	TreeNode * root, *TNode;
	queue<TreeNode *> q;
	vector<int> a;
	//q.InitQueue();
	root = tree;
	if (!root)
		return a;
	q.push(root);
	while (!q.empty()) {
		TNode = (TreeNode*) q.front();
		q.pop();
		//Visit(TNode);
		if (TNode->val) {
			a.push_back(TNode->val);
		}
		if (TNode->left)
			q.push(TNode->left);
		if (TNode->right)
			q.push(TNode->right);
	}
	//cout << endl;
	return a;
}
void GetOfferQ22::test() {
	char str1[] = "ABCDEFGHIJKL";
	TreeNode *p1;
	create(p1, str1);
	levelOrder(p1);
	vector<int> a = PrintFromTopToBottom(p1);
	for (vector<int>::iterator item = a.begin(); item != a.end(); item++) {
		cout << *item << "\t";
	}
	cout << endl;
}
