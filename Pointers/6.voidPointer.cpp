#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5f;
    char c = 'x';
    void *ptr = NULL;
    ptr = &a;
    //XXX  cout << *ptr << endl;  //Error: 'void*' is not a pointer-to-object type
    cout<< &a <<"    " << (int*)ptr << endl;
    cout << a << "    " << *(int*)ptr << "\n\n";
    
    ptr = &b;
    cout<< &b <<"    " << (float*)ptr << endl;
    cout << b << "    " << *(float*)ptr << "\n\n";
    
    ptr = &c;
    cout<< &c <<"    " << (char*)ptr << endl;
    cout << c << "    " << *(char*)ptr << "\n\n";
    
    //NOTE: With void pointer no arithmatic operation can be perfomed (ptr++, ptr = ptr+2  etc.).

    return 0;
}
