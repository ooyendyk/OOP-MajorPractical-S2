#include <iostream>
#include "assert.h"
#include "User.h"
#include <string>
#include "Client.h"
#include "Account.h"
#include "termDeposit.h"
#include "Credit.h"
#include "Teller.h"
using namespace std;

int main() {
Client user0("Bachar Houli ");
Client user1("Dusty Martin ");

cout<<user0.getName()<<user0.getID()<<endl;
cout<<user1.getName()<<user1.getID()<<endl;

termDeposit* a1 = new termDeposit(5,1.05);
user0.addAccount(a1);
//user0.inspectAccount(0);

//user0.summary();

Teller teller1("Jack Reiwoldt");
teller1.clientSummary(user0);

delete a1;

return 0;
}