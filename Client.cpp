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


Client *ptr = new User();


Client::Client(string aName):User(aName){
	accountNum = 0;
	accountArray = new Account*[100];


	std::cout << "Create" << &accountArray << endl;
}
void Client::inspectAccount(int number){
//Display account data of a specific account
	Account* account = accountArray[number];
	cout<<"Account number: "<<account->getAccountNum()<<endl;
	cout<<"Balance: "<<account->getBalance()<<endl;
	cout<<"Interest rate: "<<account->interestRate<<endl;

}
void Client::summary(){
//Display all accounts owned by a client and their balance
	for(int i=0;i<accountNum;i++){
		cout<<"No. "<<accountArray[i]->getAccountNum()<<endl;
		cout<<"Balance: "<<accountArray[i]->getBalance()<<endl;
	}
}
void Client::addAccount(Account* newAccount){
//Add an account to a client
	accountArray[accountNum] = newAccount;
	accountNum++;
}
Client::~Client(){
	std::cout << &accountArray << endl;

	delete[] accountArray;
}

/*
	if (typeid(account)==typeid(termDeposit)){
		cout<<"Term Deposit Account"<<endl;
	}else if(typeid(account)==typeid(Credit)){
		cout<<"Credit Account"<<endl;
	}
	*/