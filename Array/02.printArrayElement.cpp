#include<iostream>
using namespace std;

void printArray(int arr[], int n) {     //Time Complexity = O(n)
    for(int i=0; i<5; i++) {
        cout << arr[i] << "   ";         //You can use any ways to print array element
        //cout << i[arr] << "   ";
        //cout << *(arr+i) << "   ";
        //cout << *(i+arr) << "   ";
    }
        
}
int main() {            
    int arr[] = {2, 4, 6, 8, 10};             //Array Declaration + Initialization
    printArray(arr, 5);
    
    return 0;
}
