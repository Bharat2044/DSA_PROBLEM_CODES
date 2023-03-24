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
        int fact = 1;
    
        for(int i=2; i<=num; i++) {
            fact *= i;
        }
        
        cout << num << "! = " << fact << endl;
    }
    
    return 0;
}