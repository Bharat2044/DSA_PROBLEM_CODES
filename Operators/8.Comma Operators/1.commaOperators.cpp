// Syntax : data_type variable = (value1, value2);

#include <iostream>
using namespace std;

int main() {
    // comma as a operator
    int num = (24, 78, 85);
    cout << num << endl;
    
    // Assignment Operator
    // int num1 = 10, 24, 30;  // error: expected unqualified-id before numeric constant
    // cout << num1 << endl;
 
    // Commma as a Operator
    int num2 = (10, 24, 30);
    cout << num2 << endl << endl;
    
    
    // using comma as a separator
    int x = 34, y = 45, z = 65;
    cout << x << " " << y << " " << z << endl << endl;
    
    
    int i, j = 10;
    i = (j++, j+100, 999+j);
    cout << i;
   
    return 0;
}