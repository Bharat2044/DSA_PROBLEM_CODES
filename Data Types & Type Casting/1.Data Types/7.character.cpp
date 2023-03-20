#include<iostream>
using namespace std;

int main() {
    char a = 'x';
    cout << "a = " << a << endl;
    
    char b = 'xy';
    cout << "b = " << b << endl << endl;

    for(int i = 0; i < 256; i++) 
        cout << i << " => " << (char)i << endl;
    
    return 0;
}