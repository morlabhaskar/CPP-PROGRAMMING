#include<iostream>
using namespace std;

#include "Complex.h"
#include "Complex.cpp"

int main(){
    Complex e1(10,20),e2(30,40),e3,e4,e5,e6,e7,e8;
    e3 = e1 + e2;
    e3.Print();
    e4 = e1 - e2;
    e4.Print();
    e5 = e1 + 5;
    e5.Print();
    e6 = e1 - 5;
    e6.Print();
    e7 = e1++;
    e7.Print();
    e8 = ++e1;
    e8.Print();
}