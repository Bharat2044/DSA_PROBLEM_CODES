#include <iostream>
#include <cmath>
using namespace std;

/* Approach - 1 : Iterative Solution  =>  Time Complexity: O(log(n)) or O(Number of digits), Space Complexity: O(1)
int countDigits(int n) {
    if (n == 0)
        return 1;
        
    int count = 0;
    while(n != 0) {
        n = n/10;
        ++count;
    }
    return count;
}*/

/* Approach - 2 : Recursive Solution  =>  Time Complexity: O(log(n)), Space Complexity: O(log(n))
int countDigits(int n) {
    if(n/10 == 0)
        return 1;
        
    return 1 + countDigits(n/10);
}*/

/* Approach - 3 : Log-based Solution  =>  Time Complexity: O(1), Space Complexity: O(1)
int countDigits(int n) {
    return log10(n)+1;
}*/

// Approach - 4 : Using String  =>  Time Complexity: O(1), Space Complexity: O(Number of digits)
int countDigits(int n) {
    string ans = to_string(n);
    
    return ans.size();
}
int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Toatl number of digits = " << countDigits(num) << endl;
    
    return 0;
}