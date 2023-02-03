#include "task_0.hpp"
int main() {
    int ar[1000];
    fillRandom(ar, 1000);
    BubbleSort2(ar, 1000);
    printArr(ar, 1000);
    return 0;
}
