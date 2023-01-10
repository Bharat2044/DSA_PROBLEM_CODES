#include <iostream>
using namespace std;

int main()
{
    int *p = new int[5];
    for(int i=0; i<5; i++)
        p[i] = i+10;
    
    int *q = new int[10];
    for(int i=0; i<5; i++)
        q[i] = p[i];
    
    delete []p;     // Deallocate p array
    p=q;            // pointing the q array
    q = NULL;       // q point nothing
    
    for(int i=5; i<10; i++)
        p[i] = i+10;
    for(int i=0; i<10; i++)
        cout << p[i] << "  ";
    cout<<endl;
    
    delete []p;
    
    return 0;
}
