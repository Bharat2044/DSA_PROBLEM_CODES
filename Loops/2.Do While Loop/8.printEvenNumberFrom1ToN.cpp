#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;
    
    int i = 1;
    do {
        if(i%2 == 0)
            cout << i << endl;
        ++i;
    } while (i <= num);

    return 0;
}