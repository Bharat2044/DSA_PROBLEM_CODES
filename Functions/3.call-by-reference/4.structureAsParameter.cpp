#include <iostream>
#include<string.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int area(Rectangle &r1) {
    r1.length++;
    return r1.length * r1.breadth;
}
int main() { 
    Rectangle r = {10, 5};
    cout << area(r) << endl;
    
    return 0;
}
