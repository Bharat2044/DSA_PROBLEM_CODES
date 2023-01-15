#include<iostream>
#include<limits.h>
#include<set>
#include<algorithm>
using namespace std;
/*Approach-1 ==> Using Sorting  -->   Time Complexity = O(max(m*log(m), n*log(n))+min(m, n)) , Space Complexity = O(1) <- Auxilary Space
//If Array contains only unique element
void printIntersection(int *arr1, int *arr2, int m, int n) {
    sort(arr1, arr1+m);
    sort(arr2, arr2+m);
    int i=0, j=0;
    while((i < m) && (j<n)) {
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] << "   ";
            i++;j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
}*/

/*Approach-2 ==> Using Sorting  -->   Time Complexity = O(max(m*log(m), n*log(n))+min(m, n)) , Space Complexity = O(1) <- Auxilary Space
//If Array contains duplicate element
void printIntersection(int *arr1, int *arr2, int m, int n){
    sort(arr1, arr1+m);
    sort(arr2, arr2+m);
    int i=0, j=0,k=-1;
    while((i < m) && (j<n)) {
        if(arr1[i] == arr2[j]) {
            if(k!=arr1[i]){       //For Handling duplicates
                cout << arr1[i] << "   ";
                k=arr1[i];
            }
            i++;j++;
            
        }
        else if(arr1[i] < arr2[j])
            i++;
        else   //if(arr2[j] < arr1[i])
            j++;
    }
}*/

/*Approach-3  --> Using Set ->   Time Complexity = O(m*logm + n*logn) , Space Complexity = O(min(m, n)) <- Auxilary Space
//If Array contains unique element
void printIntersection(int *arr1, int *arr2, int m, int n){
    // Defining set container s
    set<int> s;
    //  Insert the elements of arr1[] to set s
    for (int i=0; i<m; i++) 
        s.insert(arr1[i]);
 
    for (int i=0; i<n; i++) {
        // If element is present in set then
        if (s.count(arr2[i])) 
            cout << arr2[i] << " ";
    }
}*/

/*Approach-4  --> Using Set ->   Time Complexity = O(m*logm + n*logn) , Space Complexity = O(min(m, n)) <- Auxilary Space
//If Array contains duplicate element
void printIntersection(int *arr1, int *arr2, int m, int n) {
    set<int> s;
    for (int i=0; i<m; i++) 
        s.insert(arr1[i]);
 
    for (int i=0; i<n; i++) {
        if(s.find(arr2[i]) != s.end()) {
            s.erase(arr2[i]);
            cout << arr2[i] << " ";
        }
    }
}*/

//Approach-5 ==> Using Sorting  -->   Time Complexity = O(max(m*log(m), n*log(n))+min(m, n)) , Space Complexity = O(1) <- Auxilary Space
//If Array contains only unique element
bool isElementPresentInArray(int arr[], int n, int ele) {   
   for (int i=0; i<n; ++i) {
      if (arr[i] == ele) 
         return true;
   }
   return false;
}
void printIntersection(int arr1[], int arr2[], int m, int n) { 
    for(int i=0; i<n; i++) {
        if(isElementPresentInArray(arr1, m, arr2[i])) 
            cout << arr2[i] <<"   ";
    }
}
int main() {
    int arr1[] = {1, 2, 20, 5, 12, 2, 5, 11, 32, 2};
    int arr2[] = {2, 2, 3, 2, 5, 25, 32, 21, 12, 11, 12};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    printIntersection(arr1, arr2, n1, n2);
    return 0;
}