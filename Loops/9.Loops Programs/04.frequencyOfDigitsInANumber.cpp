#include <iostream>
using namespace std;

//  Time Complexity: O(log(n)), Space Complexity: O(1)
int freqOfDigits(int n, int d) {
   int count = 0;
   
    while(n != 0) {
        if(n%10 == d)
            count++;
        n /= 10;
    }
    return count;
}
int main() {
    int num, digit;
    
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit want to check frequency: ";
    cin >> digit;
    
    cout << "Answer = " << freqOfDigits(num, digit) << endl;
    
    return 0;
}