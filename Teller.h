#ifndef TELLER_H
#define TELLER_H
#include "Account.h"
#include "User.h"
#include "Client.h"
#include <string>
using namespace std;

// Creates a Teller class that can access a client's information, including their account information
class Teller : public User
{
public://variables
	Teller(string Name);         // create a Teller of a given name
	void clientSummary(Client* CArray[2], int size, string client);
	~Teller();

};
#endif //TELLER_H