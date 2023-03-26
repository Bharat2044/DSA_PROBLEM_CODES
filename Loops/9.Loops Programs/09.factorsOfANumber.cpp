#include <bits/stdc++.h>
using namespace std;

/* Approach - 1 => Time Complexity: O(n), Space Complexity: O(1)
// print in  sorted order
void factorOfNumber(int n) {
    
    cout << n << " all factors are: ";
    for(int i=1; i<=n; i++) {
        if(n%i == 0)
            cout << i << "  ";
    }
}*/

// Approach - 2 => Time Complexity: O(n/2) = O(n), Space Complexity: O(1)
// print in  sorted order
void factorOfNumber(int n) {
    
    cout << n << " all factors are: ";
    
    for(int i=1; i<=n/2; i++) {
        if(n%i == 0)
            cout << i << "  ";
    }
    cout << n;
}

/* Approach - 3 => Time Complexity: O(sqrt(n)), Space Complexity: O(1)
// Not print in sorted order
void factorOfNumber(int n) {
    
    cout << n << " all factors are: ";
    
    for(int i=1; i*i<=n; i++) {
        if(n%i == 0) {
            cout << i << "  ";
            if(n/i != i)
                cout << n/i << "  ";
        }
    }
}*/

/* Approach - 4 => Time Complexity: O(sqrt(n)), Space Complexity: O(1)
// print in sorted order
void factorOfNumber(int n) {
    
    cout << n << " all factors are: ";
    
    int i;
    for(i=1; i*i<n; i++) {
        if(n%i == 0) 
            cout << i << "  ";
    }
    
    if(i-(n/i) == 1)
        i--;
    
    for(; i>=1; i--) {
        if(n%i == 0)
            cout << n/i << "  ";
    }
}*/

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    factorOfNumber(num);
    
    return 0;
}