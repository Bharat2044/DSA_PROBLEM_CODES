#include<iostream>
using namespace std;

void fun(int arr[], int n) {
    int *ptr = arr;
    *ptr = 100;
    *(ptr+1) = 200;
    *(ptr+3) = 400;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    fun(arr, 5);
    for(int i=0; i<5; i++)
        cout << arr[i] <<"\t";
    cout<<"\n\n";

    return 0;
}
