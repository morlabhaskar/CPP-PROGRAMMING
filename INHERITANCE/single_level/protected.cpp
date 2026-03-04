#include <iostream>
using namespace std;

class A{
    protected:
        int x;
};
class B : public A {
    public:
        void set() {
            x = 20;   // allowed
        }
        void show() {
            cout << "x = " << x << endl;
        }
};
int main() {
    B obj;
    // obj.x = 10;  // error because x is private in B
    obj.set();
    obj.show();
}