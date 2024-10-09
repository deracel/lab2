CC = cc
CFLAGS = -c 
LDFLAGS = -lm

all: example

example: main.o test.o  input_xtry.o input_etry.o  sqr.o
	$(CC) main.o test.o  input_xtry.o input_etry.o sqr.o -o example $(LDFLAGS)
	
main.o: main.c 
	$(CC) $(CFLAGS) main.c $(LDFLAGS)

test.o: test.c	
	$(CC) $(CFLAGS) test.c $(LDFLAGS)

input_etry.o: input_etry.c
	$(CC) $(CFLAGS) input_etry.c $(LDFLAGS)

input_xtry.o: input_xtry.c
	$(CC) $(CFLAGS) input_xtry.c $(LDFLAGS)

sqr.o: sqr.c
	$(CC) $(CFLAGS) sqr.c $(LDFLAGS)

