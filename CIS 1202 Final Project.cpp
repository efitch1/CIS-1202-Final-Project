//Eduardo C Fitch
//CIS 1202 Final Project
//20221206

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Blaster.h"
#include "E11.h"
#include "ELG-3A.h"
#include "A280.h"

using namespace std;
int menu();
int main()
{
	E11 e11("E-11", "Clone Wars Era", 15, 2000, 20, false, false);
	ELG3A elg3a("ELG-3A", "Clone Wars Era", 5, 500, 5, false, false);
	A280 a280("A280", "Galactic Civil War", 20, 1500, 18, false, false);
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
			cout << "The total damage is " <<e11.getDamage() + elg3a.getDamage() + a280.getDamage() << " points of damage."<< endl;
			break;
		case 3:
			
			break;
		default:
			break;
		}
	} while (cin>>selection);

















	system("pause");
	return 0;
}
int menu()
{
	int choice;

	cout << "1.See all blasters and specifications" << endl;
	cout << "2.See the total damage of a loadout of one of each of these blasters." << endl;
	cout << "3.The A280 Blaster rifle" << endl;
	cout << "4.Exit and generate report." << endl;
	
	cin >> choice;
	return choice;
}