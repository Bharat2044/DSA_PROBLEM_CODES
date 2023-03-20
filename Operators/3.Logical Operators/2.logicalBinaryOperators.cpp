#include <iostream>
using namespace std;

int main() {
    // Logical NOT operator  => unary
    cout << (!true) << endl;  // 0
    cout << (!false) << endl; // 1

    // Logical AND operator
    cout << (false && false) << endl; // 0
    cout << (false && true) << endl;  // 0
    cout << (true && false) << endl;  // 0
    cout << (true && true) << endl;   // 1

    // Logical OR operator
    cout << (false || false) << endl; // 0
    cout << (false || true) << endl;  // 1
    cout << (true || false) << endl;  // 1
    cout << (true || true) << endl;   // 1
    
    
    int a = 6, b = 4;
    cout << "a && b is " << (a && b) << endl;       // 1
    cout << "a ! b is " << (a > b) << endl;         // 1
    cout << "!b is " << (!b) << endl;               // 0

    return 0;
}
