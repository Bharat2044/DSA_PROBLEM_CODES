#include<iostream>
using namespace std;

int main() {            
    int arr[] = {2, 4, 6, 8, 10};             //Array Declaration + Initialization
    int size = sizeof(arr) / sizeof(arr[0]);    //Way to find size of array
    cout << "Size of array = " << size;
    
    return 0;
}