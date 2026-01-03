#include <iostream>
using namespace std;

class A{
    private:
        int x;
    public:
        void set(int a){
            x = a;
        }
        void show(){
            cout << "x = " << x << endl;
        }
};
int main() {
    A obj;
    // obj.x = 10;   // error
    obj.set(10);    // allowed
    obj.show();
}