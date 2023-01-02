#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;
    cout << x << endl;
    cout << *ptr << endl;
    cout << *(&x) << endl;
    cout << *(&(*ptr)) << endl;
    
    //NOTE: * is  deference operator, which is used to fetch the value of the address

    return 0;
}
