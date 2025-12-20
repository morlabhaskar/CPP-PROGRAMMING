#include<iostream>
using namespace std;
class Parent{
    protected: int data1;
    public:
        void Input(){
            cout<<"Enter the Data1 :"<<endl;
            cin>>data1;
        }
        void Print(){
            cout<<"Data1 : "<<data1<<endl;
        }
};
class Child : public Parent{
    int data2;
    public:
        void Input(){
            cout<<"Enter the Data2 :"<<endl;
            cin>>data2;
        }
        void Print(){
            cout<<"Data2 : "<<data2<<endl;
        }
        void Sum(){
            cout<<"Sum : "<<data1+data2<<endl;
        }
};
int main(){
    Child cobj;
    cobj.Parent::Input();
    cobj.Parent::Print();
    cobj.Input();
    cobj.Print();
    // cobj.Sum();
}

