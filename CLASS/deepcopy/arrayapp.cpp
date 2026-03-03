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
	cout<<"Reverse obj2 :"<<endl;
	obj2.Reverse();
	obj2.Print();
	cout<<"sort obj1:"<<endl;
	obj1.Sort();
	obj1.Print();
}