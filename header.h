#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


class animal {
protected:
	bool kolvo_zubov;
	int weight;
	int height;
	int years;
public:
	animal();
	animal(bool kolvo_zubov, int weight, int height, int years);
	virtual void sleep() = 0;
};

class Sobaka : public animal {
	string poroda;
public:
	Sobaka();
	Sobaka(bool kolvo_zubov, int weight, int height, int years, string poroda);
	void sleep();
};

class Koshka : public animal {
	string poroda;
public:
	Koshka();
	Koshka(bool kolvo_zubov, int weight, int height, int years, string poroda);
	void sleep();
};

class popugay : public animal {
	string poroda;

public:
	popugay();
	popugay(bool kolvo_zubov, int weight, int height, int years, string poroda);
	void sleep();
};



#endif Header