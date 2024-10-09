CC = cc
CFLAGS = -c -Wall
LDFLAGS = -lm

all: example

example: main.o test.o  input_ntry.o input_xtry.o  sqr.o
	$(CC) main.o test.o  input_ntry.o input_xtry.o sqr.o -o example $(LDFLAGS)
	
main.o: main.c 
	$(CC) $(CFLAGS) main.c $(LDFLAGS)

test.o: test.c
	$(CC) $(CFLAGS) test.c $(LDFLAGS)

input_ntry.o: input_ntry.c
	$(CC) $(CFLAGS) input_ntry.c $(LDFLAGS)

input_xtry.o: input_xtry.c
	$(CC) $(CFLAGS) input_xtry.c $(LDFLAGS)

sqr.o: sqr.c
	$(CC) $(CFLAGS) sqr.c $(LDFLAGS)

