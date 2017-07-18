main: field.o board.o
	g++ field.o board.o main.cpp

board.o: field.o board.cpp
	g++ board.cpp -c

field.o: field.cpp
	g++ field.cpp -c
