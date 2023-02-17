#include "timetest.h"

void time_test(int sort_key, int step, int min, int max) {
    int SIZE = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start;
    std::chrono::time_point<std::chrono::high_resolution_clock> end;
    std::chrono::duration::duration<double> diff;
    
    while (SIZE != max) {
        SIZE += step;
        static int *ar = new int[SIZE];
        random_Fill_ar(ar, SIZE, 0, 999);
        std::cout << SIZE << ":" << "\t";
        bool flag = 1;
        if (sort_key == 6) {
            if (flag) {
                std::cout << "[merge_sort]" << std::endl;
                flag = 0;
            }
            start = std::chrono::high_resolution_clock::now();
            
            mergeSort(ar, SIZE);

            end = std::chrono::high_resolution_clock::now();
            diff = end - start;
            std::cout << diff << "\t";
        }
        delete[] ar;


        int ar[SIZE];
        random_Fill_ar(ar, SIZE, 0, 999);
        std::cout << SIZE << ":" << "\t";
        bool flag = 1;
        if (sort_key == 5) {
            if (flag) {
                std::cout << "[quick_sort]" << std::endl;
                flag = 0;
            }
            start = std::chrono::high_resolution_clock::now();
            
            quickSort(ar, SIZE);

            end = std::chrono::high_resolution_clock::now();
            diff = end - start;
            std::cout << diff << "\t";
        }
        delete[] ar;


        int ar[SIZE];
        random_Fill_ar(ar, SIZE, 0, 999);
        std::cout << SIZE << ":" << "\t";
        bool flag = 1;
        if (sort_key == 4) {
            if (flag) {
                std::cout << "[count_sort]" << std::endl;
                flag = 0;
            }
            start = std::chrono::high_resolution_clock::now();
            
            count_sort(ar, SIZE, 0, 999);

            end = std::chrono::high_resolution_clock::now();
            diff = end - start;
            std::cout << diff << "\t";
        }
        delete[] ar;


        int ar[SIZE];
        random_Fill_ar(ar, SIZE, 0, 999);
        std::cout << SIZE << ":" << "\t";
        bool flag = 1;
        if (sort_key == 3) {
            if (flag) {
                std::cout << "[selection_sort]" << std::endl;
                flag = 0;
            }
            start = std::chrono::high_resolution_clock::now();
            
            selection_sort(ar, SIZE);

            end = std::chrono::high_resolution_clock::now();
            diff = end - start;
            std::cout << diff << "\t";
        }
        delete[] ar;

 
        int ar[SIZE];
        random_Fill_ar(ar, SIZE, 0, 999);
        std::cout << SIZE << ":" << "\t";
        bool flag = 1;
        if (sort_key == 2) {
            if (flag) {
                std::cout << "[insertion_sort]" << std::endl;
                flag = 0;
            }
            start = std::chrono::high_resolution_clock::now();

            insertion_sort(ar, SIZE);

            end = std::chrono::high_resolution_clock::now();
            diff = end - start;
            std::cout << diff << "\t";
        }
        delete[] ar;


        int ar[SIZE];
        random_Fill_ar(ar, SIZE, 0, 999);
        std::cout << SIZE << ":" << "\t";
        bool flag = 1;
        if (sort_key == 1) {
            if (flag) {
                std::cout << "[bubble_sort]" << std::endl;
                flag = 0;
            }
            start = std::chrono::high_resolution_clock::now();

            bubble_sort(ar, SIZE);

            end = std::chrono::high_resolution_clock::now();
            diff = end - start;
            std::cout << diff << "\t";
        }
        delete[] ar;
    }

}
