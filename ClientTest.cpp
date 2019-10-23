#include <iostream>
#include <assert.h>
#include "User.h"
#include "Teller.h"
#include "Client.h"

int main() {
	Client client0("Chad Channing");
	try {
		Client client1("Dhad Chadding");
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with the initializer" << std::endl;
		Client client1("Dhad Chadding");
	}


	//inspectAccount() requires manual testing.

	//summary() requires manual testing.

	//addAccount() requires manual testing.
}