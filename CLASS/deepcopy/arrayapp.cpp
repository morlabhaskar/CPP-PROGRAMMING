#include<iostream>
using namespace std;
#include"Array.h"
#include"Array.cpp"
int main(){
	Array obj1;
	cout<<"obj1"<<endl;
	obj1.Print();
	Array obj2=obj1;
	cout<<"obj2:"<<endl;
	obj2.Print();
	obj2.Reverse();
	cout<<"obj2:"<<endl;
	obj2.Print();
	cout<<"obj1"<<endl;
	obj1.Print();
}