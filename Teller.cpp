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


Teller::Teller(string Name):User(Name){

}
void Teller::clientSummary(Client clientA){
	
	for(int i=0;i<clientA.accountNum;i++){
		cout<<"Account "<<i+1<<":"<<endl;
		cout<<"Account Number: "<<clientA.accountArray[i]->getAccountNum()<<endl;
		cout<<"Balance: "<<clientA.accountArray[i]->getBalance()<<endl;
	}

}
Teller::~Teller(){
}