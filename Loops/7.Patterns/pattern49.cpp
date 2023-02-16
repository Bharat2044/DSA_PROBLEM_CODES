/*
n = 5
    * * * * * 
   *       * 
  *       * 
 *       * 
* * * * *
    
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        for(int s=1; s<=n-i;s++)
            cout << " ";
            
        for(int j=1; j<=n; j++) {
            if(i==1 || i==n || j==1 || j==n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    return 0;
}