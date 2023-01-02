#include <iostream>
using namespace std;
int *fun() {
    static int x = 10;
    return &x;  
}
int main() {
    int *ptr;
    ptr = fun();
    cout << *ptr;   // 10

    return 0;
}
