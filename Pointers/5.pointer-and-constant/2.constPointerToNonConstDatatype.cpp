#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *const ptr = &a;        // non-const pointer to const int
    cout << a << "    " << *ptr << endl;
    cout << &a << "    " << ptr << endl<<endl;

    //XXX   ptr++;  // Error: increment of read-only variable 'ptr'
    
    *ptr = 80;
    cout << a << "    " << *ptr << endl;
    cout << &a << "    " << ptr << endl;

    return 0;
}