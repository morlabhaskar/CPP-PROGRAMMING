#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    float salary;
    public :
        // void Input(){
        //     cout<<"Enter the Id :"<<endl;
        //     cin>>id;
        //     cout<<"Enter the Name :"<<endl;
        //     cin>>name;
        //     cout<<"Enter the salary :"<<endl;
        //     cin>>salary;
        // }
        // void Print(){
        //     cout<<"Id      : "<<id<<endl;
        //     cout<<"Name    : "<<name<<endl;
        //     cout<<"Salary  : "<<salary<<endl;
        // }
        friend void operator>>(istream &,Employee &);
        friend void operator<<(ostream &,Employee &);
};
void operator>>(istream &in,Employee &e){
    cout<<"Enter the Id :"<<endl;
    in>>e.id;
    cout<<"Enter the Name :"<<endl;
    in>>e.name;
    cout<<"Enter the Salary :"<<endl;
    in>>e.salary;
}
void operator<<(ostream &out,Employee &e){
    out<<"Id     : "<<e.id<<endl;
    out<<"Name   : "<<e.name<<endl;
    out<<"Salary : "<<e.salary<<endl;
}
int main(){
    Employee e;
    cin>>e;
    cout<<e;
}
