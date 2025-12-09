#include<iostream>
using namespace std;
#include "array.h"
#include "array.cpp"
void foo(){
    Array obj;
    obj.Print();
    obj.Reverse();
    obj.Print();
}
int main(){
    for(int i=0;i<3;i++){
        foo();
    }
}
