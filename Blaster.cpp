#include <iostream>
#include "Blaster.h"

using namespace std;
Blaster::Blaster()
{
	Blaster::name = "";
	Blaster::Era = "";
	Blaster::year = 0;
	Blaster::price = 0;
	Blaster::damage = 0;
}

Blaster::Blaster(string name,string Era, int year, double price, int damage)
{
	this->name = name;
	this->Era = Era;
	this->year = year;
	this->price = price;
	this->damage = damage;
}
string Blaster::getName()
{
	return name;
}

string Blaster::getEra()
{
	return Era;
}

int Blaster::getYear()
{
	return year;
}

double Blaster::getPrice()
{
	return price;
}

int Blaster::getDamage()
{
	return damage;
}

void Blaster::setName(string name)
{
	this->name = name;
}
void Blaster::setEra(string Era)
{
	this->Era = Era;
}

void Blaster::setYear(int year)
{
	this->year = year;
}

void Blaster::setPrice(double price)
{
	this->price = price;
}

void Blaster::setDamage(int damage)
{
	this->damage = damage;
}

void Blaster::displayDescription()
{
	cout << "Blaster Name: " << getName() << endl;
	cout << "Blaster Era:" << getEra() << endl;
	cout << "Year: " << getYear() << endl;
	cout << "Credits: " << getPrice() << endl;
	cout << "Damage: " << getDamage() << endl;
}
