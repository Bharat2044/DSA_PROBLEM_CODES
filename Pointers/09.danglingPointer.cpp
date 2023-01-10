#include <iostream>
using namespace std;
int *fun() {
    int x = 10;
    return &x;  //Never return address of local variable
}
int main() {
    int *ptr;
    ptr = fun();
    cout << *ptr;   //Segmentation fault

    return 0;
}
