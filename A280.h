#ifndef A280_H_
#define A280_H_
#include <iostream>
#include "Blaster.h"

using namespace std;

class A280 :public Blaster
{
private:

	bool rebellionScope;
	bool antiSedimentBarrel;

public:
	A280();
	A280(string name, string Era, int year, double price, int damage, bool rebellionScope, bool antiSedimentBarrel);
	bool getrebellionScope();
	bool getantiSedimentBarrel();
	void setrebellionScope(bool rebellionScope);
	void setantiSedimentBarrel(bool antiSedimentBarrel);
	void displayDescription();
};

#endif
