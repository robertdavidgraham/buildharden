CC=gcc
CFLAGS=-O2

all: testfloat testheap

testfloat: testfloat.c
	$(CC) $(CFLAGS) -o $@ $?

testheap: testheap.c
	$(CC) $(CFLAGS) -o $@ $?

clean:
	rm testfloat testheap

