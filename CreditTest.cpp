#include <iostream>
#include <assert.h>
#include <cfloat>
#include "Account.h"
#include "Credit.h"
#include "User.h"


int main() {

	int interestRatePeriod = 30;

	try {
		credit0 Credit();
	} catch {
		std::cout << "Error: Looks like theres a problem with the initializer" << std::endl;
		credit0 Credit();
	}

	try {
		credit0.setInterest(6.0);
	} catch {
		std::cout << "Error: Looks like theres a problem with setInterest()" << std::endl;
		credit0.setInterest(6.0);
	}

	try {
		credit0.setInterestRatePeriod(interestRatePeriod);
	} catch {
		std::cout << "Error: Looks like theres a problem with setInterestRatePeriod()" << std::endl;
		credit0.setInterestRatePeriod(interestRatePeriod);
	}

	try {
		assert(credit0.getInterestRatePeriod() == interestRatePeriod);
	} catch {
		std::cout << "Error: Looks like theres a problem with getInterestRatePeriod()" << std::endl;
		assert(credit0.getInterestRatePeriod() == interestRatePeriod);
	}

}