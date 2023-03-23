/*
 n = 5
1
2 1
3   1
4     1
5 4 3 2 1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(i==n || j==1 || j==i)
                cout << i-j+1 << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
