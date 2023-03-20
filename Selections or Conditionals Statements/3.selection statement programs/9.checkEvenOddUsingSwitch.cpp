#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a Number : ";
    cin >> x;

    switch(x) {
        case 0:
            cout << "Number is Even";
            break;

        default:
            int y = x % 2;
            switch(y) {
                case 0:
                    cout << "Number is Even";
                    break;
                default:
                    cout << "Number is Odd";
            }
    }

    return 0;
}