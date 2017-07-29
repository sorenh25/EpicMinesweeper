main: field.o board.o
	g++ field.o board.o main.cpp -Wall

board.o: field.o board.cpp
	g++ board.cpp -c -Wall

field.o: field.cpp
	g++ field.cpp -c -Wall

hidden.o: hidden.cpp
	g++ hidden.cpp -c Wall

runt: test
	cat input.txt
	test.out
	cat output.txt

runTest: test
	./test.out

test: fileManager.o
	g++ test.cpp fileManager.o -Wall -o test.out

fileManager.o: fileManager.cpp
	g++ -c -Wall fileManager.cpp
