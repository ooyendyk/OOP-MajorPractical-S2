#ifndef TERMDEPOSIT_H
#define TERMDEPOSIT_H 
#include "Account.h"
#include <string>
using namespace std;

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
	//float balance;
	//int accountNum;
	//float interetRate;
	//static int availableNum;

};
#endif //TERMDEPOSIT_H

