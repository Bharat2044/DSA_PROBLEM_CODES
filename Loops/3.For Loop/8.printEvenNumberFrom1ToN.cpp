#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;
    
    int i = 1;
    for(int i=1; i<=num; i++) {
        if(i%2 == 0)
            cout << i << endl;
    } 

    return 0;
}