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


/*Approach - 1 => Brute Force ==> Time Complexity = O(n^2), Space Complexity = O(1) 
//print in order
void moveZeroesLast(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        if(arr[i] == 0) {
            for(int j=i+1; j<n; j++) {
                if(arr[j] != 0) {
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }
}*/

//Approach - 2  ==> Time Complexity = O(n), Space Complexity = O(n) 
//print in order
void moveZeroesLast(int arr[], int n) {
    int temp[n], k=0;
    //copy non-zero element in temp array
    for(int i=0; i<n; i++) {
        if(arr[i] != 0)
            temp[k++] = arr[i];
    }
    //copy zero element in temp array
    for(int i=0; i<n; i++) {
        if(arr[i] == 0)
            temp[k++] = arr[i];
    }
    //copy temp array element into arr
    for(int i=0; i<n; i++)
        arr[i] = temp[i];
}

/*Approach - 3 => Time Complexity = O(n), Space Complexity = O(1) 
//print in order
void moveZeroesLast(int arr[], int n) {
    int k = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0)
            arr[k++] = arr[i];
    }
    while(k < n)
        arr[k++] = 0;
}*/

/*Approach - 4 => Time Complexity = O(n), Space Complexity = O(1) 
//print in order
void moveZeroesLast(int arr[], int n) {
    int k = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0)
            swap(arr[i], arr[k++]);
    }
}*/

/*Approach - 5 -->  Using Dutch National Flag Algorithm -->  Time Complexity = (n) , Space Complexity = O(1)
//Not print in order
void moveZeroesLast(int arr[], int n) {     
    int s=0, e=n-1;
    while(s < e){
        if(arr[s] == 0)
            swap(arr[s], arr[e--]);
        else    
            s++;
    }
}*/

int main() {
    int arr[] = {0, 1, 2, 0, -2, 0, 3, 2, 0, 1, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeroesLast(arr,n);
    printArray(arr, n);
    
    return 0;
}