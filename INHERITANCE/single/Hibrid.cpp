#include<iostream>
using namespace std;

#include "Student.cpp"
#include "ECE.cpp"
#include "Result.cpp"

int main(){
    Result robj;
    robj.CalMarks();
    robj.CalPer();
    robj.SPrint();
    robj.EPrint();
    robj.EEPrint();
    robj.RPrint();
}