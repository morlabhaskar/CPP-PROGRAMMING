/*
const_cast is the C++ cast used to add or remove const (or volatile) qualifiers from a variable.
SYX : const_cast<new_type>(expression)
Sometimes you receive a const object but need to pass it to a function that expects a non-const 
pointer/reference (often legacy APIs).
*/
#include <iostream>

// Old API (bad design)
void processData(char* data) {
    std::cout << data << std::endl;
}

int main() {
    const char* msg = "Hello";
    // Remove constness
    processData(const_cast<char*>(msg));

    //unsafe(original object is unmutable) :
    const int x = 10;
    int* p = const_cast<int*>(&x);
    *p = 20;   // ❌ Undefined Behavior :- x is truly read-only Modifying it can crash or behave unpredictably
    std::cout << x << std::endl;//10
    std::cout << *p << std::endl;//20

    //safe(original object is mutable) :
    int x = 10;
    const int* p = &x;
    // Remove const
    int* q = const_cast<int*>(p);
    *q = 20;  // ✅ Safe
    std::cout << x; // 20
}
/*
API expects char*
You only have const char*
const_cast allows compatibility
*/
