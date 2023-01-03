#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int main() {
    int x = 10;
    int y = 20;
    cout << "Before swaped values are:\n";
    cout << x <<"    " << y << endl;
    swap(&x, &y);
    cout << "After swaped values are:\n";
    cout << x <<"    " << y << endl;

    return 0;
}
