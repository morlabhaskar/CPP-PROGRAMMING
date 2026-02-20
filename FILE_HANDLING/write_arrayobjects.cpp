#include<iostream>
#include<fstream>
using namespace std;

class Employee{
    int id;
    char name[30];
    float salary;
    public :
        void Input(){
            cout<<"Enter the Id :"<<endl;
            cin>>id;
            cout<<"Enter the Name :"<<endl;
            cin>>name;
            cout<<"Enter the Salary :"<<endl;
            cin>>salary;
        }
        void Print(){
            cout<<"Id     : "<<id<<endl;
            cout<<"Name   : "<<name<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
        
};
//a.out  filename
int main(int argc,char *argv[]){
    Employee e[2];
    for(int i=0;i<2;i++){
        e[i].Input();
    }
    ofstream dest(argv[1]);
    dest.write((char*)e,sizeof(e));
    dest.close();
}



