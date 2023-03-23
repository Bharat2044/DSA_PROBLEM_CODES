#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a positive number: ";
    cin >> num;
    
    int sum = 0;
    while(num) {
        if(num < 0)
            break;
            
        sum += num;
        
        cout << "Enter a positive number: ";
        cin >> num;
    } 
    cout << "Sum = " << sum << endl;
    
    return 0;
}