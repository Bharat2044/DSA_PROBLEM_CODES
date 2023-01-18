#include<iostream>
using namespace std;

class Array {
    private: 
        int *A;
        int size;
        int length;
    public:
        Array() {
            size = 10;
            length = 0;
            A = new int[size];
        }
        Array(int sz) {
            size = sz;
            length = 0;
            A = new int[size];
        }
        ~Array() {
            delete []A;
        }
        void insertElement(int index, int x);
        int deleteElement(int index);
        bool linearSearch(int x);
        int sumOfElement();
        void display();
};
void Array:: insertElement(int index, int x) {
    if(index>=0 && index<=length) {
        for(int i=length; i>index; i--)
            A[i] = A[i-1];
        A[index] = x;
        length++;
    }
    else
        cout << "Please enter correct index to insert the element\n";
}
int Array:: deleteElement(int index) {
    if(index>=0 && index<length) {
        int x = A[index];
        for(int i=index; i<length-1; i++)
            A[i] = A[i+1];
        length--;
        return x;
    }
    return -1;
}
bool Array:: linearSearch(int x) {
    for(int i=0 ;i<length; i++) {
        if(A[i] == x)
            return true;
    }
    return false;
}
int Array:: sumOfElement() {
    int sum = 0;
    for(int i=0; i<length; i++)
        sum += A[i];
    return sum;
}
void Array:: display() {
    cout << "Array elements are: ";
    for(int i=0; i<length; i++)
        cout << A[i] << "   ";
    cout << endl;
}
int main() {
    int ch, x, index, size;
    cout << "Enter size of array: ";
    cin >> size;
    Array *arr = new Array(size); 
    do {
        cout << "\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
        	    cout << "Enter an element: ";
        	    cin >> x;
        	    cout << "Enter index: ";
        	    cin >> index;
        	    arr->insertElement(index, x);
        	    break;
        	case 2:
        	    cout << "Enter index: ";
        	    cin >> index;
        	    if(arr->deleteElement (index) != -1)
        	        cout << "Deleted Element is " << arr->deleteElement (index) << endl;
        	    else
        	        cout << "Please enter correct index to insert the element\n";
        	    break;
        	case 3:
        	    cout << "Enter element to search: ";
        	    cin >> x;
        	    if(arr->linearSearch(x))
        	        cout << "Element found at index " << arr->linearSearch(x) << endl;
        	    else
        	        cout << "Element not found";
        	    break;
        	case 4:
        	    cout << "Sum = " << arr->sumOfElement() <<endl;;
        	    break;
        	case 5:
        	    arr->display();
        	    break;
    	}
     }while(ch != 6);
    
    return 0;
}
