#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    if(oper == '+')
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    else if(oper == '-')
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    else if(oper == '*')
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    else if(oper == '/')
        cout << num1 << " / " << num2 << " = " << num1 / num2;
    else    // operator is doesn't match any case constant (+, -, *, /)
        cout << "Error! The operator is not correct";
        
        
    return 0;
}