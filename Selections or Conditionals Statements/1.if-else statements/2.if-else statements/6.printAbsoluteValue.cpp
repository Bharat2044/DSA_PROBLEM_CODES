#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if(num >= 0) 
        cout << num << endl;
    else
        cout << (-num) << endl;

    return 0;
}
