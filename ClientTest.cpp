#include <iostream>
#include <assert.h>
#include "User.h"
#include "Teller.h"
#include "Client.h"

int main() {
	try {
		client0 Client("Chad Channing");
	} catch {
		std::cout << "Error: Looks like theres a problem with the initializer" << std::endl;
		client0 Client("Chad Channing");
	}

	//inspectAccount() requires manual testing.

	//summary() requires manual testing.
}