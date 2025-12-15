#include<iostream>
using namespace std;

#include"Complex.h"
#include"Complex.cpp"

int main(){
	Complex e1(10,20),e2(56,78),e3;

	e3=e1+8;//Complex &ref = e1.operator+(8);
            //e3 = ref;   // copy assignment
	cout<<"e1:";
	e1.Print();
	cout<<"e2:";
	e2.Print();
	cout<<"e3:";
	e3.Print();
}
