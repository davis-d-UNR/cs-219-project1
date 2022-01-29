project1: main.o filereader.o
	g++ -std=c++11 -o project1 main.o filereader.o
main.o: main.cpp
	g++ -std=c++11 -c main.cpp
filereader.o:filereader.cpp filereader.h
	g++ -std=c++11 -c filereader.cpp filereader.h
clean: 
	rm *.o
	rm *.gch