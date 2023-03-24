#include <iostream>
using namespace std;

/* Approach - 1: Iterative Solution  =>  Time Complexity: O(log(n)), Space Complexity: O(1)
int digitsSum(int n) {
   int sum = 0;
   
    while(n != 0) {
        sum += n%10;
        n /= 10;
    }
    
    return sum;
}*/

/* Approach - 2: Recursive Solution  =>  Time Complexity: O(log(n)), Space Complexity: O(log(n))
int digitsSum(int n) {
    if(n == 0)
        return 0;
    
    return (n%10) + digitsSum(n/10);
}*/

// Approach - 3: Using String  =>  Time Complexity: O(n), Space Complexity: O(1)
int digitsSum(int n) {
    
    string str = to_string(n);
    int sum = 0;
 
    // Traversing through the string
    for(int i=0; i<str.length(); i++) {
        sum = sum + str[i] - '0';
    }
    
    return sum;
}
int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Sum of digits = " << digitsSum(num) << endl;
    
    return 0;
}