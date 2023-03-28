// Strong Numbers: A Strong number is a number, where the sum of the factorial of the digits is equal to the number itself. 1, 2, 145, and 40585 are some examples of Strong numbers.
// i/p: 145
// o/p: 145 is a strong number.         => 1! + 4! + 5! = 145

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

// Time Complexity: O(logn), Space Complexity: O(1)
bool isStrong(int n) {
    int sum = 0, temp = n;

    while(n > 0) {
        int d = n % 10;
            
        sum += factorial(d);
        n /= 10;
    }

    return sum == temp;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isStrong(n))
        cout << n << " is a strong number.";
    else
        cout << n << " is not a strong number.";

    return 0;
}