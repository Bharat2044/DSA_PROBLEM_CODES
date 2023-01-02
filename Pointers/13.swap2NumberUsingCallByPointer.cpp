#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
int main() {
    int a = 10;
    int b = 20;
    cout << "Before swapped the value of a and b:\n";
    cout << "a = " << a << "    " << "b = " << b << "\n\n";
    swap(&a, &b);
    cout << "After swapped the value of a and b:\n";
    cout << "a = " << a << "    " << "b = " << b << "\n\n";

    return 0;
}
