#include<iostream>
using namespace std;

int main() {
    int i = 0;
    cout << "Numbers from 1 to 5: ";
    
    label1:
        i++;
        
    cout << i << " ";
    
    if (i > 4)
        goto label2;
        
    if (i < 10)
        goto label1;

    label2:
        return 0;
}
