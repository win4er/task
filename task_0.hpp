#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;


void fillRandom(int* arr, int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 101 + rand() % 151) % 151;
    }
}

void Swap(int& a, int& b){
    int k = a;
    a = b;
    b = k;
}

void BubbleSort2(int* ar, int size){
    for (int j = 0; j < size; j++){
        for(int i = 0; i < size - 1 - j; i++){
            if (ar[i] > ar[i+1]){
                Swap(ar[i], ar[i+1]);
            }
        }
    }
}

void printArr(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "#]\t[" << ar[i] << "]" << endl;
    }
}

