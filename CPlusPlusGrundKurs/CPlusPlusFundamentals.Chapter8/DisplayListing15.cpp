#include "DisplayListing15.h"



void DisplayListing15::init_vector(std::vector<int>& v) {
    for (auto elem : v) {
        elem = 201;
    }
}

void DisplayListing15::print_vector(const std::vector<int>& v) {
    for (auto elem : v) {
        std::cout << elem << std::endl;
    }
}

void DisplayListing15::callarray(int* array, int elements) {

    int size = sizeof(array);
    for (int ii = 0; ii < elements; ii++) {
        cout << array[ii] << '\n';
    }
}
