/*
It converts one type to another without runtime checks.
SYX : static_cast<new_type>(expression)
1. Basic data type conversion
2. Upcasting (Derived → Base)
3. Downcasting (only if you're 100% sure)
Checked at compile time

When you need runtime safety → use dynamic_cast
For unrelated pointer conversions → use reinterpret_cast
To remove const → use const_cast

*/
#include<iostream>
int main(){
    double temp = 36.78;
    std::cout<<temp<<std::endl;
    // int disp = temp;  //Conversion is done automatically by the compiler
    // int disp = (int)temp; //Old-style casting (from C)
    int disp = static_cast<int>(temp);//C++ Style Casting Modern, recommended approach
    std::cout<<disp<<std::endl;

    int a = 5, b = 2;
    // Wrong result
    double result1 = a / b;   // Output: 2
    std::cout<<result1<<std::endl;

    // Correct result
    double result2 = static_cast<double>(a) / b;  // Output: 2.5
    std::cout<<result2<<std::endl;
}
