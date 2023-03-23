#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if(num1 < num2 || num1 > num2 || num1 == num2) {
        if(num1 > num2) 
            cout << num2 << " is less than " << num1 << endl;
        if(num1 == num2) 
            cout << "Both are equal" << endl;
        if(num1 < num2)
            cout << num1 << " is less than " << num2 << endl;
    }

    return 0;
}
