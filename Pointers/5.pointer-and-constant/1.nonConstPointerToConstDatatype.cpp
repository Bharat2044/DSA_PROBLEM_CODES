#include<iostream>
using namespace std;

int main() {
    int a = 10;
    const int *ptr = &a;        // non-const pointer to const int
    cout << a << "    " << *ptr << endl;
    cout << &a << "    " << ptr << endl<<endl;

    ptr++;
    cout << a << "    " << *ptr << endl;
    cout << &a << "    " << ptr << endl;

    //XXX  *ptr = 100;  // Error: assignment of read-only location '* ptr'

    return 0;
}