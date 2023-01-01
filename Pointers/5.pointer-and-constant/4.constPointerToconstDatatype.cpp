#include<iostream>
using namespace std;

int main() {
    int a = 10;
    const int *const ptr = &a;        // const pointer to const int
    cout << a << "    " << *ptr << endl;
    cout << &a << "    " << ptr << endl<<endl;

    //XXX  ptr++;   //Error: increment of read-only variable 'ptr'
    
    //XXX   *ptr = 80;    //Error : ssignment of read-only location '*(const int*)ptr'

    return 0;
}