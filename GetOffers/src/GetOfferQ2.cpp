/*
 * GetOfferQ2.cpp
 *
 *  Created on: 2016Äê10ÔÂ17ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ2.h"

GetOfferQ2::GetOfferQ2() {
	// TODO Auto-generated constructor stub

}

GetOfferQ2::~GetOfferQ2() {
	// TODO Auto-generated destructor stub
}
void GetOfferQ2::replaceSpace(char *str, int length) {
	char *temp = (char *) malloc(sizeof(char) * length);
	int num = 0;
	for (int i = 0; str[i] != '\0' && num < length; i++) {
		if (str[i] == ' ') {
			temp[num++] = '%';
			temp[num++] = '2';
			temp[num++] = '0';
		} else {
			temp[num++] = str[i];
		}
	}
	int i = 0;
	for (i = 0; i < num; i++) {
		str[i] = temp[i];
	}
	str[i] = '\0';
	//cout << *temp << endl;
}
void GetOfferQ2::replaceSpace2(char *str, int length) {
	int oldlength = 0;
	int newlength = 0;
	int spacenum = 0;
	int i = 0;
	while (str[i] != '\0') {
		oldlength++;
		if (str[i] == ' ') {
			spacenum++;
		}
		i++;
	}
	newlength = oldlength + 2 * spacenum;
	if (newlength > length)
		return;
	//char *temp=(char*)malloc(sizeof(char)*newlength);
//	int i=oldlength-1;
//	int j=newlength-1;
	for (; oldlength >= 0; oldlength--) {
		if (str[oldlength] == ' ') {
			str[newlength--] = '0';
			str[newlength--] = '2';
			str[newlength--] = '%';
		} else {
			str[newlength--] = str[oldlength];
		}
	}

}
void GetOfferQ2::test() {
	//char str[] = "We Are Happy";
	char str[] = " helloworld";
	int length = 30;
	GetOfferQ2::replaceSpace2(str, length);
	cout << str << endl;
}
