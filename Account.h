#ifndef ACCOUNT_H
#define ACCOUNT_H 
#include <string>
using namespace std;

class Account
{
protected: //varaiables 
	int accountNum;
	float balance;
	static int availableNum;
	float interestRate;

public: //methods
	Account();
	int getAccountNum();
	float getBalance();
	float getInterest();
	void Deposit(double  Amount);
	virtual void Withdraw(double Amount); //virtual
	virtual int getMaturity();
	virtual int getInterestRatePeriod();
	virtual ~Account();
	virtual void setInterest(float interest)=0; //pure virtual
	virtual string type()=0;

	friend class Client;
};
#endif //ACCOUNT_H
