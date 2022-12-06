#ifndef E11_H_
#define E11_H_
#include <iostream>
#include "Blaster.h"

using namespace std;

class E11 :public Blaster
{
private:

	bool imperialScope;
	bool ionizedShots;

public:
	E11();
	E11(string name,string Era, int year, double price, int damage, bool imperialScope, bool ionizedShots);
	bool getImperialScope();
	bool getIonizedshots();
	void setImperialScope(bool imperialScope);
	void setIonizedshots(bool ionizedShots);
	void displayDescription();
};

#endif