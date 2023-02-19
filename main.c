//#include "task_2.h"
#include "timetest.h"
#include "arraywork.h"
#include "sorts.h"
#include "testsorts.h"
#include "statarray.h"

int main(){

    time_test(100, 100, 500);
    time_test(250, 500, 1000);
    time_test(1000, 1000, 10000);
    time_test(5000, 10000, 100000);
    time_test(10000, 100000, 200000);
    time_test(100000, 200000, 1000000);
    time_test(1000000, 1000000, 10000000);

    return 0;
}
