/*
 * GetOfferQ1.cpp
 *
 *  Created on: 2016Äê10ÔÂ16ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ1.h"

GetOfferQ1::GetOfferQ1() {
	// TODO Auto-generated constructor stub

}

GetOfferQ1::~GetOfferQ1() {
	// TODO Auto-generated destructor stub
}
void GetOfferQ1::Create(vector<vector<int> >*array) {
	int row = 6;
	int col = 7;
	vector<int> a;
	for (int i = 0; i < row; i++) {
		a.clear();
		for (int j = 0; j < col; j++) {
			a.push_back(j + i);
		}
		array->push_back(a);
	}
}
void GetOfferQ1::Print(vector<vector<int> > array) {
	vector<vector<int> >::iterator items;
	for (items = array.begin(); items < array.end(); items++) {
		for (vector<int>::iterator item = (*items).begin();
				item < (*items).end(); item++) {
			cout << *item << "\t";
		}
		cout << endl;
	}
}
bool GetOfferQ1::Find(vector<vector<int> > array, int target) {
	int col = array[0].size();
	int row = array.size();
	cout << "row= " << row << "\t" << "col= " << col << endl;
//	int low_x = 0;
//	int high_x = row - 1;
//	int mid_x;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << array[i][j] << "\t";
//		}
//		cout << endl;
//	}
	/**
	 *
	 */
//	for (int i = 0; i < row; i++) {
//		if (array[i][0] <= target && array[i][col - 1] >= target) {
//			int low_y = 0;
//			int high_y = col - 1;
//			int mid_y;
//			while (low_y <= high_y) {
//				mid_y = (low_y + high_y) / 2;
//				if (array[i][mid_y] == target) {
//					cout << "mid_x= " << i << "\t" << "mid_y= " << mid_y
//							<< endl;
//					return true;
//				} else if (array[i][mid_y] > target) {
//					high_y = mid_y - 1;
//				} else {
//					low_y = mid_y + 1;
//				}
//			}
//		}
//	}
	/*
	 *
	 */
//	while (low_x <= high_x) {
//		mid_x = (low_x + high_x) / 2; //³ý
//		int low_y = 0;
//		int high_y = col - 1;
//		int mid_y;
//		int tem_y = (low_y + high_y) / 2;
//		while (low_y <= high_y) {
//			mid_y = (low_y + high_y) / 2;
//			if (array[mid_x][mid_y] == target) {
//				cout << "mid_x= " << mid_x << "\t" << "mid_y= " << mid_y
//						<< endl;
//				return true;
//			} else if (array[mid_x][mid_y] > target) {
//				high_y = mid_y - 1;
//			} else {
//				low_y = mid_y + 1;
//			}
//		}
//		if (array[mid_x][tem_y] == target) {
//			cout << "mid_x= " << mid_x << "\t" << "mid_y= " << mid_y << endl;
//			return true;
//		} else if (array[mid_x][tem_y] > target) {
//			high_x = mid_x - 1;
//		} else {
//			low_x = mid_x + 1;
//		}
//	}
	for (int i = row - 1, j = 0; i >= 0 && j < col;) {
		if (target == array[i][j]) {
			return true;
		} else if (target < array[i][j]) {
			i--;
		} else {
			j++;
		}
	}
	return false;
}
void GetOfferQ1::test() {
	//GetOfferQ1 q = new GetOfferQ1();
	vector < vector<int> > array;
	int target = 11;
	GetOfferQ1::Create (&array);
	GetOfferQ1::Print(array);
	bool ret = GetOfferQ1::Find(array, target);
	cout << "ret= " << ret << endl;
}
