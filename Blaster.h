#ifndef BLASTER_H_
#define BLASTER_H_
#include <iostream>

using namespace std;

class Blaster
{
private:
	string name;
	string Era;
	int year;
	double price;
	int damage;

public:
	Blaster();
	Blaster(string name,string Era, int year, double price, int damage);
	string getName();
	string getEra();
	int getYear();
	double getPrice();
	int getDamage();
	void setName(string name);
	void setEra(string Era);
	void setYear(int year);
	void setPrice(double price);
	void setDamage(int damage);
	void displayDescription();
};

#endif


