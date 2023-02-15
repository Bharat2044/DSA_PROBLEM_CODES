/*
n = 5
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 

*/

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++)
        fact *= i;
    return fact;
}
int main() {
    int n;
    cin >> n;
    //Approach - 1
    for(int i=1; i<=n; i++) {
        for(int s=1; s<=n-i; s++)
            cout << " ";
        int x = 1;
        for(int j=1; j<=i; j++) {
            cout << x << " ";
            x = x*(i-j)/j;
        }
        cout << endl;
    }
    
    //Approach - 2
    /*for(int i=0; i<n; i++) {
        for(int s=1; s<=n-i; s++)
            cout << " ";
        for(int j=0; j<=i; j++)
            cout << factorial(i) / (factorial(j)*factorial(i-j)) << " ";
        cout << endl;
    }*/
    
    return 0;
}
