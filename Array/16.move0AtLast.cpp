//Links : Leetcode => https://leetcode.com/problems/move-zeroes/
//      GFG => https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

#include <iostream>
#include<algorithm>
using namespace std;

//print array
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "   ";
    cout << endl;
}

/*Approach - 1 => Time Complexity = O(n), Space Complexity = O(1) 
//print in order
void moveZeroesLast(int arr[], int n) {
    int k = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0)
            arr[k++] = arr[i];
    }
    for(int i=k; i<n; i++)
        arr[k++] = 0;
}*/

/*Approach - 2 => Time Complexity = O(n), Space Complexity = O(1) 
//print in order
void moveZeroesLast(int arr[], int n) {
    int k=0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0)
            swap(arr[i], arr[k++]);
    }
}*/

//Approach - 3 -->  Using Dutch National Flag Algorithm -->  Time Complexity = (n) , Space Complexity = O(1)
//Not print in order
void moveZeroesLast(int arr[], int n) {     
    int s=0, e=n-1;
    while(s < e){
        if(arr[s] == 0)
            swap(arr[s], arr[e--]);
        else    
            s++;
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, -2, 0, 3, 2, 0, 1, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeroesLast(arr,n);
    printArray(arr, n);
    
    return 0;
}