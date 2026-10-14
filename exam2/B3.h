#pragma once
#include <iostream>
using namespace std;

class B3 {
	int b3;
public:
	B3(int x) {
		b3 = x;

	}
	void B3_show() const {
		cout << "B3: " << b3 << endl;
	}
};