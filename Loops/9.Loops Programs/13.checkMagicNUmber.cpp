// ip: 1234             => 1+2+3+4 = 10 => 1+0 = 1
// op: true

// ip: 12345            => 1+2+3+4+5 = 15 => 1+5 = 6
// op: false

// ip:4789              => 4+7+8+9 = 28 => 2+8 = 10 => 1+0 = 1
// op: true


#include <bits/stdc++.h>
using namespace std;

/* Approach - 1 : Time Complexity - O(logn), Space Complexity - O(1)
int sumOfDigits(int num) {
    
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

bool isMagic(int n) {
    
    while(n > 9) {
        n = sumOfDigits(n);
    }
    
    return (n == 1);
}*/

/* Approach - 2 : Time Complexity - O(logn), Space Complexity - O(1)
bool isMagic(int n) {    
    int sum = 0;

    while (n > 0 || sum > 9) {
        if (n == 0) {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
      
    // Return true if sum becomes 1.
    return (sum == 1);
}*/

// Approach - 3 : Time Complexity - O(1), Space Complexity - O(1)
bool isMagic(int n) {    
    
    return (n%9 == 1);
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(isMagic(num))
        cout << "Magic Number" << endl;
    else
        cout << "Not a Magic Number" << endl;
    
    return 0;
}