#ifndef BLASTER_H_
#define BLASTER_H_
#include <iostream>

using namespace std;
//Base class
class Blaster
{
//private variables for all blasters
private:
	string name;
	string Era;
	int year;
	double price;
	int damage;
//public functions for all blasters
public:
	Blaster();
	Blaster(string name,string Era, int year, double price, int damage);//Blaster constructor
	string getName();//get the name of the blaster
	string getEra();//get the Star Wars Era for the blaster
	int getYear();//get the year the blaster was created
	double getPrice();//price of the blaster in credits
	int getDamage();//get the power of the blaster
	//setters
	void setName(string name);
	void setEra(string Era);
	void setYear(int year);
	void setPrice(double price);
	void setDamage(int damage);
	//displays all the info of the blasters
	void displayDescription();
};

#endif


