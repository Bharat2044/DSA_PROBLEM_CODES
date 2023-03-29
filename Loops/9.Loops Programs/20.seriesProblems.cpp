// i/p: x 
// o/p: 1 + x^1/1! + x^2/2! + x^3/3! + x^4/4! + x^5/5!

// i/p: x = 2
// o/p: 7.266        =>  1 + 2^1/1! + 2^2/2! + 2^3/3! + 2^4/4! + 2^5/5! = 1 + 2/1 + 4/2 + 8/6 + 16/24 + 32/120 = 1 + 2 + 2 + 1.333 + 0.666 + 0.266 = 7.266


#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) 
        fact *= i;
    
    return fact;
}

/* Approach 1: 
float series(int x) {
    float sum = 1.0f;

    for (int i = 1; i <= 5; i++) {        
        int fact = factorial(i);

        sum += pow(x, i) / fact;
    }

    return sum;
}*/

// Approach 2: 
float series(int x) {
    float sum = 1.0f;
    int fact = 1;

    for (int i = 1; i <= 5; i++) {
        fact *= i;
        sum += pow(x, i) / fact;
    }

    return sum;
}

int main() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    float sum = 1.0f;
    int fact = 1;
    
    cout << "The sum is: " << series(x) << endl;

    return 0;
}