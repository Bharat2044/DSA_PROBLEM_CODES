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
    cout << "4" << " >> " << "2" << " is " << (4 >> 2) << endl << endl;


    cout << "1 & 1 is " << (1 & 1) << endl;
    cout << "1 & 0 is " << (1 & 0) << endl;
    cout << "0 & 1 is " << (0 & 1) << endl;
    cout << "0 & 0 is " << (0 & 0) << endl << endl;


    cout << "1 | 1 is " << (1 | 1) << endl;
    cout << "1 | 0 is " << (1 | 0) << endl;
    cout << "0 | 1 is " << (0 | 1) << endl;
    cout << "0 | 0 is " << (0 | 0) << endl << endl;


    cout << "1 ^ 1 is " << (1 ^ 1) << endl;
    cout << "1 ^ 0 is " << (1 ^ 0) << endl;
    cout << "0 ^ 1 is " << (0 ^ 1) << endl;
    cout << "0 ^ 0 is " << (0 ^ 0) << endl << endl;    


    cout << "~1 is " << ~1 << endl;
    cout << "~0 is " << ~0 << endl;
    cout << "~(-1) is " << ~(-1) << endl;

    return 0;
}
