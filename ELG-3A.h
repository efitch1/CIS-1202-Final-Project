#ifndef ELG3A_H_
#define ELG3A_H_
#include <iostream>
#include "Blaster.h"

using namespace std;

class ELG3A :public Blaster
{
private:
	//private variables only for this blaster
	bool nabooUnderwaterCapacitor;
	bool grapplingHook;

public:
	ELG3A();
	ELG3A(string name, string Era, int year, double price, int damage, bool imperialScope, bool ionizedShots);
	bool getnabooUnderwaterCapacitor();
	bool getgrapplingHook();
	void setnabooUnderwaterCapacitor(bool nabooUnderwaterCapacitor);
	void setgrapplingHook(bool grapplingHook);
	void displayDescription();
};

#endif