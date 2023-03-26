// ip: 1234
// op: 1

#include <bits/stdc++.h>
using namespace std;

/* Approach 1: Using while loop => Time Complexity = O(log(n)), Space Complexity = O(1)
int firstDigit(int n) {
    
    while(n >= 10) {
        n /= 10;
    }

    return n;
}*/

// Approach 1: Without loop => Time Complexity = O(log(log10(n)), Space Complexity = O(1)
int firstDigit(int n) {
        
    int d = (int)log10(n);
    return (n / pow(10, d));
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "First digit = " << firstDigit(num);
    
    return 0;
}