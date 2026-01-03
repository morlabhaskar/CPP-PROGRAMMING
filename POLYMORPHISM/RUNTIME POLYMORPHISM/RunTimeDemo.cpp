/*
A base class pointer pointing to derived class objects invokes overridden virtual functions through runtime polymorphism.
*/
#include<iostream>
using namespace std;

#include "Mother.cpp"
#include "Child1.cpp"
#include "Child2.cpp"
#include "Child3.cpp"

int main(){
    Mother *ptr = NULL;
    int choice;
    cout<<"1.Child1  2.Child2  3.Child3"<<endl;
    cout<<"Enter the Choice :"<<endl;
    cin>>choice;
    switch(choice){
        case 1: 
            ptr = new Child1;
            break;
        case 2:
            ptr = new Child2;
            break;
        case 3:
            ptr = new Child3;
            break;
        default :
            cout<<"Invalid Choice"<<endl;
    }
    if(ptr){
        ptr->Whomi();
        ptr->Profession();
        ptr->Qual();
        ptr->Hobby();
        ptr->Print();
        delete ptr;
    }
}