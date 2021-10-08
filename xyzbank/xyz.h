#pragma once
class Authen
{
		
public:
	void authentication();
    Authen();
	void animation();
};

class Account {

private:
	double balance;

public:
	Account( double init_balance);

	void setbalance();
	bool deposit(double amount);
	bool withdraw (double amount);
	void getbalance();
	void getbalance2();
	void menu();
	void animation2();
	void exits();
	void Display();
	
};