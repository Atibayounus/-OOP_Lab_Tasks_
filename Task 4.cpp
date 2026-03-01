/*Create a class Student with constructors and destructor. Write two functions: one that takes a
Student by value and one that takes a Student by reference.
• Implement class Student with constructor, copy constructor, and destructor.
• Write void displayByValue(Student s) and void displayByRef(Student &s).
• Call both functions from main() and observe the output.
*/

#include <iostream>
using namespace std;

class Student {
    string name;

public:
    
    Student(string n) {
        name = n;
        cout << "Constructor: " << name << endl;
    }

    
    Student(const Student &s) {
        name = s.name;
        cout << "Copy Constructor: " << name << endl;
    }

    
    ~Student() {
        cout << "Destructor: " << name << endl;
    }

  void showName() {
        cout << name << endl;
    }
};

// Pass by value
void displayByValue(Student s) {
    cout << "displayByValue: ";
    s.showName();
}

// Pass by reference
void displayByRef(Student &s) {
    cout << "displayByReference: ";
    s.showName();
}

int main() {
    Student s1("Atiba");

    displayByValue(s1);
    displayByRef(s1);

    return 0;
}
