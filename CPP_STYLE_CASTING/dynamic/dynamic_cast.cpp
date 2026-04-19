/*
dynamic_cast is used when you want safe type conversion in inheritance hierarchies, 
especially for downcasting (Base → Derived) with a runtime check.
It converts pointers/references at runtime and verifies whether the object is actually of the target type.
SYX : dynamic_cast<new_type>(expression)
The base class must be polymorphic
(i.e., it must have at least one virtual function)
Because static_cast can be dangerous in downcasting.
dynamic_cast prevents invalid conversions and crashes

When NOT to use dynamic_cast ?
 If you don’t have polymorphism
 If performance is critical (tight loops)
 If design can avoid downcasting (better use virtual functions)

 dynamic_cast is like:
👉 Checking ID before entering a building
If valid → allowed
If not → rejected safely
*/
#include <iostream>

class Vehicle {
public:
    virtual void start() {  // makes class polymorphic
        std::cout << "Vehicle start\n";
    }
};

class Car : public Vehicle {
public:
    void openTrunk() {
        std::cout << "Trunk opened\n";
    }
};

class Bike : public Vehicle {};

int main() {
    Vehicle* v = new Car();  // could be any vehicle
    // Safe downcasting
    Car* c = dynamic_cast<Car*>(v);
    if (c != nullptr) {
        c->openTrunk();  // safe
    } else {
        std::cout << "Not a Car\n";
    }

    //if object is wrong?
    Vehicle* x = new Bike();
    Car* y = dynamic_cast<Car*>(x);
    if (y == nullptr) {
        std::cout << "Cast failed safely\n";
    }
}
/*
OP:
Trunk opened
Cast failed safely
*/

