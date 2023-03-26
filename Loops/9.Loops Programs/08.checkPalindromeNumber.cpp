#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(log(n)), Space Complexity: O(1)
bool reverseNumber(int n) {
    int rev = 0;
    int temp = n;
    
    while(temp != 0) {
        int d = temp%10;
        rev = rev*10+d;
        temp /= 10;
    }    
    
    return n == rev;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(reverseNumber(num))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";
    
    return 0;
}