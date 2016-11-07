/*
 * GetOfferQ34.cpp
 *
 *  Created on: 2016Äê11ÔÂ3ÈÕ
 *      Author: tla001
 */

#include "GetOfferQ34.h"

GetOfferQ34::GetOfferQ34() {
	// TODO Auto-generated constructor stub

}

GetOfferQ34::~GetOfferQ34() {
	// TODO Auto-generated destructor stub
}
struct Flag {
	int id;
	int flag;
};
int GetOfferQ34::FirstNotRepeatingChar(string str) {
	map<char, Flag> m;
	for (int i = 0; i < str.size(); i++) {
		//map<char, Flag>::iterator item = m.find(str[i]);
		if (m.find(str[i]) == m.end()) {
			Flag f;
			f.id = i;
			f.flag = 1;
			m.insert(make_pair(str[i], f));
		} else {
			m[str[i]].flag = 0;
		}
	}
//	for (hash_map<char, Flag>::iterator item = m.begin(); item != m.end();
//			item++) {
////		if (item->second.flag != 0) {
////			return item->second.id;
////		}
//		cout << "char: " << item->first << "\t" << "id: " << item->second.id
//				<< "\t" << "flag: " << item->second.flag << endl;
//	}
	for (int i = 0; i < str.size(); i++) {
		map<char, Flag>::iterator item = m.find(str[i]);
		if (item->second.flag == 1) {
			return item->second.id;
		}
	}
	return -1;
}
void GetOfferQ34::test() {
	string str = "google";
	cout << FirstNotRepeatingChar(str) << endl;
}
