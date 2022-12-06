//Eduardo C Fitch
//CIS 1202 Final Project
//20221206

#include <string>
#include <iostream>
#include <cmath>
#include "Blaster.h"//header for base class Blaster
#include "E11.h"//header for derived class E11
#include "ELG-3A.h"//header for derived class ELG3A
#include "A280.h" //header for derived class A280

using namespace std;

int main()
{
	int menu();
	E11 e11("E-11", "Clone Wars Era", 15, 2000, 20, true, true);//Constructor for E-11
	ELG3A elg3a("ELG-3A", "Clone Wars Era", 5, 500, 5, true, false);//Constructor for ELG3A, Testing output here with false, should not have a grappling hook
	A280 a280("A280", "Galactic Civil War", 20, 1500, 18, true, true);//Constructor for A280
	int selection;
	cout << "Select your blaster to see all the specifications." << endl;
	selection = menu();
	do
	{
		switch (selection)
		{
		case 1:
			e11.displayDescription();
			elg3a.displayDescription();
			a280.displayDescription();
			break;
		case 2:
			cout << "The total damage is " <<e11.getDamage() + elg3a.getDamage() + a280.getDamage() << " points of damage."<< endl; //One of each total damage
			break;
		case 3:
			cout << "With a kyber charge crystal, the " << e11.getName() << " gets a modified damage of " << e11.getDamage() * 2 << ", and the price jumps from " << e11.getPrice()<< " credits to "<< e11.getPrice()*3<< " credits."<< endl;
			cout << "With a kyber charge crystal, the " << elg3a.getName() << " gets a modified damage of " << elg3a.getDamage() * 2 << ", and the price jumps from " << elg3a.getPrice() << " credits to " << elg3a.getPrice() * 3 << " credits."<<endl;
			cout << "With a kyber charge crystal, the " << a280.getName() << " gets a modified damage of " << a280.getDamage() * 2 << ", and the price jumps from " << a280.getPrice() << " credits to " << a280.getPrice() * 3 << " credits."<< endl;
			
			break;
		default:
			cout << "That is an invalid selection. Please input 1-4." << endl;
			break;
		}
	} while (cin>>selection);




	system("pause");
	return 0;
}
int menu() //Menu function
{
	int choice;

	cout << "1.See all blasters and specifications" << endl; //Show all stats
	cout << "2.See the total damage of a loadout of one of each of these blasters." << endl; //Add damage for all stats together
	cout << "3.Add a kyber charge to all blasters and view the added damage, and new price." << endl; //See new damage and price after modification
	cout << "4.Exit and generate report of all standard blasters." << endl; //Exit and write to binary file
	
	cin >> choice;
	return choice;
}