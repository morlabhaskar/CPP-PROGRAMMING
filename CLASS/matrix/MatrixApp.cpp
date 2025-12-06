#include<iostream>
using namespace std;

#include "Matrix.h"
#include "Matrix.cpp"
int main(){
    Matrix a1,a2,a3,a4;
    a1.Input();
    a2.Input();
    a3 = a1.Add(a2);
    a4 = a1.Sub(a2);
    a1.Print();
    a2.Print();
    a3.Print();
    a4.Print();
}