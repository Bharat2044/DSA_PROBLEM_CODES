// Msgic Number: A magic number is defined as a number which can be expressed as a power of 5 or sum of unique powers of 5. First few magic numbers are 5, 25, 30(5 + 25), 125, 130(125 + 5), ….

// Input: n = 2     => binary of 2 = 10 = 1*5^2 + 0*5^1  =  25 + 0 = 25
// Output: 25

// Input: n = 5     => binary of 5 = 101 = 1*5^3 + 0*5^2 + 1*5^1 = 125 + 0 + 5 = 130
// Output: 130 


#include <iostream>
using namespace std;

int findNthMagicNumber(int n) {
    int pow = 1, ans = 0;

    // Go through every bit of n
    while(n) {
        pow = pow*5;

        // If current bit is set or 1
        if (n & 1)
            ans += pow;
        
        // proceed to next bit
        n >>= 1;        // n = n/2
    }
    return ans;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << num << "th magic number is " << findNthMagicNumber(num);
    
    return 0;
}