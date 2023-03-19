// Syntax : const_cast <datatype> (expression)

#include <iostream>
using namespace std;

int main() {
    const int var1 = 10;
    const int* ptr1 = &var1;

    cout << "The old value of ptr1 is: " << *ptr1 << endl;

    int* ptr2 = const_cast <int*> (ptr1);

    *ptr2 = 3;

    cout << "The new value of ptr1 is: " << *ptr1 << endl;

    return 0;
}



