#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    (num1 < num2) ? cout << num1 << " is less than " << num2  : (num1 > num2) ? cout << num1 << " is greater than " << num2 : cout << "Both are equal";
    
    return 0;
}
