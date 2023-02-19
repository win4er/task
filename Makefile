all : main.o arraywork.o statarray.o sorts.o timetest.o
	g++ main.o arraywork.o statarray.o sorts.o timetest.o

main.o : main.c
	g++ -c main.c

arraywork.o : arraywork.c
	g++ -c arraywork.c

statarray.o : statarray.c
	g++ -c statarray.c

sorts.o : sorts.c
	g++ -c sorts.c

timetest.o : timetest.c
	g++ -c timetest.c

clean :
	rm -rf *.o a.out
