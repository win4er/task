#include "task_1.hpp"
int main() {
    int ar[1000];
    fillRandom(ar, 100);
    BubbleSort2(ar, 100);
    showEl(ar, 100);
    cout << ar[countMax(ar, 100)] << ": " << countDig(ar, 100, countMax(ar, 100)) << " | " << ar[countMin(ar, 100)] << ": " << countDig(ar, 100, countMin(ar, 100)) << endl;
}