/*
 n = 5
1 2 3 4 5
1     4
1   3 
1 2
1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            if(i==1 || j==1 || j==n-i+1)
                cout << j << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
