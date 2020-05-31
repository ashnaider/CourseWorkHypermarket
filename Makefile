# some variables

CC=g++

INCLUDE_PATH=include/

SRC_PATH=src/

CFLAGS=-c -Wall -I

BIN_PATH=bin/


all: bin/main.o
	./bin/main.o

bin/main.o: main.cpp bin/Product.o bin/MobilePhone.o bin/Smartphone.o bin/Laptop.o bin/Customer.o bin/RegularCustomer.o bin/HypermarketHandler.o bin/Utilities.o
	g++ main.cpp bin/Product.o bin/MobilePhone.o bin/Smartphone.o bin/Laptop.o bin/Customer.o bin/RegularCustomer.o bin/HypermarketHandler.o bin/Utilities.o -o bin/main.o 

bin/Product.o: Product.cpp
	g++ -c Product.cpp -o bin/Product.o	

bin/MobilePhone.o: MobilePhone.cpp	
	g++ -c MobilePhone.cpp -o bin/MobilePhone.o

bin/Smartphone.o: Smartphone.cpp
	g++ -c Smartphone.cpp -o bin/Smartphone.o

bin/Laptop.o: Laptop.cpp
	g++ -c Laptop.cpp -o bin/Laptop.o

bin/Customer.o: Customer.cpp
	g++ -c Customer.cpp -o bin/Customer.o

bin/RegularCustomer.o: RegularCustomer.cpp
	g++ -c RegularCustomer.cpp -o bin/RegularCustomer.o

bin/HypermarketHandler.o: HypermarketHandler.cpp
	g++ -c HypermarketHandler.cpp -o bin/HypermarketHandler.o

bin/Utilities.o: Utilities.cpp 
	g++ -c Utilities.cpp -o bin/Utilities.o

clean:
	rm -rf bin/*.o all 
