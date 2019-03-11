#Makefile for "Lab1 Questão 2 - Tarefa 1" C++ application
#Created by Hilton and Lúcio 10/03/2019

PROG = Questao2_T1
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic
OBJS = main.o funcoes.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : 
	$(CC) $(CPPFLAGS) -c main.cpp

funcoes.o :
	$(CC) $(CPPFLAGS) -c funcoes.cpp

clean :
	rm -f core $(PROG) $(OBJS)
