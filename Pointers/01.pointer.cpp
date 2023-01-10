#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr1;      //Pointer Declaration
    ptr1 = &x;      //Pointer Initialization
    cout<< &x <<"    "<< ptr1 <<"    " << &ptr1 <<"\n";
    cout<< x <<"    "<< *ptr1 <<"\n\n";

    int y = 20;
    int *ptr2 = &y; //Pointer Declaration + Initialization
    cout<< &y <<"    "<< ptr2 <<"    " << &ptr2 <<"\n";
    cout<< y <<"    "<< *ptr2 <<"\n\n";                     // * is a deferencing operator

    return 0;
}
