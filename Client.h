#ifndef CLIENT_H
#define CLIENT_H
#include "Account.h"
#include "User.h"
#include <string>
#include <cfloat>
using namespace std;

// Class definition for a Client
class Client : public User
{
protected:
	Account** accountArray;	//define 32 as max no. of accounts
	int accountNum;

public:
	Client(string aName);         // create a Client of a given name
	void inspectAccount(int number);
	void summary();
	void addAccount(Account *newAccount);
	~Client();

	friend class Teller;
};
#endif //CLIENT_H