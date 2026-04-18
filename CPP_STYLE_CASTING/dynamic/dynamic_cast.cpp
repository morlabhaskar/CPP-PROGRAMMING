/*
dynamic_cast is used when you want safe type conversion in inheritance hierarchies, 
especially for downcasting (Base → Derived) with a runtime check.
It converts pointers/references at runtime and verifies whether the object is actually of the target type.
SYX : dynamic_cast<new_type>(expression)
The base class must be polymorphic
(i.e., it must have at least one virtual function)
Because static_cast can be dangerous in downcasting.
dynamic_cast prevents invalid conversions and crashes
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
}