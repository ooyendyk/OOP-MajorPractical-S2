compile: User.o Client.o Account.o Credit.o termDeposit.o main2.cpp
	g++ User.o Client.o Teller.o Account.o Credit.o termDeposit.o main2.cpp -o Bank

User.o: User.h User.cpp
	g++ -c User.cpp

Client.o: Client.h Client.cpp
	g++ -c Client.cpp

Teller.o: Teller.h Teller.cpp
	g++ -c Teller.cpp

Account.o: Account.h Account.cpp
	g++ -c Account.cpp

Credit.o: Credit.h Credit.cpp
	g++ -c Credit.cpp

termDeposit.o: termDeposit.h termDeposit.cpp
	g++ -c termDeposit.cpp
