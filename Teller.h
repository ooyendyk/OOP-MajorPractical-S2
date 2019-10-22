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
	void clientSummary(Client clientA);
	~Teller();

};
#endif //TELLER_H