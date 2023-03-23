// program to find the sum of positive numbers
// if the user enters a negative numbers, break ends the loop
// the negative number entered is not added to sum

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while(true) {
        // take input from the user
        cout << "Enter a positive number: ";
        cin >> num;

        // break condition
        if(num < 0)
            break;     
            
         // add all positive numbers
        sum += num;      
    } 
    cout << "Sum = " << sum << endl;
    
    return 0;
}