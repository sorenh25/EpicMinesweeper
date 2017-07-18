main: field.o
	g++ field.o main.cpp

field.o: field.cpp
	g++ field.cpp -c
