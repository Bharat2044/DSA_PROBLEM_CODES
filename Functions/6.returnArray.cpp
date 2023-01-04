#include <iostream>
using namespace std;

int* fun(int n) {
    //int *p = (int*) malloc(n*sizeof(int));
    int *p = new int[n];
    for(int i=0; i<n; i++)
        *(p+i) = i+10;
    return p;
}
int main() {
    int *arr = NULL;
    arr = fun(5);
    for(int i=0; i<5; i++)
        cout << arr[i] << "    ";

    return 0;
}
