/*
m = 3, n = 4
3 
4 4 
5 5 5
6 6 6 6 
5 5 5 
4 4 
3

*/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    for(int i=m; i<=m+n-1; i++) {
        for(int j=m; j<=i; j++)
            cout << i <<" ";
        cout << endl;
    }
    for(int i=m+n-2; i>=m; i--) {
        for(int j=m; j<=i; j++)
            cout << i <<" ";
        cout << endl;
    }
    
    return 0;
}
