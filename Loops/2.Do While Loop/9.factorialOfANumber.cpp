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
        int i = 1, fact = 1;
        
        do {            
            fact *= i;
            i++;
        } while(i <= num);
        
        cout << num << "! = " << fact << endl;
    }
    
    return 0;
}