// bool --> char --> short int --> int -->
// unsigned int --> long --> unsigned long -->
// long long --> float --> double --> long double

#include <iostream>
using namespace std;

int main() {
    int int_var;
    float float_var = 20.5f;

    int_var = float_var; // Trying to store the value of float_var in int_var.

    cout << "The value of int_var is: " << int_var << endl;
    cout << "The value of float_var is: " << float_var << endl << endl;

    int int_var1 = 50;
    char char_var = 'a';

    int_var1 = int_var1 + char_var; // char_var is implicitly converted to the integer ASCII of 'a'.  =>  ASCII of 'a' is 97.

    cout << "The value of (50 + 'a') is: " << int_var1 << endl;

    // Now, converting int_var to a float (implicitly).
    float float_var1 = int_var1 * 1.5f;

    cout << "The value of float_var1 is: " << float_var1 << endl;

    return 0;
}
