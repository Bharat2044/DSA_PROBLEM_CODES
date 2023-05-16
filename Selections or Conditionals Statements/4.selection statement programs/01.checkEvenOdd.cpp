#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Approach - 1 : Using Arithmetic Modulo Operator
    /*if(num % 2 == 0)
        cout << num << " is even\n";
    else
        cout << num << " is odd\n";*/
        
    // Approach - 2 : Using Bitwise AND Operator
    if((num & 1) == 0)
        cout << num << " is even\n";
    else
        cout << num << " is odd\n";

    return 0;
}