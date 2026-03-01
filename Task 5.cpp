/* Task 5 : Object Composition 
 Create two classes: Engine and Car, where Car contains an Engine object as a member. 
 Add constructors and destructors to both classes and create a Car object in main().
 • Implement class Engine with constructor and destructor. 
 • Implement class Car that has an Engine member variable
 • Observe the construction/destruction order.
*/

#include <iostream>
using namespace std;

class Engine {
public:
    Engine() {
	 cout << "Engine created\n";
	  }
    ~Engine() {
	 cout << "Engine destroyed\n"; 
	 }
};

class Car {
    Engine engine; 
public:
    Car() {
	 cout << "Car created\n";
	  }
    ~Car() {
	 cout << "Car destroyed\n"; 
	 }
};

int main() {
    Car myCar; 
    return 0;
}   
