#include <iostream>

int main() {
    // Dynamically allocating memory for an array on the heap
    int* arr = new int[5];

    // Assigning values to the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // Freeing memory manually
    delete[] arr;

    // After this point, arr is dangling if accessed again.
    // Uncommenting the following line will cause undefined behavior.
    // std::cout << arr[0] << std::endl; // Dangling pointer error

    std::cout << "Memory manually freed with delete." << std::endl;

    return 0;
}
