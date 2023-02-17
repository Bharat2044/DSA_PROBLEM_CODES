#include<iostream>
#include<algorithm>
using namespace std;

//print array
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "   ";
    cout << endl;
}

//Approach - 1 ==> using 2-pointer approach   ==>   Time Complexity = O(n), Space Complexity = O(1)
void sort01(int arr[], int n) {
    int st = 0, end = n-1;
    while(st < end) {
        if(arr[st] == 1)
            swap(arr[st], arr[end--]);
        else
            st++;
    }
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort01(arr, n);
    printArray(arr, n);
    
    return 0;
}
