// Syntax : dynamic_cast <datatype> (expression)

#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() {}
};

class Derived: public Base {};

int main() {
    Base* b = new Derived;
    Derived* d = dynamic_cast <Derived*> (b);

    if (d != NULL) 
        cout << "dynamic_cast done" << endl;
    else 
        cout << "dynamic_cast not done" << endl;
    

    return 0;
}


