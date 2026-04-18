#include<iostream>

class Base {
    public:
        virtual void show() {}
};

class Derived : public Base {
    public:
        void display() {
            std::cout << "Derived class\n";
        }
};

int main(){
    Base* b = new Derived();
    // Downcasting(Be Careful)
    Derived* d = static_cast<Derived*>(b);//Works only if object is actually "Derived"
    d->display();//output : Derived class

    //Dangerous case:
    // Base* b = new Base();
    // Derived* d = static_cast<Derived*>(b); // Undefined behavior
}