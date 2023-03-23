#include<iostream>
using namespace std;

namespace asd1 {
    int a = 5;
    float PI = 3.14;
    string greet = "Hello";
}
namespace asd2 {
    int a = 10;
    float PI = 3.144295;
    string greet = "Hola";
}

int main() {
    int a = 20;
    
    cout << a << endl;
    
    cout << asd1::a << endl;
    cout << asd1::PI << endl;
    cout << asd1::greet << endl;
    
    cout << asd2::a << endl;
    cout << asd2::PI << endl;
    cout << asd2::greet << endl;

    return 0;
}