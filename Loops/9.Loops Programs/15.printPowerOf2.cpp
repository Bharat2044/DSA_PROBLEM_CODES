// ip: 1
// op: 2        => 2^1 = 2

// ip: 2
// op: 4        => 2^2 = 4

// ip: 3
// op: 8        => 2^3 = 8


#include <iostream>
using namespace std;

// Approach 1: Time Complexity: O(n), Space Complexity: O(1)
int powerOf2(int n) {
    int ans = 1;

    for (int i=1; i<=n; i++) {
        ans *= 2;
    }

    return ans;
}

/* Approach 2: Time Complexity: O(1), Space Complexity: O(1)
int powerOf2(int n) {
    
    return 1 << n;
}*/

int main() {
    int n;
    cin >> n;

    cout << "2^" << n << " = " << powerOf2(n) << endl;
}