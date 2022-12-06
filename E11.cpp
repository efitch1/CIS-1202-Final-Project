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
	E11::imperialScope = imperialScope;
	E11::ionizedShots  = ionizedShots;
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
	this->imperialScope = imperialScope;
}

void E11::setIonizedshots(bool ionizedShots)
{
	this->ionizedShots = ionizedShots;
}
void E11::displayDescription()
{
	//conditional based on boolean
	Blaster::displayDescription();
	if (this->imperialScope == true)
	{
		cout << "Fitted with an imperial scope." << endl;
	}
	else if (this->imperialScope == false)
	{
		cout << "Not fitted with an imperial scope." << endl;;
	}
	if (this->ionizedShots == true)
	{
		cout << "Fires ionized shots, it is more effective against droids." << endl;
	}
	else if (this->ionizedShots ==false)
	{
		cout << "Fires standard imperial rounds." << endl;
	}

}
