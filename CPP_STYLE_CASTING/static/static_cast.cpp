/*
It converts one type to another without runtime checks.
SYX : static_cast<new_type>(expression)
1. Basic data type conversion
2. Upcasting (Derived → Base)
3. Downcasting (only if you're 100% sure)

*/
#include<iostream>
int main(){
    double temp = 36.78;
    std::cout<<temp<<std::endl;
    // int disp = temp;  //Conversion is done automatically by the compiler
    // int disp = (int)temp; //Old-style casting (from C)
    int disp = static_cast<int>(temp);//C++ Style Casting Modern, recommended approach
    std::cout<<disp;
}
