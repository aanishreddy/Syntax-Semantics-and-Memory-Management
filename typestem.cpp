#include <iostream>
using namespace std;

void outerFunction() {
    int x = 10;
    auto innerFunction = [&]() {
        cout << "Value of x inside closure: " << x << endl;
    };
    innerFunction();
}

int main() {
    outerFunction();
    return 0;
}
