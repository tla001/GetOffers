/*
 * GetOfferQ19.cpp
 *
 *  Created on: 2016年10月26日
 *      Author: tla001
 */

#include "GetOfferQ19.h"

GetOfferQ19::GetOfferQ19() {
	// TODO Auto-generated constructor stub

}

GetOfferQ19::~GetOfferQ19() {
	// TODO Auto-generated destructor stub
}

void GetOfferQ19::Create(vector<vector<int> >*array, int row, int col) {
	vector<int> a;
	for (int i = 0; i < row; i++) {
		a.clear();
		for (int j = 1; j <= col; j++) {
			a.push_back(j + i * col);
		}
		array->push_back(a);
	}
}
void GetOfferQ19::Print(vector<vector<int> > array) {
	vector<vector<int> >::iterator items;
	for (items = array.begin(); items < array.end(); items++) {
		for (vector<int>::iterator item = (*items).begin();
				item < (*items).end(); item++) {
			cout << *item << "\t";
		}
		cout << endl;
	}
}
void GetOfferQ19::Print(vector<int> array) {
	for (vector<int>::iterator item = array.begin(); item != array.end();
			item++) {
		cout << *item << "\t";
	}
	cout << endl;
}
vector<int> GetOfferQ19::printMatrix(vector<vector<int> > matrix) {
	int row = matrix.size();
	int col = matrix[0].size();
	vector<int> res;

	// 输入的二维数组非法，返回空的数组
	if (row == 0 || col == 0)
		return res;

	// 定义四个关键变量，表示左上和右下的打印范围
	int left = 0, top = 0, right = col - 1, bottom = row - 1;
	while (left <= right && top <= bottom) {
		// left to right
		for (int i = left; i <= right; ++i)
			res.push_back(matrix[top][i]);
		// top to bottom
		for (int i = top + 1; i <= bottom; ++i)
			res.push_back(matrix[i][right]);
		// right to left
		if (top != bottom)
			for (int i = right - 1; i >= left; --i)
				res.push_back(matrix[bottom][i]);
		// bottom to top
		if (left != right)
			for (int i = bottom - 1; i > top; --i)
				res.push_back(matrix[i][left]);
		left++, top++, right--, bottom--;
	}
	return res;
}
void GetOfferQ19::test() {
	vector < vector<int> > array;
	vector<int> res;
	GetOfferQ19::Create(&array, 2, 2);
	GetOfferQ19::Print (array);
	res = printMatrix(array);
	Print(res);
}
