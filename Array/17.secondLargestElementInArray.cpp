//Question Links : GFG => https://practice.geeksforgeeks.org/problems/second-largest3735/1

#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

/* Approach - 1 => Using Predefined Sort Method
//Time Complexity = O(nlogn), Space Complexity = O(1)
int secondLargest(int arr[], int n) {
    sort(arr, arr+n);
    int ans = INT_MIN;
    //Checking duplicate 
    for(int i=n-2; i>=0; i++) {
        if(arr[i] != arr[n-1]){
            ans = arr[i];
            break;
        }
    }
    return ans;
}*/

//Approach - 2 => Brute Force  => Using array manipulation
//Time Complexity = O(n), Space Complexity = O(1)
int secondLargest(int arr[], int n) {
    int largest = INT_MIN, ans = INT_MIN;
    //find largest element in array
    for(int i=0; i<n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }
    //traverse array and set the largest element into minimum value
    for(int i=0; i<n; i++) {
        if(arr[i] == largest)
            arr[i] = INT_MIN;
    }
    //now again find the largest 
    for(int i=0; i<n; i++) {
        if(arr[i] > ans)
            ans = arr[i];
    }
    return ans;
}
/*Approach - 3 => Brute Force  => 2-iteration
//Time Complexity = O(n), Space Complexity = O(1)
int secondLargest(int arr[], int n) {
    int largest = INT_MIN;
    //find largest element in array
    for(int i=0; i<n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }
    
    int ans = INT_MIN;
    //compare with largest to fing second largest
    for(int i=0; i<n; i++) {
        if((arr[i]>ans) && (arr[i]<largest))
            ans = arr[i];
    }
    return ans;
}*/

/*Approach - 4  => 1-iteration
//Time Complexity = O(n), Space Complexity = O(1)
int secondLargest(int arr[], int n) {
    int largest = INT_MIN, secLargest = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        }
        else if((arr[i]>secLargest) && (arr[i]!=largest))
            secLargest = arr[i];
    }    
    return secLargest;
}*/

/*Approach - 5  => Using set
//Time Complexity = O(nlogn), Space Complexity = O(n)
int secondLargest(int arr[], int n) {
    set<int> s;
    for(int i=0; i<n; i++)
        s.insert(arr[i]);
    vector<int> v;
    for(auto ele : s)
        v.push_back(ele);
    return v[v.size()-2];
}*/

int main()
{
    int arr[] = {1, 2, 6, 9, 11, 10, 123, 12, 0, 15,44, 700, 1, 700};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second lagest element = " << secondLargest(arr, n);

    return 0;
}
