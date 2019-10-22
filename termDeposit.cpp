#include <iostream>
#include <string>
#include "Account.h"
#include "termDeposit.h"


termDeposit::termDeposit(int time, float interest)
//constructor requires maturity time and interest rate
{
	maturity=time;
	interestRate=interest;
}

int termDeposit::getMaturity() //return maturity
{
	return maturity;
}

void termDeposit::Withdraw(double Amount) //will withdraw when maturity is 0 only
{
	if (maturity==0) {
		balance=balance-Amount;
	} else {
		cout << "Account has not reached its maturity. Cannot Withdraw" << endl;
	}
}

 void termDeposit::setInterest(float interest) 	//set the interest rate specific to term deposit
{
	interestRate=interest;
}
string termDeposit::type(){
//returns a string of the type of the class
	return("termDeposit");
}
termDeposit::~termDeposit()
{

}