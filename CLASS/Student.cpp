#include<iostream>
using namespace std;

class Student{
    char name[20];
    int roll;
    float marks;
    public:
        void Input(){
            cout<<"Enter Name : "<<endl;
            cin>>name;
            cout<<"Enter Roll : "<<endl;
            cin>>roll;
            cout<<"Enter Marks : "<<endl;
            cin>>marks;
        }
        void Print(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
            cout<<"Enter Marks : "<<marks<<endl;
        }
};

int main(){
    Student obj;
    obj.Input();
    obj.Print();
}