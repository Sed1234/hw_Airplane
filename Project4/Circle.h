#pragma once
#include <iostream>

class Circle
{
public:
	int r;
	Circle();
	Circle(int);
	~Circle();
	bool Circle::operator ==(Circle &);
	friend  Circle&operator +=(int, Circle & );
	friend std::ostream & operator <<(std::ostream &, const Circle &);
	//friend std::istream & operator >> (std::istream &, MyPoint &);
	
};

