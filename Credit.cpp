#include <iostream>
#include <string>
#include "Account.h"
#include "Credit.h"


Credit::Credit() //creates an credit account with 0 interest details
{ 	
	interestRatePeriod=0;
	interestRate=0;
}

void Credit::setInterest(float interest)	
//set the interest rate for the credit account
{
	interestRate=interest;
}

void Credit::setInterestRatePeriod(int period)	
//set the interest rate period
{
	interestRatePeriod=period;
}

int Credit::getInterestRatePeriod()		
//return the period
{
	return interestRatePeriod;
}
string Credit::type(){
//return a string matching the type of the Account class
	return("Credit");
}

Credit::~Credit()
{
}
