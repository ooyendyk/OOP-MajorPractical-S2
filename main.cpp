//g++ -std=c++17 -o exe User.h Client.h main.cpp

#include <iostream>
#include <limits>
#include <vector>
#include <variant>
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
	vector<Client*> clientList;
	vector<Teller*> tellerList;

	cout << "Welcome to Banker Suit Pro 365" << endl;
	cout << endl;

	for(;;) {
		int clientID = 0;
		int accountNo = 0;
		int maturity = 0;
		int intrest = 0;
		int choice = 0;
		string stringBuffer = "";

		cout << "1 Create client" << endl;
		cout << "2 Print client list" << endl;
		cout << "3 Quit" << endl;
		cout << "4 Add client account" << endl;
		cout << "5 View client summary" << endl;
		cout << "6 Inspect account" << endl;
		cout << "7 Create teller" << endl;
		cout << "8 Print teller list" << endl;

		choice = choose(8);

		//TODO: Maybe we should refactor this into functions?
		if(choice == 1) {
			cout << "Please enter the full name of the client" << endl;
			getline(cin, stringBuffer);
			Client* client = new Client(stringBuffer);
			clientList.push_back(client);
		
		} else if(choice == 2) {
			for(int i = 0; i < clientList.size(); i++) {
				cout << clientList[i]->getName() << endl;
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
				clientList[clientID]->addAccount(account);
			} else if(choice == 2) {
				cout << "Please enter the maturity" << endl;
				cin >> maturity;
				cout << "Please enter the intrest rate" << endl;
				cin >> intrest;
				termDeposit* account = new termDeposit(maturity, intrest);
				clientList[clientID]->addAccount(account);
			}
		} else if(choice == 5) {
			cout << "Please enter the client ID" << endl;
			cin >> clientID;
			clientList[clientID]->summary();
		} else if(choice == 6) {
			cout << "Please enter the client ID" << endl;
			cin >> clientID;
			cout << "Please enter the account No." << endl;
			cin >> accountNo;
			clientList[clientID]->inspectAccount(accountNo);
		} else if(choice == 7) {
			cout << "Please enter the full name of the teller" << endl;
			getline(cin, stringBuffer);
			Teller * teller = new Teller(stringBuffer);
			tellerList.push_back(teller);
		
		} else if(choice == 8) {
			for(int i = 0; i < tellerList.size(); i++) {
				cout << tellerList[i]->getName() << endl;
			}
		}
	}
}
