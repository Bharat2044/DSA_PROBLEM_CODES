#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
int main() {
    int x = 10;
    int y = 20;
    cout << "Before swapped the value of  x and y:\n";
    cout << x << "    " << y << "\n\n";
    swap(x, y);
    cout << "After swapped the value of  x and y:\n";
    cout << x << "    " << y << "\n\n";

    return 0;
}