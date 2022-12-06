#ifndef E11_H_
#define E11_H_
#include <iostream>
#include "Blaster.h" //header file name

using namespace std;

class E11 :public Blaster //derived class
{
private:

	bool imperialScope;//This blaster has an imperial scope
	bool ionizedShots;//This blaster can have ionized shots, more effective against droids

public:
	E11();
	E11(string name,string Era, int year, double price, int damage, bool imperialScope, bool ionizedShots);//constructor
	bool getImperialScope();
	bool getIonizedshots();
	void setImperialScope(bool imperialScope);
	void setIonizedshots(bool ionizedShots);
	void displayDescription();
};

#endif