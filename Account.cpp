#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

//intitalise the available account number variable
int termDeposit::availableNum=0;

Account::Account() 	// Default constructor of account
{
	accountNum=availableNum;
	availableNum++;
	balance=0;
}

int Account::getAccountNum()		//return account number
{
	return accountNum;
}

float Account::getBalance()		//return Balance
{
	return balance;
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

void virtual Account::Withdraw(double Amount)		//deposit money into account.
{
	if(balance<Amount) //if not enough funds, display error message
	{

		cout<< "INVALID." << endl;
		cout<< "Not enough funds " << endl;

	} else { 		//if not then withdraw  the following amount.

		balance=balance-Amount;
	}
}

Account::~Account()
{

}

