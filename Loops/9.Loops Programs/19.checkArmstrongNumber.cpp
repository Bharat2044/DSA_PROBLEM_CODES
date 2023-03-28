// Armstrong Numbers : A number is called Armstrong number when the sum of the nth power of each digit is equal to the given number.
// For example 0, 1, 153, 370, 371 407, 1634, 8208 and 9474 are the Armstrong numbers.

// i/p: 153
// o/p: 153 is an Armstrong number      => 1^3 + 5^3 + 3^3 = 153

// i/p: 1634
// o/p: 1634 is an Armstrong number     => 1^4 + 6^4 + 3^4 + 4^4 = 1634

#include <iostream>
#include <cmath>
using namespace std;

// Time Complexity: O(log(n) * log(rem)), Space Complexity: O(1)
bool isArmstrong(int n) {
    int sum = 0;
    int temp = n;

    int count = log10(n)+1;

    while(temp != 0) {
        int rem = temp % 10;

        sum += pow(rem, count);
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isArmstrong(n))
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;

    return 0;
}