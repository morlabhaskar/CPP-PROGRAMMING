#include<iostream>
using namespace std;
#include "array.h"
#include "array.cpp"
int main(){
    Array obj1;
    int a[3] = {10,20,30};
    Array obj2(a,3);
    obj1.Print();
    obj2.Print();
}
