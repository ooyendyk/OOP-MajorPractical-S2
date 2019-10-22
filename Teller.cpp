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
void Teller::clientSummary(Client* CArray[], int size, string client){
//prints a summary of a client's accounts
	//check client array comparing name state with string input
	int point;
		for(int i=0; i<size; i++){
			if(client==CArray[i]->getName()){
				point = i; 

			}
		}

	//Display a list of accounts owned by a specific client, displaying their account number and balance	 
		for(int i=0;i<CArray[point]->accountNum;i++){
			cout<<"Account "<<i+1<<":"<<endl;
			cout<<"Account Number: "<<CArray[point]->accountArray[i]->getAccountNum()<<endl;
			cout<<"Balance: "<<CArray[point]->accountArray[i]->getBalance()<<endl;
		}

}
Teller::~Teller(){
	
}