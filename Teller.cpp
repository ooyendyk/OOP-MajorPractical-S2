#include "Account.h"
#include "termDeposit.h"
#include "Credit.h"
#include "User.h"
#include "Teller.h"
#include "Client.h"
#include <string>
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


Teller::Teller(string Name):User(Name){ //initialiser with name

}
void Teller::clientSummary(Client clientA){ 
// Display a list of accounts owned by a specific client, displaying their account number and balance	 
	for(int i=0;i<clientA.accountNum;i++){
		cout<<"Account "<<i+1<<":"<<endl;
		cout<<"Account Number: "<<clientA.accountArray[i]->getAccountNum()<<endl;
		cout<<"Balance: "<<clientA.accountArray[i]->getBalance()<<endl;
	}

}
Teller::~Teller(){
}