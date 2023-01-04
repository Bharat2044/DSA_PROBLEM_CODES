#include <iostream>
#include<string.h>
using namespace std;

struct Test {
    int arr[5];
    int n;
};
void fun(Test t1) {
    for(int i=0; i<t1.n; i++) {
        cout << t1.arr[i] << "    ";
        t1.arr[i] = i+11;
    }
    cout<<endl;
}
int main() { 
    Test t = {{2, 4, 6 ,8,10}, 5};
    fun(t);
    for(int i=0; i<t.n; i++) 
        cout << t.arr[i] << "    ";
    
    //NOTE: You can pass array in structure as argument but not in function
    return 0;
}
