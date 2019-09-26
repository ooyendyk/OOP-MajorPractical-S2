#include <iostream>
#include <string>
#include "Account.h"
#include "termDeposit.h"

//intitalise the available account number variable
int termDeposit::availableNum=0;

termDeposit::termDeposit(int time)
{
	//creates an account with a given interest rate and maturity time.
	accountNum=availableNum;
	availableNum++;
	balance=0;
	maturity=time
	interestRate=0;
}

int termDeposit::getMaturity() //return maturity
{
	return maturity;
}

virtual void termDeposit::Withdraw(float Amount) //will withdraw when maturity is 0 only
{
	if (maturity==0) {
		balance=balance-Amount;
	} else {
		cout << "Account has not reached its maturity. Cannot Withdraw" << endl;
	}
}

virtual void termDeposit::setInterest(float interest) 	//set the interest rate specific to term deposit
{
	interestRate=interest
}

termDeposit::~termDeposit()
{

}