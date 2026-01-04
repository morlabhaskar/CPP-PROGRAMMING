#include<iostream>
using namespace std;

#include "ECE.cpp"
#include "Result.cpp"

int main(){
    Result robj;
    robj.CalMarks();
    robj.CalPer();
    robj.EPrint();
    robj.EEPrint();
    robj.RPrint();
}