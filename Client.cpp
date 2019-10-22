#include "Account.h"
#include "termDeposit.h"
#include "Credit.h"
#include "User.h"
#include "Client.h"
#include <string>
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


Client::Client(string aName):User(aName){
	//create a new array of accounts for client
	accountNum = 0;
	accountArray = new Account*[32]; 
}
void Client::inspectAccount(int number){
//prints information out about a specific account

	Account* account = accountArray[number];
	cout<<"Account number: "<<account->getAccountNum()<<endl;
	cout<<"Balance: $"<<account->getBalance()<<endl;
	cout<<"Interest rate: "<<account->interestRate<<endl;

}
void Client::summary(){
	//Display all accounts owned by a client and their balance

	for(int i=0;i<accountNum;i++){
	//iterate through account array to display information about each account
		if(accountArray[i]->type() == "Credit"){ //Display specific information about whether account is Credit or Term deposit
			cout<<"Credit Account"<<endl;
		}else if(accountArray[i]->type() == "termDeposit"){
			cout<<"Term Deposit Account"<<endl;
		}
		cout<<"No. "<<accountArray[i]->getAccountNum()<<endl;
		cout<<"Balance: $"<<accountArray[i]->getBalance()<<endl;
		cout<<"Interest rate: "<<accountArray[i]->getInterest()<<endl;
		if(accountArray[i]->type() == "Credit"){
			cout<<"Interest rate period: "<<accountArray[i]->getInterestRatePeriod()<<endl;
		}else if(accountArray[i]->type() == "termDeposit"){
			cout<<"Maturity: "<<accountArray[i]->getMaturity()<<endl;
		}
		
	}
}
void Client::addAccount(Account* newAccount){ 
//Add an account to a client
	if(accountNum!=32){// max accounts per client is 32
		accountArray[accountNum] = newAccount;
		accountNum++;
	}else{
		cout<<"You have too many accounts"<<endl;
	}
}
Client::~Client(){
	//free account array when finished
	delete[] accountArray;
}

