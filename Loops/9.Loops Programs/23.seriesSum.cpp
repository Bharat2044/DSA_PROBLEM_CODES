// i/p: n = 3
// o/p: 1 + 2 + 4 = 7

// i/p: n = 5
// o/p: 1 + 2 + 4 + 7 + 11 = 25


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    
    int sum = 0;
    int term = 1;
    
    for(int i=1; i<=n; i++) {
        sum += term;
        term += i;
    }
    
    cout << "Sum = " << sum;

    return 0;
}
