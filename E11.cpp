#include <iostream>
#include "Blaster.h"
#include "E11.h"

using namespace std;

E11::E11() : Blaster()
{
	imperialScope = false;
	ionizedShots = false;
}

E11::E11(string name,string Era, int year, double price, int damage, bool imperialScope, bool ionizedShots) : Blaster(name, Era, year, price, damage)
{
	imperialScope = imperialScope;
	ionizedShots  = ionizedShots;
}

bool E11::getImperialScope()
{
	return imperialScope;
}

bool E11::getIonizedshots()
{
	return ionizedShots;
}

void E11::setImperialScope(bool imperialScope)
{
	imperialScope = imperialScope;
}

void E11::setIonizedshots(bool ionizedShots)
{
	ionizedShots = ionizedShots;
}
void E11::displayDescription()
{
	Blaster::displayDescription();
	if (imperialScope = true)
	{
		cout << "Fitted with an imperial scope." << endl;
	}
	else if (imperialScope= false)
	{
		cout << "Not fitted with an imperial scope." << endl;;
	}
	if (ionizedShots = true)
	{
		cout << "Fires ionized shots." << endl;
	}
	else if (ionizedShots=false)
	{
		cout << "Fires standard imperial rounds." << endl;
	}

}
