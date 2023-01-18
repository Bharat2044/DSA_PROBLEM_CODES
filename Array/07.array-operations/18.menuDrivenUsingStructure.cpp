#include<iostream>
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};
void insertElement(Array *arr, int index, int x) {      //Time Complexity = O(n)
    if(index>=0 && index<=arr->length) {
        for(int i=arr->length; i>index; i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
    else
        cout << "Please enter correct index to insert the element\n";
}
int deleteElement(Array *arr, int index) {      //Time Complexity = O(n)
    if(index>=0 && index<arr->length) {
        int x = arr->A[index];
        for(int i=index; i<arr->length-1; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }
    return -1;
}
bool linearSearch(Array arr, int x) {      //Time Complexity = O(n)
    for(int i=0 ;i<arr.length; i++) {
        if(arr.A[i] == x)
            return true;
    }
    return false;
}
int sumOfElement(Array arr) {      //Time Complexity = O(n)
    int sum = 0;
    for(int i=0; i<arr.length; i++)
        sum += arr.A[i];
    return sum;
}
void display(Array arr) {      //Time Complexity = O(n)
    cout << "Array elements are: ";
    for(int i=0; i<arr.length; i++)
        cout << arr.A[i] << "   ";
    cout << endl;
}
int main() {
    struct Array arr;
    int ch;
    int x, index;
    cout << "Enter size of array: ";
    cin >> arr.size;
    arr.A = new int[arr.size];   //arr.A = (int*) malloc(arr.size*sizeof(int));  //in C
    arr.length = 0;
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
        	    insertElement(&arr, index, x);
        	    break;
        	case 2:
        	    cout << "Enter index: ";
        	    cin >> index;
        	    if(deleteElement (&arr, index) != -1)
        	        cout << "Deleted Element is " << deleteElement (&arr, index) << endl;
        	    else
        	        cout << "Please enter correct index to insert the element\n";
        	    break;
        	case 3:
        	    cout << "Enter element to search: ";
        	    cin >> x;
        	    if(linearSearch(arr, x))
        	        cout << "Element found at index " << linearSearch(arr, x) << endl;
        	    else
        	        cout << "Element not found";
        	    break;
        	case 4:
        	    cout << "Sum = " << sumOfElement(arr) <<endl;;
        	    break;
        	case 5:
        	    display(arr);
        	    break;
    	}
     }while(ch != 6);
    
    return 0;
}
