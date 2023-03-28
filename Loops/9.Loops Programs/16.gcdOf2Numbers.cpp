#include <iostream>
using namespace std;

// Approach - 1: Time Complexity - O(min(a, b)), Space Complexity - O(1).
int gcd(int a, int b) {
    
    int ans = 1;
    int x = min(a, b);

    for (int i = 2; i <= x; i++) {
        if (a % i == 0 && b % i == 0) 
            ans = i;
    }

    return ans;
}

/* Approach - 2: Time Complexity - O(sqrt(min(a, b))), Space Complexity - O(1).
int gcd(int a, int b) {
    
    int ans = 1;
    int x = min(a, b);

    for (int i = 1; i * i <= x; i++) {
        if (a % i==0 && b % i == 0) 
            ans = i;

        if (a % (x/i)==0 && b % (x/i) == 0) 
            return x/i;
    }

    return ans;
}*/

int main() {
    int x, y;
    cout << "Enter two numbers to find their GCD: ";
    cin >> x >> y;
    
    // Calling the gcd function.
    int GCD = gcd(x, y);    
    
    cout << "GCD(" << x << " ," << y << ") = " << GCD;

    return 0;
}
