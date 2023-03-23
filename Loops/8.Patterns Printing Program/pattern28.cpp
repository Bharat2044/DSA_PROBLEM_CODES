/*
 n = 5
1 2 3 4 5
2     5
3   5
4 5
5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            if(i==1 || j==1 || j==n-i+1)
                cout << i+j-1 << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
