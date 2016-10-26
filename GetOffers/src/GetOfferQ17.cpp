/*
 * GetOfferQ17.cpp
 *
 *  Created on: 2016��10��25��
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
	//���ڵ�
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
/*˼·���ο���ָoffer
 1���������ñ�־λresult = false����Ϊһ��ƥ��ɹ�result����Ϊtrue��
 ʣ�µĴ��벻��ִ�У����ƥ�䲻�ɹ���Ĭ�Ϸ���false
 2���ݹ�˼�룬������ڵ���ͬ��ݹ����DoesTree1HaveTree2������
 ������ڵ㲻��ͬ�����ж�tree1����������tree2�Ƿ���ͬ��
 ���ж���������tree2�Ƿ���ͬ
 3��ע��null��������HasSubTree�У��������������Ϊ�ղŽ����жϣ�
 DoesTree1HasTree2�У����Tree2Ϊ�գ���˵���ڶ������������ˣ���ƥ��ɹ���
 tree1Ϊ�������������1�����tree1Ϊ��&&tree2��Ϊ��˵����ƥ�䣬
 ��2�����tree1Ϊ�գ�tree2Ϊ�գ�˵��ƥ�䡣
 
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
