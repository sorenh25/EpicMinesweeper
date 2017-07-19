main: field.o board.o
	g++ field.o board.o main.cpp -Wall

board.o: field.o board.cpp
	g++ board.cpp -c -Wall

field.o: field.cpp
	g++ field.cpp -c -Wall

test: fileManager.o
	g++ test.cpp fileManager.o -Wall

fileManager.o: fileManager.cpp
	g++ -c -Wall fileManager.cpp
