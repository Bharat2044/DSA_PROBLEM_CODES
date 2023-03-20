#include <iostream>
using namespace std;

int main() {
    // bitwise NOT => unary
    cout << "~" << "10" << " is " << ~10 << endl;

    // bitwise AND
    cout << "4" << " & " << "5" << " is " << (4 & 5) << endl;

    // bitwise OR
    cout << "4" << " | " << "5" << " is " << (4 | 5) << endl;

    // bitwise XOR
    cout << "4" << " ^ " << "5" << " is " << (4 ^ 5) << endl;

    // bitwise left shift
    cout << "4" << " << " << "2" << " is " << (4 << 2) << endl;

    // bitwise right shift
    cout << "4" << " >> " << "2" << " is " << (4 >> 2) << endl;

    return 0;
}
