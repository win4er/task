all : main.o arraywork.o statarray.o task_2.o sorts.o testsorts.o
	g++ main.o arraywork.o statarray.o task_2.o sorts.o testsorts.o

main.o : main.c
	g++ -c main.c

arraywork.o : arraywork.c
	g++ -c arraywork.c

statarray.o : statarray.c
	g++ -c statarray.c

task_2.o : task_2.c
	g++ -c task_2.c

sorts.o : sorts.c
	g++ -c sorts.c

testsorts.o : testsorts.c
	g++ -c testsorts.c


clean :
	rm -rf *.o a.out
