#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        cout << "The alphabet is vowel";
    else if(ch=='b' || ch=='B' || ch=='c' || ch=='C' || ch=='d' || ch=='D' || ch=='f' || ch=='F' || ch=='g' || ch=='G' || ch=='h' || ch=='H' || ch=='j' || ch=='J' || ch=='k' || ch=='K' || ch=='l' || ch=='L' || ch=='m' || ch=='M' || ch=='n' || ch=='N' || ch=='p' || ch=='P' || ch=='q' || ch=='Q' || ch=='r' || ch=='R' || ch=='s' || ch=='S' || ch=='t' || ch=='T' || ch=='v' || ch=='V' || ch=='w' || ch=='W' || ch=='x' || ch=='X' || ch=='y' || ch=='Y' || ch=='z' || ch=='Z')
        cout << "The alphabet is constant";
    else
        cout << "It is not an alphabet";
    
    return 0;
}