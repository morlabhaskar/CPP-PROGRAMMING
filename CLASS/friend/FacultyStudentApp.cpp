#include<iostream>
#include<cstring>
using namespace std;
class Student;
#include "Faculty.h"
#include "Student.h"
#include "Faculty.cpp"
#include "Student.cpp"

int main(){
    Faculty fobj;
    Student sobj;
    fobj.UpLoadMarks(sobj);
    fobj.Print();
    sobj.Print();
}