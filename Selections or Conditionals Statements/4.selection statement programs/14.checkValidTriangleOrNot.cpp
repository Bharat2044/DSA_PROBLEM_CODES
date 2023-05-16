#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of triangle:\n";
    cin >> a >> b >> c;

    if(a+b>c && b+c>a && a+c>b) 
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}
