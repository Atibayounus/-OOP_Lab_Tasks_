/*
Task 2 : Stack vs Heap Comparison
Create a class MemoryCheck with constructors, destructor, and a method to print the object
address using the this pointer. Create objects on both the stack and the heap. Delete only one
heap object.
• Implement class MemoryCheck with constructors, destructor, and address printing.
• Create at least one stack object and two heap objects (using new).
• Delete only one of the heap objects and observe the results.





*/

#include <iostream>
using namespace std;

class MemoryCheck {
public:
	
    // Constructor
    
    MemoryCheck() {
        cout << "Constructor: " << this << endl;
    }

    // Function to print object ka address
    
    void showAddress() {
        cout << "Address using this pointer: " << this << endl;
    }

    // Destructor
    
    ~MemoryCheck() {
        cout << "Destructor: " << this << endl;
    }
};

int main() {

    // Stack ka object
    
    MemoryCheck obj1;
    obj1.showAddress();

    // Heap k objects
    
    MemoryCheck* obj2 = new MemoryCheck();
    MemoryCheck* obj3 = new MemoryCheck();

    obj2->showAddress();
    obj3->showAddress();

    // Delete only one heap  object
    
    delete obj2;

    return 0;
}
