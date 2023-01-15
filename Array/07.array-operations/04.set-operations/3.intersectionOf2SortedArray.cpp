#include<iostream>
#include<limits.h>
#include<set>
using namespace std;
/*Approach-1  -->   Time Complexity = O(m + n) , Space Complexity = O(1) <- Auxilary Space
//If Array contains only unique element
void printIntersection(int *arr1, int *arr2, int m, int n) {
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

//Approach-2  -->   Time Complexity = O(m + n) , Space Complexity = O(1) <- Auxilary Space
//If Array contains duplicate element
void printIntersection(int *arr1, int *arr2, int m, int n){
    int i=0, j=0,k=-1;
    while((i < m) && (j<n)) {
        // if (i > 0 && arr1[i] == arr1[i - 1]) {        //For Handling duplicates
        //     i++;
        //     continue;
        // }
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
}

/*Approach-3  --> Using Set ->   Time Complexity = O(m*logm + n*logn) , Space Complexity = O(min(m, n)) <- Auxilary Space
//If Array contains duplicate element
void printIntersection(int *arr1, int *arr2, int m, int n){
    set<int> s;
    int i=0, j=0;
    while((i < m) && (j<n)) {
        if(arr1[i] == arr2[j]) {  
            s.insert(arr1[i]);
            i++;j++;
        }
        else if(arr1[i] < arr2[j]) 
            i++;
        else    //else if(arr1[i] > arr2[j]) 
            j++;
    }
    for(auto it : s)
        cout << it << "   ";
}*/
int main() {
    int arr1[] = {1, 2, 2, 3, 5, 7, 11, 32};
    int arr2[] = {2, 2, 3, 3, 7,  8, 10, 11, 24, 32};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    printIntersection(arr1, arr2, n1, n2);
    return 0;
}