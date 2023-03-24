#include <bits/stdc++.h>
using namespace std;

/* Approach - 1: Iterative Solution  =>  Time Complexity: O(log(n)), Space Complexity: O(1)
int reverseNumber(int n) {
    int rev = 0;
   
    while(n != 0) {
        int d = n%10;
        rev = rev*10+d;
        n /= 10;
    }
    
    return rev;
}*/

/* Approach - 2: Recursive Solution  =>  Time Complexity: O(log(n)), Space Complexity: O(log(n))
int reverseNumber(int n) {
    static int rev = 0;
    static int base_pos = 1;
    
    if(n > 0) {
        reverseNumber(n/10);
        rev += (n%10)*base_pos;
        base_pos *= 10;
    }
    
    return rev;
}*/

// Approach - 3: Using String  =>  Time Complexity: O(log(n)), Space Complexity: O(1)
int reverseNumber(int n) {
    
    // converting number to string
    string str = to_string(n);
 
    // reversing the string
    reverse(str.begin(), str.end());
 
    // converting string to integer
    n = stoi(str);
    
    return n;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "After reverse number = " << reverseNumber(num) << endl;
    
    return 0;
}