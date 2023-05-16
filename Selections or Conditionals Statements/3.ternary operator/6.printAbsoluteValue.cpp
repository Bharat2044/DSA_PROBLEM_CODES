#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    (num >= 0) ? cout << num : cout << (-num);

    return 0;
}
