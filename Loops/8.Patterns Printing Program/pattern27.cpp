/*
 n = 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++)
            cout << i+j-1 << " ";
        cout << endl;
    }
    return 0;
}
