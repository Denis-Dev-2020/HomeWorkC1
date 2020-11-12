CFLAGS = -O3 -fPIC -g -Wall -Werror
CC = gcc
all : mymathd mymaths mains maind clean
mymaths : libmyMath.a
mymathd : libmyMath.so
.PHONY : clean
clean :
	rm -f *.o *.a *.so ./-c ./maind ./mains
libmyMath.a : 
	ar rcs libmyMath.a myMath.h
libmyMath.so : myMath.h basicMath.c power.c
	$(CC) -shared $^ -o $@
mains : libmyMath.a main.c
	$(CC) main.c -o mains
maind : libmyMath.so main.c
	$(CC) main.c -o maind