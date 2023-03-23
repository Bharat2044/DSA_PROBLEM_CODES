// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Approach - 1 => Time Complexity = O(n)
    /*for (int i = 1; i <= num; ++i) {
        sum += i;
    }*/
    
    
    // Approach - 2 => Time Complexity = O(1)
    sum = (num*(num+1) / 2);

    cout << "Sum = " << sum << endl;

    return 0;
}