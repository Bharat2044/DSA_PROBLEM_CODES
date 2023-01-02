#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;
    cout << &x << endl;
    cout << &ptr << endl;
    
    //NOTE: & is address of operator, which gives the address of a variable.

    return 0;
}
