#include<iostream>
using namespace std;

int main() {
    int x = 10;
    float y = 5.5f;
    int *iptr = &x;
    float *fptr = &y;

    cout << &x << "    " << iptr << "\n"; 
    cout << x << "    " << *iptr << "\n"; 
    cout << &y << "    " << fptr << "\n"; 
    cout << y << "    " << *fptr << "\n\n"; 
    
    (*iptr) -= 5;
    (*fptr) -= 2.2;

    cout << &x << "    " << iptr << "\n"; 
    cout << x << "    " << *iptr << "\n"; 
    cout << &y << "    " << fptr << "\n"; 
    cout << y << "    " << *fptr << "\n\n"; 
    
    iptr -= 2;
    fptr -= 2;

    cout << &x << "    " << iptr << "\n"; 
    cout << x << "    " << *iptr << "\n"; 
    cout << &y << "    " << fptr << "\n"; 
    cout << y << "    " << *fptr << "\n\n"; 

    return 0;
}
