#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Approach - 1 => Time Complexity = O(n), Space Complexity = O(1)
    /*for (int i = 1; i <= num; ++i) {
        sum += i;
    }*/
    
    
    // Approach - 2 => Time Complexity = O(1), Space Complexity = O(1)
    sum = (num*(num+1) / 2);

    cout << "Sum = " << sum << endl;

    return 0;
}