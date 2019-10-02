#include <iostream>
#include <assert.h>
#include <cfloat>
#include "Account.h"
#include "User.h"

int main() {
	try {
		account0 Account();
		account1 Account();
		account2 Account();
		account3 Account();
		account4 Account();
	} catch {
		std::cout << "Error: Looks like theres a problem with the initializer" << std::endl;
		account0 Account();
	}

	try {
		assert(account0.getAccountNum() == 0);
	} catch {
		std::cout << "Error: Looks like theres a problem with getID()" << std::endl;
		assert(account0.getAccountNum() == 0);
	}

	try {
		assert(account1.getAccountNum() == 1);
	} catch {
		std::cout << "Error: Looks like theres a problem with the iterator of workerID" << std::endl;
		assert(account1.getAccountNum() == 1);
	}

	try {
		assert(account0.getBalance() == 0);
	} catch {
		std::cout << "Error: Looks like theres a problem with getBalance()" << std::endl;
		assert(account0.getBalance() == 0);
	}

	try {
		account0.Deposit(1.0);
	} catch {
		std::cout << "Error: Looks like theres a problem with Deposit()" << std::endl;
		account0.Deposit(1.0);
	}

	try {
		assert(account0.getBalance() == 1);
	} catch {
		std::cout << "Error: Looks like Deposit() isn't adding properly" << std::endl;
		assert(account0.getBalance() == 1);
	}
	//Edge testing deposit (max)
	try {
		account1.Deposit(FLT_MAX);
	} catch {
		std::cout << "Error: Looks like Deposit() cant deal with a max sized float" << std::endl;
		account1.Deposit(FLT_MAX);
	}
	//Edge testing getBalance (max)
	try {
		assert(account1.getBalance() == FLT_MAX);
	} catch {
		std::cout << "Error: Looks like getBalance() or Deposit() cant deal with a max sized float" << std::endl;
		assert(account1.getBalance() == FLT_MAX);
	}
	//Edge testing deposit (min)
	try {
		account2.Deposit(FLT_MIN);
	} catch {
		std::cout << "Error: Looks like Deposit() cant deal with a min sized float" << std::endl;
		account2.Deposit(FLT_MIN);
	}
	//Edge testing getBalance (min)
	try {
		assert(account2.getBalance() == FLT_MIN);
	} catch {
		std::cout << "Error: Looks like getBalance() or Deposit() cant deal with a min sized float" << std::endl;
		assert(account2.getBalance() == FLT_MIN);
	}
	//Testing withdraw
	try {
		account4.Deposit(10.0);
		account4.Withdraw(1.0);
		assert(account4.getBalance() == 9.0);
	} catch {
		std::cout << "Error: Looks like theres a problem with Withdraw()" << std::endl;
		account4.Deposit(10.0);
		account4.Withdraw(1.0);
		assert(account4.getBalance() == 9.0);
	}


}