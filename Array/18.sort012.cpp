//Links : Leetcode => https://leetcode.com/problems/sort-colors/
//      GFG => https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

#include<iostream>
#include<algorithm>
using namespace std;

//print array
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "   ";
    cout << endl;
}

/*Approach - 1 => Using predefined sort function
//Time Complexity = O(nlogn), Space Complexity = O(1) 
void sort012(int arr[], int n) {
    sort(arr, arr+n);
}*/

//Approach - 2 => Brute Force  ==>   Time Complexity = O(n), Space Complexity = O(n) 
void sort012(int arr[], int n) {
    int temp[n], k = 0;
    //copy 0 into temp array
    for(int i=0 ;i<n; i++){
        if(arr[i] == 0)
            temp[k++] = arr[i];
    }
    //copy 1 into temp array
    for(int i=0 ;i<n; i++){
        if(arr[i] == 1)
            temp[k++] = arr[i];
    }
    //copy 2 into temp array
    for(int i=0; i<n; i++){
        if(arr[i] == 2)
            temp[k++] = arr[i];
    }
    
    //copy temp array element into original array
    for(int i=0;i<n; i++)
        arr[i] = temp[i];
}

/*Approach - 3 => Time Complexity = O(n), Space Complexity = O(1) 
void sort012(int arr[], int n) {
    int cnt0 = 0, cnt1 = 0, cnt2 = 0, k = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0)
            cnt0++;
        else if(arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }
    while(cnt0--)
        arr[k++] = 0;
    while(cnt1--)
        arr[k++] = 1;
    while(cnt2--)
        arr[k++] = 2;
}*/

/*Approach - 4 => Using Dutch National Flag Method
//Time Complexity = O(n), Space Complexity = O(1) 
void sort012(int arr[], int n) {
    int low = 0, high = n-1, mid = 0;
    while(mid <= high) {
        switch(arr[mid]) {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}*/
 
int main() {
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    printArray(arr, n);
    
    return 0;
}