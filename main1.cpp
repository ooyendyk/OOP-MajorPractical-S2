#include <iostream>
#include "assert.h"
#include "User.h"
using namespace std;

int main() {
User user0("Bachar Houli ");
User user1("Dusty Martin ");

cout<<user0.getName()<<user0.getID()<<endl;
cout<<user1.getName()<<user1.getID()<<endl;

user0.setName("Jason Castagna");
cout<<user0.getName()<<endl;


return 0;
}