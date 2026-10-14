#pragma once
#include "B3.h"
#include <iostream>
using namespace std;

class D2: private B3 {
	int d2;

public:
	D2(int x, int y) :B3(y) {
		d2 = x;

	}
	void showD2() const {
		cout << "d2: " << d2 << endl;
		B3_show();

	}


};