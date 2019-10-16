#ifndef CREDIT_H
#define CREDIT_H 
#include "Account.h"
using namespace std;

class Credit : public Account
{
protected:
	/*float balance;
	int accountNum;
	static int availableNum;
	float interestRate;*/
	int interestRatePeriod;

public:
	Credit();
	virtual void setInterest(float interest);
	void setInterestRatePeriod(int period);
	virtual int getInterestRatePeriod();
	virtual string type();
	~Credit();
};
#endif //CREDIT_H
