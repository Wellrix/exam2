#pragma once
#include "D1.h"
#include "D2.h"
#include <iostream>
using namespace std;

class D3 :public D1, protected D2 {
	int d3;

public:
	D3(int x, int y, int z, int i, int j, int k) : D1(y, z, i), D2(j, k) {
		d3 = x;
	}

};