#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    int *ptr1 = &x;
    int *ptr2 = &y;
    
    cout << &ptr1 <<"    " << &ptr2 << endl;
    cout << x-y << endl;
    cout << ptr1-ptr2 << endl;  // Note: Attition of 2 pointer is not possible

    return 0;
}
