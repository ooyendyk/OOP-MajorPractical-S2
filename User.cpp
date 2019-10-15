#include "User.h"
#include <string>
#include <iostream>
using namespace std;

int User::currentID = 0;

User::User(string aName){ // a name must be provided to create a user
	id = currentID; //assign ID
	currentID++;

	name = aName;
	//cout<<"created an User with ID: "<<id<<endl;
} 
void User::setName(string aName){
//change user name
	name = aName;
}   
string User::getName(){
//return the name of a user
	return name;
}
int User::getID(){
//return ID of a user
	return id;
}                      
User::~User(){

	// cout<<"Destroyed User with ID: "<<id<<endl;
}

