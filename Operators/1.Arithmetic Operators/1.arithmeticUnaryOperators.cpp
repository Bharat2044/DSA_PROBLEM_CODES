#include <iostream>
using namespace std;

int main() {
    int x;
    int a = 5;

    // post increment
    x = a++;
    cout << "value of x is " << x << ", value of a is " << a << endl;

    // pre increment
    x = ++a;
    cout << "value of x is " << x << ", value of a is " << a << endl;

    // post decrement
    x = a--;
    cout << "value of x is " << x << ", value of a is " << a << endl;

    // pre decrement
    x = --a;
    cout << "value of x is " << x << ", value of a is " << a << endl;

    return 0;
}
