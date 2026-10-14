#pragma once
#include <iostream>
using namespace std;

class B1 {
	int b2;
public:
	B1(int x) {
		b2 = x;

	}
	void B1_show() const {
		cout << "B2: " << b2 << endl;
	}
};