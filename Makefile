CC=gcc
CFLAGS=-O2

all: testfloat testheap pie cake

testfloat: testfloat.c
	$(CC) $(CFLAGS) -o $@ $?

testheap: testheap.c
	$(CC) $(CFLAGS) -U_FORTIFY_SOURCE -o $@ $?

pie: entropy.c
	$(CC) -pie -fPIE -o $@ $?

cake: entropy.c
	$(CC) -o $@ $?

clean:
	rm testfloat testheap pie cake

