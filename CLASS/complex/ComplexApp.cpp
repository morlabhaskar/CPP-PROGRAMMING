#include<iostream>
using namespace std;
#include "Complex.h"
#include "Complex.cpp"
int main(){
    Complex a1,a2,a3,a4,a5;
    a1.Input();
    a2.Input();
    a3 = a1.Add(a2);
    a4 = a1.Sub(a2);
    a5 = a1.Mul(a2);
    cout<<"a1 :";
    a1.Print();
    cout<<"a2 :";
    a2.Print();
    cout<<"a3 :";
    a3.Print();
    cout<<"a4 :";
    a4.Print();
    cout<<"a5 :";
    a5.Print();
}