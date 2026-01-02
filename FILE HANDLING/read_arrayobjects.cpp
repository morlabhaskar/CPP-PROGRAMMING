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
    ifstream src(argv[1]);
    src.read((char*)e,sizeof(e));
    for(int i=0;i<2;i++){
        e[i].Print();
    }
    src.close();
}



