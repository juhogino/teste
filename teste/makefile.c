CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: calculadora

calculadora: main.o expressao.o pilha.o
    $(CC) $(CFLAGS) -o calculadora main.o expressao.o pilha.o

main.o: main.c expressao.h pilha.h
    $(CC) $(CFLAGS) -c main.c

expressao.o: expressao.c expressao.h pilha.h
    $(CC) $(CFLAGS) -c expressao.c

pilha.o: pilha.c pilha.h
    $(CC) $(CFLAGS) -c pilha.c

clean:
    rm -f *.o calculadora

