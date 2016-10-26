/*
 * GetOfferQ19.h
 *
 *  Created on: 2016Äê10ÔÂ26ÈÕ
 *      Author: tla001
 */

#ifndef GETOFFERQ19_H_
#define GETOFFERQ19_H_

#include "Include.h"

class GetOfferQ19 {
public:
	GetOfferQ19();
	virtual ~GetOfferQ19();

	static void Create(vector<vector<int> > *array, int row, int col);
	static void Print(vector<vector<int> > array);
	static void Print(vector<int> array);
	static vector<int> printMatrix(vector<vector<int> > matrix);
	static void test();
};

#endif /* GETOFFERQ19_H_ */
