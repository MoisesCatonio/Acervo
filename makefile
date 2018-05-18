#Makefile for "acervo" C++ application
#Created by Moisés Catônio 17/05/2018

PROG = bin/acervo
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11 -Iinclude
OBJS = main.o midia.o livro.o cd.o dvd.o biblioteca.o menu.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS)  -o $(PROG)
	mv *.o build/

main.o : 
	$(CC) $(CPPFLAGS) -c src/main.cpp

biblioteca.o : include/biblioteca.hpp
	$(CC) $(CPPFLAGS) -c src/biblioteca.cpp

midia.o : include/midia.hpp
	$(CC) $(CPPFLAGS) -c src/midia.cpp

livro.o : include/livro.hpp
	$(CC) $(CPPFLAGS) -c src/livro.cpp

cd.o : include/cd.hpp
	$(CC) $(CPPFLAGS) -c src/cd.cpp

dvd.o : include/dvd.hpp
	$(CC) $(CPPFLAGS) -c src/dvd.cpp

menu.o : include/menu.hpp
	$(CC) $(CPPFLAGS) -c src/menu.cpp

clean:
	rm -f $(PROG) build/*.o