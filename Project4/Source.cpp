#include "MyPoint.h"
#include "Circle.h"
#include "Airplane.h"

int main() {
	/*int x, y, z;
	MyPoint mp (3,4,6);
	std::cin >> mp;
	std::cout << mp<<std::endl;
	int x1 = mp;
	std::cout << x1 << std::endl;
	bool p = (int)mp;
	std::cout << p << std::endl;*/
	/*Circle c1(5);
	Circle c2(5);

	bool v = (c1 == c2);
	std::cout << v << std::endl;*/

	Airplane air1, air2;
	air1.passengers = 10;
	air1.capacity = Volume(Big);
	air1.max_passangers = 1000;
	air2.passengers = 750;
	air2.max_passangers = 1900;
	air2.capacity = Volume(Middle);
	std::cout << (air1.capacity == air2.capacity)<<std::endl;
	air1.passengers++;
	std::cout << air1.passengers << std::endl;
	if (air1.max_passangers > air2.max_passangers) {
		std::cout << air1.max_passangers << " " << air1.capacity << std::endl;
	}
	else std::cout << air2.max_passangers << " " << air2.capacity << std::endl;
	system("pause");
	return 0;
}