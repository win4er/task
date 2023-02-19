#include "timetest.h"

void time_test(int step, int min, int max) {
    int SIZE = min - step;
    bool flag = 1; 
    static int *ar = new int[SIZE];
   
    while (SIZE != max) {
        SIZE += step;
        ar = new int[SIZE];
        std::cout << std::endl;
        std::cout << __func__ << std::endl;

        std::chrono::time_point<std::chrono::high_resolution_clock> start;
        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        std::chrono::duration<double> diff;


        std::cout << "[merge_sort]" << "\t";
        std::cout << "[SIZE]:\t" << SIZE << "\t";

        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        mergeSort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();
        
        diff = end - start;
        std::cout << "[TIME]:\t" << diff.count() << "\n";        




        std::cout << "[count_sort]" << "\t";
        std::cout << "[SIZE]:\t" << SIZE << "\t";

        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        count_sort(ar, SIZE, 0, 999);
        end = std::chrono::high_resolution_clock::now();

        std::cout << "[TIME]:\t" << diff.count() << "\n";
        



        std::cout << "[selection_sort]" << "\t";
        std::cout << "[SIZE]:\t" << SIZE << "\t";

        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        selection_sort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();

        diff = end - start;
        std::cout << "[TIME]:\t" << diff.count() << "\n";




        std::cout << "[insertion_sort]" << "\t";
        std::cout << "[SIZE]:\t" << SIZE << "\t";

        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        insertion_sort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();

        diff = end - start;
        std::cout << "[TIME]:\t" << diff.count() << "\n";




        std::cout << "[quick_sort]" << "\t";
        std::cout << "[SIZE]:\t" << SIZE << "\t";

        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        quickSort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();

        std::cout << "[TIME]:\t" << diff.count() << "\n";




        std::cout << "[bubble_sort]" << "\t";
        std::cout << "[SIZE]:\t" << SIZE << "\t";

        random_Fill_ar(ar, SIZE, 0, 999);

        start = std::chrono::high_resolution_clock::now();
        bubble_sort(ar, SIZE);
        end = std::chrono::high_resolution_clock::now();

        std::cout << "[TIME]:\t" << diff.count() << "\n";
        

        delete[] ar;
    }
}

