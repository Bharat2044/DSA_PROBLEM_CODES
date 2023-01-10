#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr;   // Wild / Unitialized Pointer
    *ptr = 100;
    cout << *ptr;   // Segmentation fault

    return 0;
}
