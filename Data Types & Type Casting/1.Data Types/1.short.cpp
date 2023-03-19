#include<iostream>
using namespace std;

int main() {
    short a = 10;
    cout << "a = " << a << endl;
    
    signed short b = 20;
    cout << "b = " << b << endl;
    
    unsigned short c = 30;
    cout << "c = " << c << endl;
    
    short d = 32767;
    cout << "d = " << d << endl;
    
    unsigned short e = 32767;
    cout << "e = " << e << endl;
    
    // if out of range
    short f = 32768;
    cout << "f = " << f << endl;
    
    unsigned short g = 32768;
    cout << "g = " << g << endl;
    
    short h = -1;
    cout << "h = " << h << endl;
    
    unsigned short i = -1;
    cout << "i = " << i << endl;
    
    return 0;
}