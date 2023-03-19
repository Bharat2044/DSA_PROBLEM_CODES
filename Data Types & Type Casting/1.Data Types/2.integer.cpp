#include<iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "a = " << a << endl;
    
    signed int b = 20;
    cout << "b = " << b << endl;
    
    unsigned int c = 30;
    cout << "c = " << c << endl;
    
    int d = 2147483647;
    cout << "d = " << d << endl;
    
    unsigned int e = 2147483647;
    cout << "e = " << e << endl;
    
    // if out of range
    int f = 2147483648;
    cout << "f = " << f << endl;
    
    unsigned int g = 2147483648;
    cout << "g = " << g << endl;
    
    int h = -1;
    cout << "h = " << h << endl;
    
    unsigned int i = -1;
    cout << "i = " << i << endl;
    
    return 0;
}