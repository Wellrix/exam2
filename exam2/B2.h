#pragma once
#include <iostream>
using namespace std;

class B2 {
	int b2;
public:
	B2(int x) {
		b2 = x;

	}
	void B2_show() const {
		cout << "B2: " << b2 << endl;
	}
};