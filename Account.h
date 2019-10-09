#ifndef ACCOUNT_H
#define ACCOUNT_H 
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
	void Deposit(double  Amount);
	virtual void Withdraw(double Amount); //virtual
	~Account();
	virtual void setInterest(float interest)=0; //pure virtual

	friend class Client;
};
#endif //ACCOUNT_H
