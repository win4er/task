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
        cout << i << " : " << ar[i] << endl;
    }
}

void showEl(const int* ar, int size, int N = 10, int M = 10) {
    for (int i = 1; i < N + 1; i++) {
        for (int j = 0; j < M; j++) {
            std::cout << ar[10 * (i-1) + j] << " ";
        }
        std::cout << std::endl;
    }
}

int countMax(int* ar, int size) {
    int max = 0;
    int index = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (ar[i] == ar[j]) {
                count += 1;
            }
        }
        if (max <= count) {
            index = i;
            max = count;
        }
    }
    return index;
}

int countMin(int* ar, int size) {
    int min = size;
    int index = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (ar[i] == ar[j]) {
                count += 1;
            }
        }
        if (min >= count) {
            index = i;
            min = count;
        }
    }
    return index;
}

int countDig(int* ar, int size, int indEl) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (ar[indEl] == ar[i]) {
            count += 1;
        }
    }

    return count;
}