#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
void initialize(Rectangle *r, int l, int b) {   //Call by pointer/address
    r->length = l;
    r->breadth = b;
}
int area(Rectangle r) {   //Call by value
    return (r.length * r.breadth);
}
void changeLength(Rectangle *r, int l) {   //Call by pointer/address
    r->length = l;
}
int main() { 
    Rectangle r;
    initialize(&r, 10,5);
    cout << area(r) << endl;
    changeLength(&r, 20);
    cout << area(r) << endl;
    
    return 0;
}
