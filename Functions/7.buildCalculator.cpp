#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int difference(int a, int b) {
    return a-b;
}

int multiplication(int a, int b) {
    return a*b;
}

int division(int a, int b) {
    return a/b;
}

int factorial(int n) {
    int fact = 1;
    
    for(int i = 1; i<=n; i++) 
        fact *= i;
        
    return fact;
}

int numberOfZerosInFactorial(int n) {
    int count = 0;

    for(int i=5; n/i>=1; i*=5)
        count += n/i;

    return count;
}

int zen_mode() {
    return 1;
}

int normal_mode() {
    cout << "\t1. Add 2 numbers" << endl;
    cout << "\t2. Subtract 2 numbers" << endl;
    cout << "\t3. Multiply 2 numbers" << endl;
    cout << "\t4. Divide 2 numbers" << endl;
    cout << "\t5. Factorial of a number" << endl;
    cout << "\t6. Numbers of zeros in a factorial of a number" << endl;
    cout << "\t7. Enter Zen Mode" << endl;
    cout << "\tAnything else to exit" << endl << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    int a, b;
    if(choice>=1 && choice<=4) {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    switch(choice) {
        case 1:
            cout << a << "+" << b << " = " << sum(a, b) << endl;
            break;

        case 2:
            cout << a << "-" << b << " = " << difference(a, b) << endl;
            break;

        case 3:
            cout << a << "*" << b << " = " << multiplication(a, b) << endl;
            break;

        case 4:
            cout << a << "/" << b << " = " << division(a, b) << endl;
            break;

        case 5:
            cout << "Enter a number: ";
            cin >> a;
            cout << a <<"! = " << factorial(a) << endl;
            break;
            
        case 6:
            cout << "Enter a number: ";
            cin >> a;
            cout << "Number of zeros in " << a << "! = " << numberOfZerosInFactorial(a) << endl;
            break;

        case 7:
            return 1;   // zen mode
    }
    
    return 0;   // normal mode
}

int main() {
    int mode = 0;

    while(true) {
        if(mode == 0) {
            mode = normal_mode();
        } 
        else if(mode == 1) {
            mode = zen_mode();
        }
    }

    return 0;
}