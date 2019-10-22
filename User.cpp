#include "User.h"
#include <string>
#include <iostream>
using namespace std;

int User::currentID = 0;

User::User(string aName){ // a name must be provided to create a user
	id = currentID;
	currentID++;

	name = aName;
	//cout<<"created an User with ID: "<<id<<endl;
} 
void User::setName(string aName){
	name = aName;
}   
string User::getName(){
	return name;
}
int User::getID(){
	return id;
}                      
User::~User(){

	cout<<"Destroyed User with ID: "<<id<<endl;
}

