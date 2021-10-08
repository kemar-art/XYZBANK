#include "xyz.h"
#include <string>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <thread>

using namespace std;

Authen::Authen()
{
	authentication();
}

void Authen::authentication()
{
	{
		char pswd[10];
		char ch;
		int max = 1, count = 0;
		string acc_num = "1234567", usr;
		string cur_password = "1994";

	start:
		system("cls");
		cout << "\n\t\t\tPlease enter your Account and Pin number to access your banking account:\n" << endl;
		//cout << "\nAttempts remaining = " << 3 - max << endl;
		cout << "\n\t\t\t\t\tEnter account number: ";
		cin >> usr;
		cout << "\n\t\t\t\t\tEnter your four digit Pin: ";
		for (count = 0;;)
		{
			ch = _getch();

			if (ch != 13 && ch != 8)
			{
				pswd[count] = ch;
				count++;
				cout<<"*";
			}

			if (ch == '\r')
			{
				pswd[count] = '\0';
				if (strlen(pswd) < 4 || strlen(pswd) > 4)
				{
					system("cls");
					cout << "\n";
					cout << "\n\t\t\t\t\t Invalid Password lenght\n\n";
					this_thread::sleep_for(chrono::seconds(2));
					goto start;
				}
				//cout << "\n\nPassword lenght accepted";
				//this_thread::sleep_for(chrono::seconds(3));

				break;
			}

			if (ch == '\b')
			{
				if (count > 0)
				{
					cout << "\b \b";
					count--;
				}
			}
		}
		pswd[count] = '\0';

		if (pswd == cur_password && usr == acc_num)
		{
			goto end;
		}

		if (max < 3)
		{
			if (pswd != cur_password)
			{
				system("cls");
				cout << "\n\t\t\t\t\tincorrect Password\n";
				cout << "\n\t\t\t\t\tAttempts remaining = " << 3 - max << endl;
				this_thread::sleep_for(chrono::seconds(3));
				max++;
				system("cls");
				goto start;
			}

			if (usr != acc_num)
			{
				system("cls");
				cout << "\n\t\t\t\t\tThe account number is incorrect\n";
				this_thread::sleep_for(chrono::seconds(2));
				max++;
				goto start;
			}
		}

		if (max == 3)
		{
			system("cls");
			cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
			cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~XYZ BANK*~*~*~*~*~*~*~";
			cout << "\n\t\t\t\t\t~*~*~Thank you for your business~*~*~";
			cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
			cout << "\n\t\t\t\t\t     Too many invalid attempts\n"; 
			cout << "\n\t\t\t\t\tContact your nearest financial institution\n";
			this_thread::sleep_for(chrono::seconds(3));
			cout << "\n\t\t\t\t\t       Please take your card.  \n";
			this_thread::sleep_for(chrono::seconds(3));
			cout << "\n\t\t\t\t\t        *Have a nice day!*\n";
			cout << "\n\t\t\t\t\t              (^_^) \n";
			exit(0);
			EXIT_FAILURE;
		}
	}
end:
	system("cls");
	animation();
}

Account::Account(double init_balance) {

	
	balance = init_balance;
	if (balance >= 1000)
	{
		cout << fixed;
		cout << setprecision(2);
		balance = init_balance;
	}

	else
	{
		cout << fixed;
		cout << setprecision(2);
		balance = 0;
		cout << "The initial balance is invalid. Your current Balance is $0.00" << endl;
		exits();
	}

}

void Account::setbalance()
{
	double init_balance = 0;
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout << "\n\t\t\t\t\tEnter Balance $";
	cin >> init_balance;
	balance = init_balance;
	balance = init_balance;
	if (balance >= 1000)
	{
		cout << fixed;
		cout << setprecision(2);
		balance = init_balance;
	}

	else
	{
		system("cls");
		cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
		cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
		cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		balance = 0;
		cout << "\n\t\t\t\t\tThe initial balance is invalid.\n";
		cout << "\n\t\t\t\t\tYour current Balance is $0.00\n";
		this_thread::sleep_for(chrono::seconds(3));
		exits();
	
	}
	
}

bool Account::deposit(double amount)
{
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";


	cout << "\n\t\t\t\t\tPlease enter deposit amount: $";
	cin >> amount;
	cout << fixed;
	cout << setprecision(2);
	balance = balance + amount;
	animation2();
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout << /*"\n \n***** $" << amount <<*/ "\n\t\t\t\t\tYour transaction was successful. \n";
	getbalance2();
	return true;
}

void Account::getbalance()
{
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout << fixed;
	cout << setprecision(2);
	cout << fixed << setprecision(2) << "\n\t\t\t\t\tYour account balance is: $" << balance;
	this_thread::sleep_for(chrono::seconds(5));
}

void Account::getbalance2()
{
	cout << fixed;
	cout << setprecision(2);
	cout << fixed << setprecision(2) << "\n\t\t\t\t\tYour current balance is: $" << balance <<" ";
	this_thread::sleep_for(chrono::seconds(5));
}

bool Account::withdraw(double amount)
{
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout << "\n\t\t\t\t\tEnter the amout you wish to withdraw $";
	cin >> amount;
	if (amount < balance)
	{
		cout << fixed;
		cout << setprecision(2);
		balance = balance - amount;
		system("cls");
		cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
		cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
		cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		cout << "\n\t\t\t\t Please wait while your transaction is being process\n";
		this_thread::sleep_for(chrono::seconds(2));
		animation2();
		cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
		cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
		cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		cout <<  "\n\t\t\t\t\tYour withdrawal was: $" << amount <<"\n";
		this_thread::sleep_for(chrono::seconds(5));
		getbalance2();
	}

	else
	{
		system("cls");
		cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
		cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
		cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		cout << "\n\t\t\t\t\tDebit amount exceeded account balance. " << endl;
		cout << fixed;
		cout << setprecision(2);
		this_thread::sleep_for(chrono::seconds(5));
		getbalance();
	}
	return false;
}

void Account::exits()
{
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~XYZ BANK*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~Thank you for your business~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout << "\n\t\t\t\t\t       Please take your card.  \n";
	this_thread::sleep_for(chrono::seconds(3));
	cout << "\n\t\t\t\t\t        *Have a nice day!*\n";
	cout << "\n\t\t\t\t\t              (^_^) \n";
	//this_thread::sleep_for(chrono::seconds(3));
	exit(0);
}

void Account:: menu()
{
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";

	cout << "\n\n\t\t\t\t\t1. Deposit              2. Withdraw";
	cout << "\n\n\t\t\t\t\t3. Balance Inquiry      4. Change Initial Balance";
	cout << "\n\n\t\t\t\t\t                        5. Exit   ";
}

void Account::Display()
{
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
}

void Authen:: animation()
{
	cout<<"\n\n\n\n\t\t\t\t\tIni....\n";
	this_thread::sleep_for(chrono::seconds(1));
	system("cls");
	cout << "\n\n\n\n\t\t\t\t\tIntial....\n";
	this_thread::sleep_for(chrono::seconds(1));
	system("cls");
	cout << "\n\n\n\n\t\t\t\t\tGetting Things Ready..\n";
	this_thread::sleep_for(chrono::seconds(2));
	system("cls");
	cout << "\n\n\n\n\t\t\t\t\tInitiali...\n";
	this_thread::sleep_for(chrono::seconds(1));
	system("cls");
	cout << "\n\n\n\n\t\t\t\t\tInitializing.....\n";
	this_thread::sleep_for(chrono::seconds(2));
	system("cls");
	cout << "\n\n\n\n\t\t\t\t\tInitialization completed...\n";
	this_thread::sleep_for(chrono::seconds(2));
	system("cls");
}
void Account::animation2()
{
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\n\n\t\t\t\t\tPro....";
	this_thread::sleep_for(chrono::seconds(1));
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\n\n\t\t\t\t\tProce....";
	this_thread::sleep_for(chrono::seconds(1));
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\n\n\t\t\t\t\tProcess....";
	this_thread::sleep_for(chrono::seconds(1));
	system("cls");
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~WELCOME XYZ BANK~*~~*~*~*~";
	cout << "\n\t\t\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout << "\n\n\n\t\t\t\t\tProcessing.....";
	this_thread::sleep_for(chrono::seconds(2));
	system("cls");
}

