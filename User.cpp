#include "User.h"
#include <string>
#include <iostream>
using namespace std;

int User::currentID = 0;

User::User(string aName){ // a name must be provided to create a user
	id = currentID;
	currentID++;

	name = aName;
	
} 
void User::setName(string aName){
//change the name of a user
	name = aName;
}   
string User::getName(){
//return the name of a user
	return name;
}
int User::getID(){
//return the ID of a user
	return id;
}                      
User::~User(){

	cout<<"Destroyed User with ID: "<<id<<endl;
}

