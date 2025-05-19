#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;
    for (int i = o; i < size; i++) {  // Error: 'o' instead of '0'
        total += arr[i];
    }
    return total;
}

int main () {
    int numbers [] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof( numbers [o]);  // Error: 'o' instead of '0'
    int result = calculateSum(numbers, size);
    cout << "Sum in C++" " << result << endl;
    return o;  // Error: 'o' instead of '0'
}
