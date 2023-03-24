// Fibonacci Numbers : 0 1 1 2 3 5 8 13 21 35

#include <iostream>
using namespace std;

// Time Complexity: O(n), Space Complexity: O(1)
void printFibonacciSeries(int n) {
    int a = 0, b = 1;
    for(int i=1; i<=n; i++) {
        cout << a << "  ";
        int temp = a+b;
        a = b;
        b = temp;
    }
}

int main() {
    int num;
    
    cout << "Enter a number you want to print fibonacci series: ";
    cin >> num;
    
    printFibonacciSeries(num);
    
    return 0;
}