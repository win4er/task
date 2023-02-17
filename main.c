//#include "task_2.h"
#include "timetest.h"
#include "arraywork.h"
#include "sorts.h"
#include "testsorts.h"
#include "statarray.h"

int main(){
    time_test(6, 100, 100, 500);
    time_test(5, 100, 100, 500);
    time_test(4, 100, 100, 500);
    time_test(3, 100, 100, 500);
    time_test(2, 100, 100, 500);
    time_test(1, 100, 100, 500);

    time_test(6, 250, 500, 1000);
    time_test(5, 250, 500, 1000);
    time_test(4, 250, 500, 1000);
    time_test(3, 250, 500, 1000);
    time_test(2, 250, 500, 1000);
    time_test(1, 250, 500, 1000);

    time_test(6, 1000, 1000, 10000);
    time_test(5, 1000, 1000, 10000);
    time_test(4, 1000, 1000, 10000);
    time_test(3, 1000, 1000, 10000);
    time_test(2, 1000, 1000, 10000);
    time_test(1, 1000, 1000, 10000);

    time_test(6, 5000, 10000, 100000);
    time_test(5, 5000, 10000, 100000);
    time_test(4, 5000, 10000, 100000);
    time_test(3, 5000, 10000, 100000);
    time_test(2, 5000, 10000, 100000);
    time_test(1, 5000, 10000, 100000);

    time_test(6, 10000, 100000, 200000);
    time_test(5, 10000, 100000, 200000);
    time_test(4, 10000, 100000, 200000);
    time_test(3, 10000, 100000, 200000);
    time_test(2, 10000, 100000, 20000);
    time_test(1, 10000, 100000, 20000);

    time_test(6, 100000, 200000, 1000000);
    time_test(5, 100000, 200000, 1000000);
    time_test(4, 100000, 200000, 1000000);
    time_test(3, 100000, 200000, 1000000);
    time_test(2, 100000, 200000, 1000000);
    time_test(1, 100000, 200000, 1000000);

    time_test(6, 1000000, 1000000, 10000000);
    time_test(5, 1000000, 1000000, 10000000);
    time_test(4, 1000000, 1000000, 10000000);
    time_test(3, 1000000, 1000000, 10000000);
    time_test(2, 1000000, 1000000, 10000000);
    time_test(1, 1000000, 1000000, 10000000);

    return 0;
}
