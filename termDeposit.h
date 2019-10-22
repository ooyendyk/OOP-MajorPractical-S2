#ifndef TERMDEPOSIT_H
#define TERMDEPOSIT_H 
#include "Account.h"
#include <string>
using namespace std;

//Term Deposit class is an account that can only be withdrawn from once it has reached a certain maturity
class termDeposit: public Account
{
public: //functions
	termDeposit(int time, float interest);
	virtual void Withdraw(double Amount);
	virtual int getMaturity();
	virtual void setInterest(float interest);
	virtual string type();
	~termDeposit();

protected: //variables
	int maturity;

};
#endif //TERMDEPOSIT_H

