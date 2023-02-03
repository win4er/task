#include <iostream>
#include <time.h>

using namespace std;


int foo() {
	static int countCall = 0;
	countCall++;

	return countCall;
}

void fillRandom(int* arr, int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 101 + rand() % 151) % 151;
    }
}

void printAr(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        cout << i << " : " << ar[i] << endl;
    }
}

int getMax(int *ar, int start, int stop){
    foo();
    if (start == stop-1) {
        return ar[start];
    }
    int mid = (start + stop) / 2;
    int max1 = getMax(ar, start, mid), max2 = getMax(ar, mid, stop);
    return (max1 > max2) ? max1 : max2;
}

int getMin(int *ar, int start, int stop){
    foo();
    if (start == stop-1) {
        return ar[start];
    }
    int mid = (start + stop) / 2;
    int min1 = getMin(ar, start, mid), min2 = getMin(ar, mid, stop);
    return (min1 < min2) ? min1 : min2;
}

