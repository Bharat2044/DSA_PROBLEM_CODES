#include <iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout  << arr[i] << "   ";
    cout << endl;
}
/*Approach - 1 -->   Time Complexity = (n^2) , Space Complexity = O(1)
void moveNegativeEleLeft(int *arr, int n) { //Not print in order
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < 0) {
                swap(arr[i], arr[j]);
                break;
            }
        }
    }
}*/

/*Approach - 2 -->   Time Complexity = (n) , Space Complexity = O(n)
void moveNegativeEleLeft(int *arr, int n) { //Print in order
    int *temp = new int[n];     // create new dynamic array 
    int j = 0;
    //copy -ve element in temp array
    for(int i=0; i<n; i++){
        if(arr[i] < 0)
            temp[j++] = arr[i];
    }
    //copy +ve element in temp array
    for(int i=0; i<n; i++){
        if(arr[i] >= 0)
            temp[j++] = arr[i];
    }
    //copy temp array all element in original(arr) array
    for(int i=0; i<n; i++)
        arr[i] = temp[i];
        
    delete []temp;
}*/


/*Approach - 3 -->   Time Complexity = (n) , Space Complexity = O(1)
void moveNegativeEleLeft(int *arr, int n) {     //not print in order
    int j = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] < 0) {
            if(i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}*/

/*Approach - 4 -->  using sorting -->  Time Complexity = (n*logn) , Space Complexity = O(1)
void moveNegativeEleLeft(int *arr, int n) {     //Not print in order
    sort(arr, arr+n);
}*/

/*Approach - 5 -->  using 2 pointer approach -->  Time Complexity = (n) , Space Complexity = O(1)
void moveNegativeEleLeft(int *arr, int n) {     //Not print in order
    int s=0, e=n-1;
    while(s <= e) {
        if(arr[s]>=0 && arr[e]<0)
            swap(arr[s++], arr[e--]);
        else if(arr[s]>=0 && arr[e]>=0)
            e--;
        else if(arr[s]<0 && arr[e]<=0)
            s++;
        else{   //else if(arr[s]<0 && arr[e]>=0)
            s++;
            e--;
        }
    }
}*/
//Approach - 6 -->  Using Dutch National Flag Algorithm -->  Time Complexity = (n) , Space Complexity = O(1)
void moveNegativeEleLeft(int *arr, int n) {     //Not print in order
    int s=0, e=n-1;
    while(s < e){
        if(arr[s] < 0)
            s++;
        else if(arr[e] >= 0)
            e--;
        else
            swap(arr[s], arr[e]);
    }
}
int main()
{
    int arr[] = {1, -13, 5, -2, 7, 9, 0, -5, -21, 30, -22, 12, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before moved negative element left side:\n";
    printArray(arr, n);
    
    moveNegativeEleLeft(arr, n);
    
    cout << "After  moved negative element left side:\n";
    printArray(arr, n);

    return 0;
}
