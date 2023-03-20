#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int b = 3;

    // Equal to
    cout << a << " == " << b << " is " << (a == b) << endl;
    
    // Not equal to
    cout << a << " != " << b << " is " << (a != b) << endl;

    // greater than
    cout << a << " > " << b << " is " << (a > b) << endl;

    // less than
    cout << a << " < " << b << " is " << (a < b) << endl;
    
    // greater than or equal to
    cout << a << " >= " << b << " is " << (a >= b) << endl;

    // less than or equal to
    cout << a << " <= " << b << " is " << (a <= b) << endl;

    return 0;
}
