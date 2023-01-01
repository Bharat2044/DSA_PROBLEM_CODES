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
    
    (*iptr)++;
    (*fptr)++;

    cout << &x << "    " << iptr << "\n"; 
    cout << x << "    " << *iptr << "\n"; 
    cout << &y << "    " << fptr << "\n"; 
    cout << y << "    " << *fptr << "\n\n"; 
    
    iptr++;
    fptr++;

    cout << &x << "    " << iptr << "\n"; 
    cout << x << "    " << *iptr << "\n"; 
    cout << &y << "    " << fptr << "\n"; 
    cout << y << "    " << *fptr << "\n\n"; 

    return 0;
}