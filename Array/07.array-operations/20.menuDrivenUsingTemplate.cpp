#include<iostream>
using namespace std;

template<class T>
class Array {
    private: 
        T *A;
        int size;
        int length;
    public:
        Array() {
            size = 10;
            length = 0;
            A = new T[size];
        }
        Array(int sz) {
            size = sz;
            length = 0;
            A = new T[size];
        }
        ~Array() {
            delete []A;
        }
        void insertElement(int index, T x);
        T deleteElement(int index);
        void display();
};
template<class T>
void Array<T>:: insertElement(int index, T x) {
    if(index>=0 && index<=length) {
        for(int i=length; i>index; i--)
            A[i] = A[i-1];
        A[index] = x;
        length++;
    }
    else
        cout << "Please enter correct index to insert the element\n";
}
template<class T>
T Array<T>:: deleteElement(int index) {
    T x = 0;
    if(index>=0 && index<length) {
        x = A[index];
        for(int i=index; i<length-1; i++)
            A[i] = A[i+1];
        length--;
        return x;
    }
    return x;
}
template<class T>
void Array<T>:: display() {
    cout << "Array elements are: ";
    for(int i=0; i<length; i++)
        cout << A[i] << "   ";
    cout << endl;
}
int main() {
    Array<char> arr(10);
    arr.insertElement(0, 'a');
    arr.insertElement(1, 'b');
    arr.insertElement(2, 'c');
    arr.display();
    cout << "Deleted element = " << arr.deleteElement(0) << endl;;
    arr.display();
    
    return 0;
}
