#include <iostream>
using namespace std;

int main() {
    // Logical NOT operator
    cout << (!false) << endl;   // 1
    cout << (!true) << endl;    // 0
    
    cout << (!0) << endl;       // 1
    cout << (!8) << endl;       // 0
    
    cout << (!-0) << endl;      // 1
    cout << (!-8) << endl;      // 0
    
    cout << (!0.0) << endl;     // 1
    cout << (!8.7) << endl;     // 0
    
    
    bool result;
    result = !(5 == 2);    // 1
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // 0
    cout << "!(5 == 5) is " << result << endl;

    return 0;
}
