#include <iostream>
using namespace std;

/* Approach - 1 : Using Loops  =>  Time Complexity: O(n), Space Complexity: O(1)
int factorial(int num) {
    int fact = 1;
    
    for(int i = 1; i <= num; ++i) {
        fact *= i;
    }
    
    return fact;
}*/

// Approach - 2 : Using Recursion  =>  Time Complexity: O(n), Space Complexity: O(n)
int factorial(int num) {
    if(num == 0) 
        return 1;
    
    return factorial(num - 1) * num;
}

int main() {
    int num;
    
    cout << "Enter a positive number: ";
    cin >> num;
    
    if(num < 0) {
        cout << "Factorial of negative number is not defined 😜";
    }
    else {
        int fact = factorial(num);
        
        cout << num << "! = " << fact << endl;
    }
    
    return 0;
}