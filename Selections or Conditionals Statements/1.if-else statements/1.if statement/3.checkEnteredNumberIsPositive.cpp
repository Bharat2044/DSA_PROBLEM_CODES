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

    cout << "This statement is always executed.";

    return 0;
}