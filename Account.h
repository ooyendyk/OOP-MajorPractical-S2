#ifndef ACCOUNT_H
#define ACCOUNT_H 
#include <string>
using namespace std;

//Creates an abstract account class that can hold a balance and interest information
class Account
{
protected:
//varaiables 
	int accountNum;
	float balance;
	static int availableNum;
	float interestRate;

public: 
//methods
	Account();
	int getAccountNum();
	float getBalance();
	float getInterest();
	void Deposit(double  Amount);
	virtual void Withdraw(double Amount); //virtual
	virtual int getMaturity();
	virtual int getInterestRatePeriod();
	virtual void setInterest(float interest)=0; //pure virtual
	virtual string type()=0;
	virtual ~Account();

	friend class Client;//Client uses protected variables of Account
};
#endif //ACCOUNT_H
