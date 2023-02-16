/*
n = 4
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 2*n-1;
    for(int i=1; i<=k; i++){
        
        for(int j=1; j<=k; j++)
            cout<< max(abs(i-n), abs(j-n))+1<<" ";
        cout<<endl;
    }

    return 0;
}
