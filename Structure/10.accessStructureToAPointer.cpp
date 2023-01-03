#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int main() {
    Rectangle r = {10, 5};
    Rectangle *ptr = &r;
    cout << (r.length * r.breadth) << endl;
    cout << (ptr->length * ptr->breadth) << endl;
    
    (*ptr).length = 20; //ptr->length = 20;
    ptr->breadth = 30;  //(*ptr).breadth = 30;
    cout << (r.length * r.breadth) << endl;
    cout << (ptr->length * ptr->breadth) << endl;
    
    //NOTE: (*ptr).x === ptr->x

    return 0;
}
