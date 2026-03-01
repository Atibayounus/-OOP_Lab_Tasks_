/* 
Task 3 : Copy Constructor Analysis
Create a class Book with a default constructor, parameterized constructor, copy constructor,
and destructor. Create multiple objects using different initialization techniques.
• Implement class Book with all four special member functions.
• Create objects using: default construction, parameterized construction, and copy
construction.
• Use different copy syntax: Book b2 = b1; and Book b3(b1);.  
*/

#include <iostream>
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    // Making a Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        pages = 0;
        cout << "Book created (default)\n";
    }

    // Making a Parameterized constructor
    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
        cout << "Book created (param)\n";
    }

    // Making a Copy constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        pages = b.pages;
        cout << "Book created (copy)\n";
    }

    //now a Destructor
    ~Book() {
        cout << "Book destroyed\n";
    }

    void display() {
        cout << title << ", " << author << ", " << pages << " pages\n";
    }
};

void testCopy(Book b) {
    cout << "Inside function: ";
    b.display();
}

int main() {
    Book b1;  
    b1.display();

    Book b2("english", "Atiba", 20);  
    b2.display();

    Book b3 = b2;  
    b3.display();

    Book b4(b2); 
    b4.display();

    testCopy(b2);  

    return 0;
}
