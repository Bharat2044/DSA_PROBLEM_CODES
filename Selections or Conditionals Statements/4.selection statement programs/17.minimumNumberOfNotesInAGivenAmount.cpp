#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int n1, n2, n5, n10, n20, n50, n100, n200, n500, n2000;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 = n2000 = 0;
    
    if(amount >= 2000) {
        n2000 += amount/2000;
        amount -= n2000*2000;
    }
    if(amount >= 500) {
        n500 += amount/500;
        amount -= n500*500;
    }
    if(amount >= 200) {
        n200 += amount/200;
        amount -= n200*200;
    }
    if(amount >= 100) {
        n100 += amount/100;
        amount -= n100*100;
    }
    if(amount >= 50) {
        n50 += amount/50;
        amount -= n50*50;
    }
    if(amount >= 20) {
        n20 += amount/20;
        amount -= n20*20;
    }
    if(amount >= 10) {
        n10 += amount/10;
        amount -= n10*10;
    }
    if(amount >= 5) {
        n5 += amount/5;
        amount -= n5*5;
    }
    if(amount >= 2) {
        n2 += amount/2;
        amount -= n2*2;
    }
    if(amount >= 1) {   
        n1 += amount/1;
        amount -= n1*1;
    }
    
    cout << "Notes of 2000 = " << n2000 << endl; 
    cout << "Notes of 500 = " << n500 << endl; 
    cout << "Notes of 200 = " << n200 << endl; 
    cout << "Notes of 100 = " << n100 << endl; 
    cout << "Notes of 50 = " << n50 << endl; 
    cout << "Notes of 20 = " << n20 << endl; 
    cout << "Notes of 10 = " << n10 << endl; 
    cout << "Notes of 5 = " << n5 << endl; 
    cout << "Notes of 2 = " << n2 << endl; 
    cout << "Notes of 1 = " << n1 << endl; 

    return 0;
}
