#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int *p;     
    int **q;
    int ***r;
    p = &x;
    q = &p;
    r = &q;
    cout << x << "    " << *p << "    " << **q << "    " << ***r <<"\n";
    cout << &x << "    " << &p << "    " << &q << "    " << &r <<"\n";
    cout << x << "    " << p << "    " << q << "    " << r <<"\n";

    return 0;
}