#include <iostream>
#include <assert.h>
#include "User.h"

int main() {
	User user0("Chad Channing");
	try {
		//User user0("Chad Channing");
		User user1("Kurt Cobain");
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with the initializer" << std::endl;
		User user1("Kurt Cobain");
	}

	try {
		assert(user0.getName() == "Chad Channing");
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with the getter" << std::endl;
		assert(user0.getName() == "Chad Channing");
	}

	try {
		user0.setName("Dave Grohl");
		assert(user0.getName() == "Dave Grohl");
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with the setter" << std::endl;
		assert(user0.getName() == "Dave Grohl");
	}

	try {
		assert(user0.getID() == 0);
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with getID()" << std::endl;
		assert(user0.getID() == 0);
	}

	/*try {
		assert(user1.getID() == 1);
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with the iterator of workerID" << std::endl;
		assert(user1.getID() == 1);
	}*/
}