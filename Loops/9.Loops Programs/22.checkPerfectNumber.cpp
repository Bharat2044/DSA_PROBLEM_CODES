// Perfect Numbers: perfect number, a positive integer that is equal to the sum of its proper divisors. 
// The smallest perfect number is 6, which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.

// i/p: 6
// o/p: Perfect Number     =>  1 + 2 + 3 = 6


#include <iostream>
using namespace std;

// Time Complexity: O(n), Space Complexity: O(1)
bool isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) 
            sum += i;
    }

    return (sum == n);
}

/* Time Complexity: O(sqrt(n)), Space Complexity: O(1)
bool isPerfect(int n) {
    int sum = 1;

    for (int i=2; i*i<=n; i++) {
        if (n%i == 0) {
            sum += i;
            if (i*i != n)
                sum += n/i;
        }
    }

    return (sum == n);
}*/

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    if (isPerfect(n))
        cout << n << " is a Perfect Number" << endl;
    else 
        cout << n << " is Not a Perfect Number" << endl;
    

    return 0;
}