#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    
    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "The alphabet is vowel";
            break;
        
        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'f':
        case 'F':
        case 'g':
        case 'G':
        case 'h':
        case 'H':
        case 'j':
        case 'J':
        case 'k':
        case 'K':
        case 'l':
        case 'L':
        case 'm':
        case 'M':
        case 'n':
        case 'N':
        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'r':
        case 'R':
        case 's':
        case 'S':
        case 't':
        case 'T':
        case 'v':
        case 'V':
        case 'w':
        case 'W':
        case 'x':
        case 'X':
        case 'y':
        case 'Y':
        case 'z':
        case 'Z':
            cout << "The alphabet is constant";
            break;

        default:
            cout << "It is not an alphabet";
            break;
    }        
    
    return 0;
}