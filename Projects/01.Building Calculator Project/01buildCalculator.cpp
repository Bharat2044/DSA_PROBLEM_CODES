#include <iostream>
using namespace std;

const int ZEN_VALUE = 1;
const int NORMAL_VALUE = 0;
const int EXIT_VALUE = -1;

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

int modulo(int a, int b) {
    return a%b;
}

int factorial(int n) {
    int fact = 1;
    
    for(int i = 1; i<=n; i++) 
        fact *= i;
        
    return fact;
}

int numberOfZerosAtEndOfFactorial(int n) {
    int count = 0;

    // 1. Using for loop
    /*for(int i=5; n/i>=1; i*=5)
        count += n/i;*/

    // 2. Using while loop
    while(n > 0) {
        count += n/5;
        n /= 5;
    }
    
    return count;
}

int zen_mode() {
    string s;
    cin >> s;   // normal "1"  "123"
    
    if(s == "normal")           // used to go zen_mode to normal_mode
        return NORMAL_VALUE;
    if(s == "exit")           // used to exit from zen_mode
        return EXIT_VALUE;
        
    int x = stoi(s);   // conver string to integer  =>  "1234" -> 1234

    string operation;
    cin >> operation;

    if(operation == "+") {
        int y;
        cin >> y;
        cout << sum(x, y) << endl;
    }
    else if(operation == "-") {
        int y;
        cin >> y;
        cout << difference(x, y) << endl;
    }
    else if(operation == "*") {
        int y;
        cin >> y;
        cout << multiplication(x, y) << endl;
    }
    else if(operation == "/") {
        int y;
        cin >> y;
        cout << division(x, y) << endl;
    }
    else if(operation == "%") {
        int y;
        cin >> y;
        cout << modulo(x, y) << endl;
    }
    else if(operation == "!") {
        cout << factorial(x) << endl;
    }
    else if(operation == "!!") {
        cout << numberOfZerosAtEndOfFactorial(x) << endl;
    }
    
    return ZEN_VALUE;
}

int normal_mode() {
    cout << "\t1. Add 2 numbers" << endl;
    cout << "\t2. Subtract 2 numbers" << endl;
    cout << "\t3. Multiply 2 numbers" << endl;
    cout << "\t4. Divide 2 numbers" << endl;
    cout << "\t5. Remainder of 2 numbers" << endl;
    cout << "\t6. Factorial of a number" << endl;
    cout << "\t7. Numbers of zeros in a factorial of a number" << endl;
    cout << "\t8. Enter Zen Mode" << endl;
    cout << "\tAnything else to exit" << endl << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    int a, b;
    if(choice>=1 && choice<=5) {
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
            cout << a << "%" << b << " = " << modulo(a, b) << endl;
            break;

        case 6:
            cout << "Enter a number: ";
            cin >> a;
            cout << a <<"! = " << factorial(a) << endl;
            break;
            
        case 7:
            cout << "Enter a number: ";
            cin >> a;
            cout << a << "!! = " << numberOfZerosAtEndOfFactorial(a) << endl;
            break;

        case 8:
            return ZEN_VALUE;   // zen mode
        
        default:
            return EXIT_VALUE;
    }

    return NORMAL_VALUE;   // stay in normal mode
}

int main() {
    int mode = 0;

    do {
        if(mode == NORMAL_VALUE) {
            mode = normal_mode();
        } 
        else if(mode == ZEN_VALUE) {
            mode = zen_mode();
        }
    } while(mode != EXIT_VALUE);
    
    cout << "Thank you for using calculator ^_^" << endl;

    return 0;
}