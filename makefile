FLAGS = -Wall -Wextra -pedantic

compile: User.o Client.o Account.o Credit.o Teller.o termDeposit.o main.cpp
	g++ -std=c++11 $(FLAGS) User.o Client.o Teller.o Account.o Credit.o termDeposit.o main.cpp -o Bank

User.o: User.h User.cpp
	g++ -std=c++11 $(FLAGS) -c User.cpp

Client.o: Client.h Client.cpp
	g++ -std=c++11 $(FLAGS) -c Client.cpp

Teller.o: Teller.h Teller.cpp
	g++ -std=c++11 $(FLAGS) -c Teller.cpp

Account.o: Account.h Account.cpp
	g++ -std=c++11 $(FLAGS) -c Account.cpp

Credit.o: Credit.h Credit.cpp
	g++ -std=c++11 $(FLAGS) -c Credit.cpp

termDeposit.o: termDeposit.h termDeposit.cpp
	g++ -std=c++11 $(FLAGS) -c termDeposit.cpp

test: User.o Client.o Account.o Credit.o Teller.o termDeposit.o main2.cpp
	g++ -std=c++11 $(FLAGS) User.o Client.o Teller.o Account.o Credit.o termDeposit.o main2.cpp -o Bank
	./Bank

run:
	./Bank
