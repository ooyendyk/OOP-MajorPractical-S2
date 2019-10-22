#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

// Creates a User class that holds basic functionalities of a user and that other users derive from
class User
{
protected://variables
	string name;
	static int currentID ;      // Users are allocated a unique ID on creation, 
	int id;						// the first User has ID 1, the second User is 2 and so on
public://methods
	User(string aName) ;  
    void setName(string aName);      
	string getName();
	int getID();                 
	virtual ~User();

};
#endif //USER_H