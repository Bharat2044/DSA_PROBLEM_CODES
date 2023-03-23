/*
n = 3
    *
  *    
* * * * *
  *    
    *
    
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n+i-1; j++) {
            if(i==n || j==n-i+1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<=n+i-1; j++) {
            if(i==n || j==n-i+1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    return 0;
}