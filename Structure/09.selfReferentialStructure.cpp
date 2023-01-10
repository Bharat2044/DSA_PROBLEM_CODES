#include <iostream>
#include<string.h>
using namespace std;

struct Student {
    int a;
    Student *p;
}s1, s2, s3;
int main() { 
    s1.a = 10;
    s2.a = 20;
    s3.a = 30;
    s1.p = &s2;
    s2.p = &s3;
    s3.p = NULL;
    cout<<s1.a<<"   "<<s2.a<<"   "<<s3.a<<endl;
    
    return 0;
}
