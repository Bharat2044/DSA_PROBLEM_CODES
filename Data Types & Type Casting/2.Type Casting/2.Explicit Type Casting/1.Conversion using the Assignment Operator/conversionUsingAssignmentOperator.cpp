#include <iostream>
using namespace std;

int main() {
    char char_var = 'a';
    int int_var;
    
    int_var = (int) char_var; // Explicitly converting a character variable to an integer variable.

    cout << "The value of char_var is: " << char_var << endl;
    cout << "The value of int_var is: " << int_var << endl << endl;;
    
    
    int int_var1 = 17;
    float float_var;

    float_var = float(int_var1) / 2;   // Explicitly converting an int to a float.
    cout << "The value of int_var1 is: " << int_var1 << endl;
    cout << "The value of float_var is: " << float_var << endl;

    return 0;
}
