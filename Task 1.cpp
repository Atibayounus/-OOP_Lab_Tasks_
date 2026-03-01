/*
task 1: LIFO Behavior on Stack

Create a class Tracer with a default constructor and destructor that print the object name.
Create objects in main(), inside a nested block, and inside a function test().

• Implement class Tracer with constructor and destructor messages.
• Create objects in main() scope, a nested {} block, and a separate function test().
• Observe and record the order of constructor and destructor calls.
*/

#include <iostream>
using namespace std;

class Tracer {
    string name;

public:
    // Defaultt constructor
    Tracer(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Tracer() {
        cout << "Destructor called for " << name << endl;
    }
};

// Function test()
void test() {
    Tracer t3("Object in test()");  
    cout << "Inside test() function" << endl;
}

int main() {

    Tracer t1("Object in main()");   

    {
        Tracer t2("Object in nested block");  
        cout << "Inside nested block" << endl;
    }  

    test();  

    cout << "Back in main()" << endl;

    return 0;
}
