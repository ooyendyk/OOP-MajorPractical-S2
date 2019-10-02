#ifndef TERMDEPOSIT_H
#define TERMDEPOSIT_H 
#include "Account.h"
using namespace std;

class termDeposit: public Account
{

protected: //variables
	int maturity;
	float balance;
	int accountNum;
	float interetRate;
	static int availableNum;

public: //functions
	termDeposit(int time, float interest);
	virtual void Withdraw(double Amount);
	int getMaturity();
	virtual void setInterest(float interest);
	~SavingsAccount();

};
#endif //TERMDEPOSIT_H

