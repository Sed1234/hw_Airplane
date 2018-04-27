#include "MyPoint.h"



MyPoint::MyPoint()
{
}

MyPoint::MyPoint(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}


MyPoint::~MyPoint()
{
}

MyPoint::operator bool()
{
	if (x == 0 && y == 0 && z == 0)
		return false;
	else return true;
}

 std::ostream & operator <<(std::ostream & os, const MyPoint & mp)
{
	os << mp.x << ' ' << mp.y << ' ' << mp.z;
	return os;
}

 std::istream & operator >> (std::istream & is,  MyPoint & mp)
 {
	 is >> mp.x >> mp.y >>mp.z;
	 return is;
 }
