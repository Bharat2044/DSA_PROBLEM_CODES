#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;
    
    int i = 1;
    do {
        cout << num << " X " << i << " = " << num*i << endl;
        ++i;
    } while (i <= 10);

    return 0;
}