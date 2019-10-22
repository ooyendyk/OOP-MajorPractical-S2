#ifndef CLIENT_H
#define CLIENT_H
#include "Account.h"
#include "User.h"
#include <string>
#include <cfloat>
using namespace std;

// Creates a Client that can create and use up to 32 accounts
class Client : public User
{
protected://variables
	Account** accountArray;	//list of accounts is protected
	int accountNum;

public://methods
	Client(string aName);         // create a Client of a given name
	void inspectAccount(int number);
	void summary();
	void addAccount(Account *newAccount);
	~Client();

	friend class Teller;// uses information from Teller class
};
#endif //CLIENT_H