// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    // take input from the user
    cout << "Enter a number: ";
    cin >> num;

    for (; num >= 0; ) {
        // add all positive numbers
        sum += num;

        // take input again if the number is positive
        cout << "Enter a number: ";
        cin >> num;
    }

    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}