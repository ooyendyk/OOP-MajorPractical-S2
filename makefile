compile: User.o Client.o Account.o Credit.o termDeposit.o Teller.o main2.cpp
	g++ User.o Client.o Teller.o Account.o Credit.o termDeposit.o main2.cpp -o Bank -std=c++11 -Wall -pedantic

User.o: User.h User.cpp
	g++ -c User.cpp -std=c++11

Client.o: Client.h Client.cpp
	g++ -c Client.cpp -std=c++11

Teller.o: Teller.h Teller.cpp
	g++ -c Teller.cpp -std=c++11

Account.o: Account.h Account.cpp
	g++ -c Account.cpp -std=c++11

Credit.o: Credit.h Credit.cpp
	g++ -c Credit.cpp -std=c++11

termDeposit.o: termDeposit.h termDeposit.cpp
	g++ -c termDeposit.cpp -std=c++11

test:
	./Bank

clean:
	rm *.o

