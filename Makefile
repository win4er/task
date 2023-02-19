all : main.o arraywork.o statarray.o sorts.o testsorts.o timetest.o
	g++ main.o arraywork.o statarray.o sorts.o testsorts.o timetest.o

main.o : main.c
	g++ -c main.c

arraywork.o : arraywork.c
	g++ -c arraywork.c

statarray.o : statarray.c
	g++ -c statarray.c

sorts.o : sorts.c
	g++ -c sorts.c

testsorts.o : testsorts.c
	g++ -c testsorts.c

timetest.o : timetest.c
	g++ -c timetest.c

clean :
	rm -rf *.o a.out
