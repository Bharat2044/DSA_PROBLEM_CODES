#include<iostream>
using namespace std;

// Function definition
int returnSum(int a, int b) {
    int c = a + b;
    
    cout << "Result before return statement: " << c << "\n";
    // Return statement.
    return c;
}

int main() {
    // Initializing variables.
    int a = 5, b = 6;
    
    // Calling function.
    int result = returnSum(a, b);

    cout << "Result after return statement: " << result << "\n";
    
    return 0;
}
