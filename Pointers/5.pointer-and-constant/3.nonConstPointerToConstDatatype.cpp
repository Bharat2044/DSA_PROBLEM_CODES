#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int const *ptr = &a;        // non-const pointer to const int
    cout << a << "    " << *ptr << endl;
    cout << &a << "    " << ptr << endl<<endl;

    ptr++;
    cout << a << "    " << *ptr << endl;
    cout << &a << "    " << ptr << endl;
    
    //*ptr = 80;    //Error : assignment of read-only location '* ptr'

    return 0;
}