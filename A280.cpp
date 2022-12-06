#include <iostream>
#include "Blaster.h"
#include "A280.h"

using namespace std;

A280::A280() : Blaster()
{
	rebellionScope = false;
	antiSedimentBarrel = false;
}

A280::A280(string name, string Era, int year, double price, int damage, bool rebellionScope, bool antiSedimentBarrel) : Blaster(name, Era, year, price, damage)
{
	A280::rebellionScope = rebellionScope;
	A280::antiSedimentBarrel = antiSedimentBarrel;
}

bool A280::getrebellionScope()
{
	return rebellionScope;
}

bool A280::getantiSedimentBarrel()
{
	return antiSedimentBarrel;
}

void A280::setrebellionScope(bool rebellionScope)
{
	this->rebellionScope = rebellionScope;
}

void A280::setantiSedimentBarrel(bool antiSedimentBarrel)
{
	this->antiSedimentBarrel = antiSedimentBarrel;
}
void A280::displayDescription()
{
	Blaster::displayDescription();
	if (this->rebellionScope == true)
	{
		cout << "Fitted with a rebellion scope that allows up to 5xs magnification." << endl;
	}
	else if (this->rebellionScope == false)
	{
		cout << "Not fitted with a rebellion scope." << endl;;
	}
	if (this->antiSedimentBarrel == true)
	{
		cout << "Fitted with an anti-sediment barrel, to allow use in snow or rain." << endl;
	}
	else if (this->antiSedimentBarrel == false)
	{
		cout << "Not fitted Fitted with an anti-sediment barrel, be cautious of rain or snow." << endl;
	}

}
