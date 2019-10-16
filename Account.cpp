#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

//intitalise the available account number variable
int Account::availableNum=0;

Account::Account() 	// Default constructor of account
{
	availableNum++;
	accountNum=availableNum;
	balance=100;
}

int Account::getAccountNum()		//return account number
{
	return accountNum;
}

float Account::getBalance()		//return Balance
{
	return balance;
}
float Account::getInterest()
{
	return interestRate;
}

void Account::Deposit(double Amount)		//deposit money into account.
{
	if(0>Amount) //if negative amount , display error message
	{

		cout<< "INVALID." << endl;
		cout<< "Cannot deposit negative funds " << endl;

	} else { 		//if not then deposit the following amount.

		balance=balance+Amount;
	}
	
}

void Account::Withdraw(double Amount)		//deposit money into account.
{
	if(balance<Amount) //if not enough funds, display error message
	{

		cout<< "INVALID." << endl;
		cout<< "Not enough funds " << endl;

	} else { 		//if not then withdraw  the following amount.

		balance=balance-Amount;
	}
}
int Account::getMaturity()
{
	return 0;
}

int Account::getInterestRatePeriod()
{
	return 0;
}
Account::~Account()
{
 cout<<"Destroyed account with id: "<<availableNum<<endl;
}

