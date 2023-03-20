#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // checks if the number is positive
    if (num > 0) {
        cout << "You entered a positive integer: " << num << endl;
    }
    // checks if the number is negative
    if (num < 0) {
        cout << "You entered a negative integer: " << num << endl;
    }
    // checks if the number is zero
    if (num == 0) {
        cout << "You entered a zero integer: " << num << endl;
    }

    return 0;
}