#ifndef TELLER_H
#define TELLER_H
#include "Account.h"
#include "User.h"
#include "Client.h"
#include <string>
using namespace std;

// Class definition for a Teller
class Teller : public User
{
public:
	Teller(string Name);         // create a Teller of a given name
	void clientSummary(Client* CArray[2], int size, string client);
	~Teller();

};
#endif //TELLER_H