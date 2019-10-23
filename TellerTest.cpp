#include <iostream>
#include <assert.h>
#include "User.h"
#include "Teller.h"
#include "Client.h"

int main() {
	try {
		teller0 Teller("Chad Channing");
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with the initializer" << std::endl;
		teller0 Teller("Chad Channing");
	}

	try {
		client0 Client("Kirst Novoselic");
	} catch(...) {
		std::cout << "Error: There was a problem initializing Client. You'll need to fix this for clientSummary() to work" << std::endl;
		client0 Client("Kirst Novoselic");
	}

	//clientSummary() requires manual testing.
}