#include <iostream>
using namespace std;
 
int main() {
    int a = 6, b = 4;
 
    // Assignment Operator
    cout << "a = " << a << endl;
   
    //  Add and Assignment Operator
    cout << "a += b is " << (a += b) << endl;
   
    // Subtract and Assignment Operator
    cout << "a -= b is " << (a -= b) << endl;
   
    //  Multiply and Assignment Operator
    cout << "a *= b is " << (a *= b) << endl;
   
    //  Divide and Assignment Operator
    cout << "a /= b is " << (a /= b) << endl;
   
    //  Modulo and Assignment Operator
    cout << "a %= b is " << (a %= b) << endl;
   
    //  Bitwise AND and Assignment Operator
    int x = 6;
    x &= 4;
    cout << x << endl;
   
    //  Bitwise OR and Assignment Operator
    int y = 6;
    y |= 4;
    cout << y << endl;
 
    return 0;
}