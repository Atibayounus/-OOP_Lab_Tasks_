/* Create dynamic objects using new. Reassign one pointer to point to another object, then delete one pointer. Analyze what happens.
• Create two dynamic objects: Object *a = new Object(); Object *b = new Object();.
 • Reassign: a = b; and then call delete a;. 
 • Observe which destructor runs and identify any issues. 
 */
 
 
 #include <iostream>
using namespace std;

class Object {
public:
    Object() {
        cout << "Constructor called" << endl;
    }

    ~Object() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    Object *a = new Object();
    Object *b = new Object();


    a = b;

    delete a;

    return 0;
}


// Issue: First object gets lost when a = b; also it causes memory leak
// Only the second object ka destructor runs, first is never deleted
