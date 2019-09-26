#include <iostream>
#include <string>
#include "Account.h"
#include "Credit.h"

//intitalise the available account number variable
int Credit::availableNum=0;

Credit::Credit() //creates an credit account with 0 interest details
{ 	
	accountNum=availableNum;
	availableNum++;
	balance=0;
	interestRatePeriod=0;
	interestRate=0;
}

virtual void Credit::setInterest(float interest)	//set the interest rate for the credit account
{
	interestRate=interest;
}

void Credit::setInterestRatePeriod(int period)	//set the interest rate period
{
	InterestRatePeriod=period;
}

int getInterestRatePeriod()		//return the priod
{
	return InterestRatePeriod;
}

Credit::~Credit()
{
}
