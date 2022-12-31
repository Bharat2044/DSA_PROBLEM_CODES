#include <iostream>
#include<string.h>
using namespace std;

struct Student {
    int a;
    int *b;
};
int main() { 
    Student s;
    s.a = 10;
    //XXX s.b = 20; //Error: invalid conversion from ‘int’ to ‘int*’
    s.b = &s.a;
    cout<<s.a<<endl;
    cout<<*(s.b)<<endl;
    
    return 0;
}
