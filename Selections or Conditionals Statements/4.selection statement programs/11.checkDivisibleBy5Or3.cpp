#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if((num%3 == 0) && (num%5 == 0)) 
        cout << num << " is divisible by both 3 and 5";
    else if(num%3 == 0)
        cout << num << " is divisible by 3";
    else if(num%5 == 0)
        cout << num << " is divisible by 5";
    else
        cout << num << " is not divisible by either 3 or 5";

    return 0;
}
