#include "task_2.hpp"

int main() {
    int ar[100];
    fillRandom(ar, 100);
    printAr(ar, sizeof(ar) / sizeof(ar[0]));
    cout << "max: " << getMax(ar, 0, sizeof(ar) / sizeof(ar[0])) << endl;
    int dig = foo();
    cout << dig << endl;
    cout << "min: " << getMin(ar, 0, sizeof(ar) / sizeof(ar[0])) << endl;
    cout << foo() - dig << endl;
}