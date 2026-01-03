#include <iostream>
using namespace std;

class Demo {
    public:
        void show(int a) {
            cout << "Integer: " << a << endl;
        }
        void show(double b) {
            cout << "Double: " << b << endl;
        }
        void show(int a, int b) {
            cout << "Two Integers: " << a << " " << b << endl;
        }
};
int main() {
    Demo d;
    d.show(10);
    d.show(3.14);
    d.show(5, 6);
}