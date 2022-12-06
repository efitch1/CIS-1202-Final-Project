//Eduardo C Fitch
//CIS 1202 Final Project
//20221206

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Blaster.h"
#include "E11.h"

using namespace std;
int menu();
int main()
{
	E11 e11("E-11", "Clone Wars Era", 15, 2000, 20, false, false);
	int selection;
	cout << "Select your blaster to see all the specifications." << endl;
	selection = menu();

	switch (selection)
	{
	case 1:
		e11.displayDescription();
		break;
	case 2:

		break;
	case 3:

		break;
	default: 
		break;
	}
	

















	system("pause");
	return 0;
}
int menu()
{
	int choice;

	cout << "1.The E-11 Blaster Rifle." << endl;
	cout << "2.The ELG-3A Blaster Pistol" << endl;
	cout << "3.The A280 Blaster rifle" << endl;
	cout << "4.Exit and generate report." << endl;
	
	cin >> choice;
	return choice;
}