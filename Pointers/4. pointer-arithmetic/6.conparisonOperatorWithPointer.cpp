#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int *aptr = &a;
    int *bptr = &b;
    
    cout << (aptr < bptr) << endl;
    cout << (aptr > bptr) << endl;
    cout << (aptr <= bptr) << endl;
    cout << (aptr >= bptr) << endl;
    cout << (aptr == bptr) << endl;
    cout << (aptr != bptr) << endl;
    
    if(aptr <= bptr)
        cout << "Hi" << endl;
    else
        cout << "Hello" << endl;
        
    //Note: We can use comparison operator on same pointer datatypes.
    char c = 'a';
    char *cptr = &c;
    //XXX  cout << (cptr <= aptr) << endl;    // Error: comparison between distinct pointer types 'char*' and 'int*' lacks a cast

    return 0;
}
