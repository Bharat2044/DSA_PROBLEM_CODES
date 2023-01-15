#include<iostream>
#include<limits.h>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

//Approach-1  -->  Time Complexity = O(n*m) , Space Complexity = O(1)
//If array may or may not contains duplicate element
bool isElementPresentInArray(int arr[], int n, int ele) {   
   for (int i=0; i<n; ++i) {
      if (arr[i] == ele) 
         return true;
   }
   return false;
}
void printUnion(int arr1[], int arr2[], int m, int n) { 
    for(int i=0; i<m; i++) 
        cout << arr1[i] << "   ";
    for(int i=0; i<n; i++) {
        if(!isElementPresentInArray(arr1, m, arr2[i])) 
            cout << arr2[i] <<"   ";
    }
}
/* Approach-2 ==> using sorting  -->  Time Complexity = O(m*log(m)+n*log(n)) , Space Complexity = O(1)
//If array not contains duplicate element
void printUnion(int arr1[], int arr2[], int m, int n) { 
    int i = 0, j = 0;
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    while(i < m && j < n) {
        if(arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if(arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    //Print remaining elements of arr1
    while(i < m)
        cout << arr1[i++] << " ";
    // Print remaining elements of arr2
    while(j < n)
        cout << arr2[j++] << " ";
}*/

/* Approach-3 ==> using sorting  -->  Time Complexity = O(m*log(m)+n*log(n)) , Space Complexity = O(1)
//If array contains duplicate element
void printUnion(int arr1[], int arr2[], int m, int n) { 
    int i = 0, j = 0, k = INT_MIN;
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    while(i<m && j<n) {
        if(arr1[i]<arr2[j]) {
            if(k!=arr1[i]) {    //Checking duplicate elements
                cout << arr1[i] <<"   ";
                    k=arr1[i];
                }
                i++;
            }
            else {      //else if(arr2[j] < arr1[i])
                if(k!=arr2[j]) {    //Checking duplicate elements
                    cout << arr2[j] <<"   ";
                    k=arr2[j];
                }
                j++;
            }
        }
        // Print remaining elements of arr1
        while(i<m) {
            if(k!=arr1[i]) {    //Checking duplicate elements
                    cout << arr1[i] <<"   ";
                    k=arr1[i];
                }
                i++;
        }
        // Print remaining elements of arr2
        while(j<n) {
            if(k!=arr2[j]) {    //Checking duplicate elements
                cout << arr2[j] <<"   ";
                k=arr2[j];
            }
            j++;
        }
}*/

/* Approach-4  -->  Using set()  ==>  Time Complexity = O(m*log(m)+n*log(n)) , Space Complexity = O(m+n)
//If array contains unique or duplicate element
void printUnion(int arr1[], int arr2[], int m, int n) { 
    set<int> s;
    for(int i=0; i<m; i++)
        s.insert(arr1[i]);
    for(int i=0; i<n; i++)
        s.insert(arr2[i]);
    for (auto it : s)                       //for(auto it=s.begin(); it!=s.end(); ++it)
        cout << it << "   ";                    //cout << *it << "   ";
}*/

/* Approach-5  --> Improve set()  ==>  Time Complexity = O(max(m,n)) , Space Complexity = O(max(m,n))
//If array contains unique or duplicate element
void printUnion(int arr1[], int arr2[], int m, int n) { 
    set<int> s;
    int x = (n < m) ? n : m;
    for(int i=0; i<x; i++){
        s.insert(arr1[i]);
        s.insert(arr2[i]);
    }
    if(m > n) {
        for(int i=n; i<m; i++)
            s.insert(arr1[i]);
    }
    if(n > m) {
        for(int i=m; i<n; i++)
            s.insert(arr2[i]);
    }
    for (auto it : s)                       //for(auto it=s.begin(); it!=s.end(); ++it)
        cout << it << "   ";                    //cout << *it << "   ";
}*/

/* Approach-6  --> Using map()  ==>  Time Complexity = O(max(m,n)) , Space Complexity = O(max(m,n))
//If array contains unique or duplicate element
void printUnion(int arr1[], int arr2[], int m, int n) { 
    map<int, int> mp;
    for(int i=0; i<m; i++)
        mp.insert({arr1[i], i});
    for(int i=0; i<n; i++)
        mp.insert({arr2[i], i});
    for(auto it=mp.begin(); it!=mp.end(); ++it)    //for (auto it : mp)                       
        cout << it->first << "   ";                     //cout << it.first << "   ";                    
}*/
int main() {
    int arr1[] = {1, 3, 11, 5, 7 ,2};
    int arr2[] = {2, 2, 7, 25, 8, 10, 12};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    printUnion(arr1, arr2, n1, n2);
    return 0;
}