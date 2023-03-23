#include<iostream>
using namespace std;

namespace asd {
    int a = 5;
    float PI = 3.14;
    string greet = "Hello";
}
int main() {
    int a = 10;
    
    std::cout << "Hi" << endl;
    cout << a << endl;
    cout << asd::a << endl;
    cout << asd::PI << endl;
    cout << asd::greet << endl;

    return 0;
}