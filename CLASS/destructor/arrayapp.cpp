/*
A destructor in C++ is a special member function of a class that is automatically called when an object is destroyed.
📌 Destructor is called automatically when obj goes out of scope.
→ Name is same as class name, prefixed with ~
→ No return type
→ Takes no parameters
→ Called automatically
→ Used for cleanup
If not defined, compiler provides a default destructor
*/
#include<iostream>
using namespace std;
#include "array.h"
#include "array.cpp"
int main(){
    Array obj1;
    Array obj2;
    int a[3] = {10,20,30};
    Array obj3(a,3);
    obj1.Print();
    obj2.Print();
    obj3.Print();
}
