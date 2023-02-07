//Links : https://www.geeksforgeeks.org/program-to-check-if-an-array-is-palindrome-or-not/

#include <iostream>
using namespace std;

//Approach - 1  => Brute Force   ===> Time Complexity = O(n), Space Complexity = O(n)
bool checkPalindrome(int arr[], int n) {
    int temp[n];
    int x = 0;
    //store arr element into the temp array in reverse order
    for(int i=n-1; i>=0; i--)
        temp[x++] = arr[i];
    //compare both array element
    for(int i=0; i<n; i++) {
        if(temp[i] != arr[i])
            return false;
    }
    return true;
}

/*Approach - 2  => Using 2-pointer   ===> Time Complexity = O(n), Space Complexity = O(1)
bool checkPalindrome(int arr[], int n) {
    int s = 0, e = n-1;
    while(s < e) {
        if(arr[s++] != arr[e--])
            return false;
    }
    return true;
}*/
 
int main() {
    int arr[] = { 1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(checkPalindrome(arr, n)) 
        cout << "Array is Palindrome";
    else
        cout << "Array is not Palindrome";
    
    return 0;
}