/*
 * GetOfferQ17.cpp
 *
 *  Created on: 2016年10月25日
 *      Author: tla001
 */

#include "GetOfferQ17.h"

GetOfferQ17::GetOfferQ17() {
	// TODO Auto-generated constructor stub

}

GetOfferQ17::~GetOfferQ17() {
	// TODO Auto-generated destructor stub
}

void GetOfferQ17::InitTree(TreeNode* &T) {
	T = (TreeNode*) malloc(sizeof(TreeNode));
	if (!T) {
		return;
	} else {
		T->val = NULL;
		T->left = NULL;
		T->right = NULL;
	}
}
void GetOfferQ17::create(TreeNode *&tree, char *str) {
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
void GetOfferQ17::levelOrder(TreeNode *tree) {
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
/*思路：参考剑指offer
 1、首先设置标志位result = false，因为一旦匹配成功result就设为true，
 剩下的代码不会执行，如果匹配不成功，默认返回false
 2、递归思想，如果根节点相同则递归调用DoesTree1HaveTree2（），
 如果根节点不相同，则判断tree1的左子树和tree2是否相同，
 再判断右子树和tree2是否相同
 3、注意null的条件，HasSubTree中，如果两棵树都不为空才进行判断，
 DoesTree1HasTree2中，如果Tree2为空，则说明第二棵树遍历完了，即匹配成功，
 tree1为空有两种情况（1）如果tree1为空&&tree2不为空说明不匹配，
 （2）如果tree1为空，tree2为空，说明匹配。
 
 */
bool GetOfferQ17::isSubtree(TreeNode* pRootA, TreeNode* pRootB) {
	if (pRootB == NULL)
		return true;
	if (pRootA == NULL)
		return false;
	if (pRootB->val == pRootA->val) {
		return isSubtree(pRootA->left, pRootB->left)
				&& isSubtree(pRootA->right, pRootB->right);
	} else
		return false;
}
bool GetOfferQ17::HasSubtree(TreeNode* pRootA, TreeNode* pRootB) {
	if (pRootA == NULL || pRootB == NULL)
		return false;
	return isSubtree(pRootA, pRootB) || HasSubtree(pRootA->left, pRootB)
			|| HasSubtree(pRootA->right, pRootB);
}
void GetOfferQ17::test() {
	char str1[] = "ABCDEFGHIJKL";
	char str2[] = "CABCD";
	TreeNode *p1;
	TreeNode *p2;
	create(p1, str1);
	levelOrder(p1);
	create(p2, str2);
	levelOrder(p2);
	cout << HasSubtree(p1, p2) << endl;
}
