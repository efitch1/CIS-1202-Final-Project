#include <iostream>
#include "Blaster.h"
#include "ELG-3A.h"

using namespace std;

ELG3A::ELG3A() : Blaster()
{
	nabooUnderwaterCapacitor = false;
	grapplingHook = false;
}

ELG3A::ELG3A(string name, string Era, int year, double price, int damage, bool nabooUnderwaterCapacitor, bool grapplingHook) : Blaster(name, Era, year, price, damage)
{
	ELG3A::nabooUnderwaterCapacitor = nabooUnderwaterCapacitor;
	ELG3A::grapplingHook = grapplingHook;
}

bool ELG3A::getnabooUnderwaterCapacitor()
{
	return nabooUnderwaterCapacitor;
}

bool ELG3A::getgrapplingHook()
{
	return grapplingHook;
}

void ELG3A::setnabooUnderwaterCapacitor(bool nabooUnderwaterCapacitor)
{
	this->nabooUnderwaterCapacitor = nabooUnderwaterCapacitor;
}

void ELG3A::setgrapplingHook(bool grapplingHook)
{
	this->grapplingHook = grapplingHook;
}
void ELG3A::displayDescription()
{
	Blaster::displayDescription();
	if (nabooUnderwaterCapacitor = true)
	{
		cout << "Fitted with a special Naboo underwater capacitor that allows firing underwater." << endl;
	}
	else if (nabooUnderwaterCapacitor = false)
	{
		cout << "Not fitted with a special Naboo underwater capacitor that allows firing underwater." << endl;;
	}
	if (grapplingHook = true)
	{
		cout << "Fitted with a grappling hook, to allow a quick escape." << endl;
	}
	else if (grapplingHook = false)
	{
		cout << "Not fitted with a grappling hook." << endl;
	}

}
