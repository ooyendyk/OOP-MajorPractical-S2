#ifndef TERMDEPOSIT_H
#define TERMDEPOSIT_H 
#include "Account.h"
using namespace std;

class termDeposit: public Account
{

public: //functions
	termDeposit(int time, float interest);
	virtual void Withdraw(float Amount);
	int getMaturity();
	virtual void setInterest(float interest);
	~termDeposit();

protected: //variables
	int maturity;
	float balance;
	int accountNum;
	float interetRate;
	static int availableNum;

};
#endif //TERMDEPOSIT_H

