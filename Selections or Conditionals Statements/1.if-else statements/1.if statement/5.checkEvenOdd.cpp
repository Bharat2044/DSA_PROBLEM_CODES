#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if(num%2 == 0)
        cout << num << " is a even number";

    if(num%2 != 0)
        cout << num << " is a odd number";

    return 0;
}
