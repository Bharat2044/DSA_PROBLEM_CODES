/*
 n = 5
1 2 3 4 5
1       5
1       5
1       5
1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if((i==1) || (i==n) || (j==1) || (j==n))
                cout << j << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
