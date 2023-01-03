#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int &y = x;
    int &z = x;
    cout << &x  << "    " << &y << "    " << &z << "\n";
    cout << x  << "    " << y << "    " << z << "\n\n";

    x++;
    cout << &x  << "    " << &y << "    " << &z << "\n";
    cout << x  << "    " << y << "    " << z << "\n\n";

    y++;
    cout << &x  << "    " << &y << "    " << &z << "\n";
    cout << x  << "    " << y << "    " << z << "\n\n";

    z++;    
    cout << &x  << "    " << &y << "    " << &z << "\n";
    cout << x  << "    " << y << "    " << z << "\n\n";

    //NOTE: Must initialize reference variable at the time of declaration.
    //NOTE: Reference variable can't be change.
    //NOTE: Reference variable never initialize with NULL.

    return 0;
}