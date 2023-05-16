#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if((num%3 == 0 || num%5 == 0) && num%15 != 0) 
        cout << num << " is divisible by 3 or 5, but not 15";
    else
        cout << " Not matching condition";

    return 0;
}
