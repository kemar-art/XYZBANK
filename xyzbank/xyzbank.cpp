#include "xyz.h"
#include <string>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv)
{
	Authen obj;
	double amount = 0;
	
	Account bal(1001);

	for (;;)
	{
		system("cls");
		bal.menu();
		int options = 0;
		cin >> options;
		switch (options) {

		case 1:
			bal.deposit(amount);
			break;

		case 2: 
			bal.withdraw(amount);
			break;

		case 3:
			bal.getbalance();
			break;
		case 4:

			bal.setbalance();
			break;
		
		case 5:

			bal.exits();
			break;
		default:

			cout << "xxxxxxx  Please enter a valid option \n" << endl;
		}

	}
	
	
	return 0;
}


