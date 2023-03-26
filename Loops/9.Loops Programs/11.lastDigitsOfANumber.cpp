// ip: 1234
// op: 4

#include <bits/stdc++.h>
using namespace std;

int lastDigit(int n) {
    
    return n % 10;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Last digit = " << lastDigit(num);
    
    return 0;
}