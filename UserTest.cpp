#include <iostream>
#include "assert.h"
#include "User.h"
using namespace std;

int main() {
	try {
		User user0("Chad Channing");
		User user1("Kurt Cobain");
	} catch (){
		cout << "Error: Looks like theres a problem with the initializer" << endl;
		User user0("Chad Channing");
	}

	try {
		assert(user0->getName() == "Chad Channing");
	} catch (){
		cout << "Error: Looks like theres a problem with the getter" << endl;
		assert(user0->getName() == "Chad Channing");
	}

	try {
		user0.setName("Dave Grohl");
		assert(user0->getName() == "Dave Grohl");
	} catch (){
		cout << "Error: Looks like theres a problem with the setter" << endl;
		assert(user0->getName() == "Dave Grohl");
	}

	try {
		assert(user0->getID() == 0);
	} catch (){
		cout << "Error: Looks like theres a problem with getID()" << endl;
		assert(user0->getID() == 0);
	}

	try {
		assert(user1->getID() == 1);
	} catch (){
		cout << "Error: Looks like theres a problem with the iterator of workerID" << endl;
		assert(user1->getID() == 1);
	}
}