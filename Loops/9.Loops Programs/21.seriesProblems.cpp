// find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

// i/p: 5
// o/p: 12345       => 1 + 11 + 111 + 1111 + 11111  =  12345


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int sum = 0;
    int num = 1;

    for (int i = 1; i <= n; i++) {
        sum += num;
        num = num * 10 + 1;
    }

    cout << "Sum of the series is: " << sum << endl;

    return 0;
}