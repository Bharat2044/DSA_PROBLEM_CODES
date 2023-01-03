#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int main() {
    Rectangle *ptr = new Rectangle[sizeof(Rectangle)];
    //struct Rectangle *ptr = (struct Rectangle *) malloc(sizeof(struct Rectangle));    // In C
    ptr->length = 10;
    ptr->breadth = 15;
    cout << ptr->length << "    " << ptr->breadth << endl;
    cout << (ptr->length * ptr->breadth) << endl;

    return 0;
}
