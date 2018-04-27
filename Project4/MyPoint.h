#pragma once
#include <ostream>
#include <istream>
#include <iostream>

class MyPoint
{
public:
	int x, y, z;
	MyPoint();
	MyPoint(int, int,int);
	~MyPoint();
	friend std::ostream & operator <<(std::ostream &, const MyPoint &);
	friend std::istream & operator >>(std::istream &,  MyPoint &);
	explicit operator int() {
		return int(x + y + z);
	}

	operator bool();

};

