#pragma once
enum Volume {
	Big = 3, Middle = 2, Small = 1
};
class Airplane
{
public:
	Volume capacity;
	int passengers, max_passangers;
	Airplane(Airplane &&);
	Airplane(Volume);
	Airplane();
	~Airplane();
	bool operator ==(const Airplane &) const;
	friend Airplane & operator ++(Airplane &);
	bool operator >(const Airplane &) const;
};

