#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor\n";
        show();
    }

    virtual void show() {
        cout << "Base show()\n";
    }

    virtual ~Base() {
        cout << "Base Destructor\n";
        show();
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor\n";
    }

    // void show() override {
    void show(){
        cout << "Derived show()\n";
    }

    ~Derived() {
        cout << "Derived Destructor\n";
    }
};

int main() {
    Base* ptr = new Derived();
    cout << "----"<<endl;
    delete ptr;
}