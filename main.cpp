//g++ -std=c++17 -o exe User.h Client.h main.cpp

// #include "Account.h"
// #include "termDeposit.h"
// #include "Credit.h"
#include "User.h"
#include "Client.h"
// #include "Teller.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int choose(int items) {
	int choice = 0;

	for (;;) {
		cin >> choice;
		if (cin.fail()) {
			cout << "Sorry, I don't understand that. Try entering the number of your choice." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;		
		}
		if (choice < 1 || choice > items) {
			cout << "Sorry, that's not an option." << endl;
			continue;
		}
		return choice;
	}
	// return 0;
}

int main() {
	int choice = 0;
	vector<Client> clientList;
	string stringBuffer;

	for(;;) {
		choice = choose(1);

		if(choice == 1) {
			cout << "Please enter the full name of the client" << endl;
			cin >> stringBuffer;
			Client client(stringBuffer);
			clientList.insert(clientList.begin(), client);
		}
	}
}
