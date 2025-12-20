#include<iostream>
using namespace std;

class Parent{
    protected: int data1;
    public:
        Parent(){
            cout<<"Parent Constructor"<<endl;
        }
        ~Parent(){
            cout<<"Parent Destructor"<<endl;
        }
};
class Child : public Parent{
    int data2;;
    public:
        Child(){
            cout<<"Child Constructor"<<endl;
        }
        ~Child(){
            cout<<"Child Destructor"<<endl;
        }
};
int main(){
    // Parent pobj;
    Child cobj;
}