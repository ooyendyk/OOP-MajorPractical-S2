//g++ -std=c++17 -o exe User.h Client.h main.cpp

#include <iostream>
#include <limits>
#include <vector>
//#include <variant>
#include <string>
#include <sstream>

#include "assert.h"
#include "User.h"
#include "Client.h"
#include "Account.h"
#include "termDeposit.h"
#include "Credit.h"
#include "Teller.h"

using namespace std;

// TODO: Refactor into helper file
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
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return choice;
	}
}

int main() {
	vector<Client> clientList;
	string stringBuffer;
	int choice = 0;
	int clientID = 0;
	int maturity = 0;
	int intrest = 0;

	cout << "Welcome to Banker Suit Pro 365" << endl;
	cout << endl;

	for(;;) {
		cin.clear();
		string stringBuffer = "";
		choice = 0;
		clientID = 0;
		maturity = 0;
		intrest = 0;

		cout << "1 Create client" << endl;
		cout << "2 Print client list" << endl;
		cout << "3 quit" << endl;
		cout << "4 Add client account" << endl;

		choice = choose(6);

		//TODO: Maybe we should refactor this into functions?
		if(choice == 1) {
			cout << "Please enter the full name of the client" << endl;
			getline(cin, stringBuffer);
			// cin >> stringBuffer;
			
			// std::cout << "Hello";
			// std::cout.flush();

			Client client(stringBuffer);
			clientList.push_back(client);
		
		} else if(choice == 2) {
			// cout << "SizeOF: " << clientList.size() << endl;
			// cout << clientList[0].getName() << endl;
			// cout << clientList[1].getName() << endl;
			for(int i = 0; i < clientList.size(); i++) {
				cout << clientList[i].getName() << endl;
			}
		
		} else if(choice == 3) {
			return 0;
		
		} else if(choice == 4) {
			cout << "What type of account do you want?" << endl;
			cout << "1 Credit" << endl;
			cout << "2 Term deposit" << endl;
			choice = choose(2);
			cout << "Please enter the client ID" << endl;
			cin >> clientID;
			//TODO: Refactor recursive, hard to read 'else if' statments.
			if (choice == 1) {
				Credit* account = new Credit();
				clientList[clientID].addAccount(account);
			} else if(choice == 2) {
				cout << "Please enter the maturity" << endl;
				cin >> maturity;
				cout << "Please enter the intrest rate" << endl;
				cin >> intrest;
				termDeposit* account = new termDeposit(maturity, intrest);
				clientList[clientID].addAccount(account);
			}
		}
	}
}
