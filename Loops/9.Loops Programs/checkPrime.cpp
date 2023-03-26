#include <bits/stdc++.h>
using namespace std;

/* Approach - 1 => Time Complexity: O(n), Space Complexity: O(1)
bool checkPrime(int n) {
    
    if(n == 1) 
        return false;
        
    for(int i=2; i<n; i++) {
        if(n%i == 0)
            return false;
    }

    return true;
}*/

/* Approach - 2 => Time Complexity: O(n/2) = O(n), Space Complexity: O(1)
bool checkPrime(int n) {    
    if(n == 1) 
        return false;
        
    for(int i=2; i<=n/2; i++) {
        if(n%i == 0)
            return false;
    }

    return true;
}*/

/* Approach - 3 => Time Complexity: O(sqrt(n)), Space Complexity: O(1)
bool checkPrime(int n) {
    if(n == 1) 
        return false;
        
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) 
            return false;
    }

    return true;
}*/

// Approach - 4 => More Efficient Solution => Time Complexity: O(sqrt(n)), Space Complexity: O(1)
bool checkPrime(int n) {
    if(n==2 || n==3)
        return true;
        
    if(n == 1 || n%2==0 || n%3==0) 
        return false;
        
    for(int i=5; i*i<=n; i+=6) {
        if(n%i==0 || n%(i+2)==0) 
            return false;
    }

    return true;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(checkPrime(num))
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;
    
    return 0;
}