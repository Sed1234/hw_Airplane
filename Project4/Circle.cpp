#include "Circle.h"



Circle::Circle()
{
}

Circle::Circle(int r)
{
	this->r = r;
}


Circle::~Circle()
{
}

bool Circle::operator==(Circle & circle)
{
	if (this->r==circle.r)
	return true;
	else return false;
}

Circle& operator +=(int x, Circle & r)
{
	r.r = r.r + x;
	 return r;
}

std::ostream & operator<<(std::ostream & os, const Circle & mp)
{
	os << mp.r;
	return os;
}
