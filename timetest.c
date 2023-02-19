#include "timetest.h"

void row_info() {
    std::cout << "\tmerge_sort\tcount_sort\tselection_sort\tinsertion_sort\tquick_sort\tbubblesort" << std::endl;
}

void time_test(int step, int min, int max) {
    int SIZE = min - step;
    bool flag = 1; 
    static int *ar = new int[SIZE];
   
    while (SIZE != max) {
        
        std::cout << SIZE << "\t";

        SIZE += step;
        ar = new int[SIZE];

        std::chrono::time_point<std::chrono::high_resolution_clock> start;
        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        std::chrono::duration<double> diff;



        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        mergeSort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();
        
        diff = end - start;
        std::cout << diff.count() << "\t";        




        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        count_sort(ar, SIZE, 0, 999);
        end = std::chrono::high_resolution_clock::now();

        std::cout << diff.count() << "\t";
        



        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        selection_sort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();

        diff = end - start;
        std::cout << diff.count() << "\t";




        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        insertion_sort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();

        diff = end - start;
        std::cout << diff.count() << "\t";




        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        quickSort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();

        std::cout << diff.count() << "\t";




        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        bubble_sort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();

        std::cout << diff.count() << "\n";
        

        delete[] ar;
    }
}

