#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    /* Approach 1: Using if...else Ladder
    // leap year if perfectly divisible by 400
    if (year % 400 == 0) 
        cout << year << " is a leap year.";

    // not a leap year if divisible by 100, but not divisible by 400
    else if (year % 100 == 0) 
        cout << year << " is not a leap year.";

    // leap year if not divisible by 100, but divisible by 4
    else if (year % 4 == 0) 
        cout << year << " is a leap year.";

    // all other years are not leap years
    else 
        cout << year << " is not a leap year.";*/

    
    /* Approach 2: Using Nested if
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) 
                cout << year << " is a leap year.";
            else 
                cout << year << " is not a leap year.";
        }
        else 
        cout << year << " is a leap year.";
   }
    else 
        cout << year << " is not a leap year.";*/


    // Approach 3: Using Logical Operators
    // if year is divisible by 4 AND not divisible by 100 OR if year is divisible by 400, then it is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
        cout << year << " is a leap year.";    
    else 
        cout << year << " is not a leap year.";    

  return 0;
}