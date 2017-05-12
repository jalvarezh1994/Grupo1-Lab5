main:	Marine.o General.o Pieza.o main.o 
	g++ Marine.o General.o Pieza.o main.o -lncurses -o main

main.o: main.cpp Marine.h General.h Pieza.h
	g++ -c main.cpp

Marine.o:	Marine.h Marine.cpp Pieza.h
	g++ -c Marine.cpp

General.o:	General.h General.cpp Pieza.h
	g++ -c General.cpp

Pieza.o:	Pieza.h Pieza.cpp 
	g++ -c Pieza.cpp



 

