#ifndef CREDIT_H
#define CREDIT_H 
#include "Account.h"
using namespace std;

//Credit account with an interest rate and interest rate peiod
class Credit : public Account
{
protected://variables
	int interestRatePeriod; //interest rate period kept protected
	
public://methods
	Credit();
	virtual void setInterest(float interest);
	void setInterestRatePeriod(int period);
	virtual int getInterestRatePeriod();
	virtual string type();
	~Credit();
};
#endif //CREDIT_H
