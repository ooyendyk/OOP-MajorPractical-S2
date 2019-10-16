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
Client* user0 = new Client("Bachar Houli");
Client* user1 = new Client("Dusty Martin");

Client* CArray[2] = {user0, user1};
int size = 2;

cout<<user0->getName()<<user0->getID()<<endl;
cout<<user1->getName()<<user1->getID()<<endl;

termDeposit* a1 = new termDeposit(5,1.05);
user0->addAccount(a1);
//user0.inspectAccount(0);

user0->summary();

Teller* teller1 = new Teller("Jack Reiwoldt");
teller1->clientSummary(CArray, size, "Bachar Houli");

delete user0;
delete user1;

delete a1;
delete teller1;


return 0;
}