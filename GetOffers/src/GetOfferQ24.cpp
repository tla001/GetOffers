/*
 * GetOfferQ24.cpp
 *
 *  Created on: 2016年10月27日
 *      Author: tla001
 */

#include "GetOfferQ24.h"

GetOfferQ24::GetOfferQ24() {
	// TODO Auto-generated constructor stub

}

GetOfferQ24::~GetOfferQ24() {
	// TODO Auto-generated destructor stub
}
void GetOfferQ24::InitTree(TreeNode* &T) {
	T = (TreeNode*) malloc(sizeof(TreeNode));
	if (!T) {
		return;
	} else {
		T->val = NULL;
		T->left = NULL;
		T->right = NULL;
	}
}
void GetOfferQ24::create(TreeNode *&tree, char *str) {
	int length = strlen(str);
	int i = 1;
	TreeNode* root, *temp;
	queue<TreeNode*> q;
	//根节点
	InitTree(root);
	root->val = str[0] - 'A';
	q.push(root);
	tree = root;

	while (!q.empty()) {
		temp = q.front();
		q.pop();
		if (i <= length && str[i] != '\0') {
			InitTree(root);
			root->val = str[i] - 'A';
			q.push(root);
			temp->left = root;
		}
		i++;
		if (i <= length && str[i] != '\0') {
			InitTree(root);
			root->val = str[i] - 'A';
			q.push(root);
			temp->right = root;
		}
		i++;
	}
}
void GetOfferQ24::levelOrder(TreeNode *tree) {
	TreeNode* root, *TNode;
	queue<TreeNode *> q;
	//q.InitQueue();
	root = tree;
	if (!root)
		return;
	q.push(root);
	while (!q.empty()) {
		TNode = (TreeNode*) q.front();
		q.pop();
		//Visit(TNode);
//		if (TNode->val) {
		printf("%d\t", TNode->val);
//		}
		if (TNode->left)
			q.push(TNode->left);
		if (TNode->right)
			q.push(TNode->right);
	}
	cout << endl;
}
void GetOfferQ24::Print(vector<vector<int> > array) {
	vector<vector<int> >::iterator items;
	for (items = array.begin(); items < array.end(); items++) {
		for (vector<int>::iterator item = (*items).begin();
				item < (*items).end(); item++) {
			cout << *item << "\t";
		}
		cout << endl;
	}
}
vector<vector<int> > GetOfferQ24::FindPath(TreeNode* root, int expectNumber) {
	vector < vector<int> > res;
	if (root == NULL)
		return res;
	vector<int> routine;
	stack<TreeNode*> s;
	TreeNode * cur = root;
	TreeNode *last = NULL;
	int sum = 0;
	s.push(root);
	while (!s.empty()) {
		if (cur == NULL) {
			TreeNode * temp = s.top();
			if (temp->right != NULL && temp->right != last)
				cur = temp->right;
			else {
				last = temp;
				s.pop();
				routine.pop_back();
				sum -= temp->val;
			}
		} else {
			s.push(cur);
			sum += cur->val;
			routine.push_back(cur->val);
			if (cur->left == NULL && cur->right == NULL && sum == expectNumber)
				res.push_back(routine);
			cur = cur->left;
		}
	}
	return res;
}
void GetOfferQ24::test() {
	char str1[] = "ABCDEFGHIJKL";
	TreeNode *p1;
	create(p1, str1);
	levelOrder(p1);
	vector < vector<int> > res = FindPath(p1, 20);
	Print (res);
}
