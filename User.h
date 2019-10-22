#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

// Class definition for a User
class User
{
protected:
	string name;
	static int currentID ;      // Users are allocated a unique ID on creation, 
	int id;						// the first User has ID 1, the second User is 2 and so on
public:
	User(string aName) ;  
    void setName(string aName);      
	string getName();
	int getID();                 
	~User();

};
#endif //USER_H