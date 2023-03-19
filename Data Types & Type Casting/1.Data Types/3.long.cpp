#include<iostream>
using namespace std;

int main() {
    long a = 10;
    cout << "a = " << a << endl;
    
    signed long b = 20;
    cout << "b = " << b << endl;
    
    unsigned long c = 30;
    cout << "c = " << c << endl;
    
    long d = 9223372036854775807;
    cout << "d = " << d << endl;
    
    unsigned long e = 9223372036854775807;
    cout << "e = " << e << endl;
    
    // if out of range
    long f = 9223372036854775808;
    cout << "f = " << f << endl;
    
    unsigned long g = 9223372036854775808;
    cout << "g = " << g << endl;
    
    long h = -1;
    cout << "h = " << h << endl;
    
    unsigned long i = -1;
    cout << "i = " << i << endl;
    
    long long j = 9223372036854775808;
    cout << "j = " << j << endl;
    
    unsigned long long k = 9223372036854775808;
    cout << "k = " << k << endl;    
    
    return 0;
}