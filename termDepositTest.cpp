#include <iostream>
#include <assert.h>
#include <cfloat>
#include "Account.h"
#include "termDeposit.h"
#include "User.h"


int main() {

	int maturityTime = 12;
	termDeposit termDeposit0(maturityTime, 3.0);

	try {
		termDeposit termDeposit0(maturityTime, 3.0);
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with the initializer" << std::endl;
		termDeposit termDeposit0(maturityTime, 3.0);
	}

	try {
		assert(termDeposit0.getMaturity() == maturityTime);
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with getMaturity()" << std::endl;
		assert(termDeposit0.getMaturity() == maturityTime);
	}

	try {
		termDeposit0.Deposit(10.0);
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with Deposit()" << std::endl;
		termDeposit0.Deposit(10.0);
	}

	try {
		termDeposit0.Withdraw(1.0);
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with Withdraw()" << std::endl;
		termDeposit0.Withdraw(1.0);
	}

	try {
		termDeposit0.setInterest(6.0);
	} catch(...) {
		std::cout << "Error: Looks like theres a problem with setInterest()" << std::endl;
		termDeposit0.setInterest(6.0);
	}

}