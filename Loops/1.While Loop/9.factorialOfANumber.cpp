#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a positive number: ";
    cin >> num;
    
    if(num < 0) {
        cout << "Factorial of negative number is not defined 😜";
    }
    else {
        int i = 2, fact = 1;
        while(i <= num) {
            fact *= i;
            i++;
        } 
        
        cout << num << "! = " << fact << endl;
    }
    
    return 0;
}