#include<iostream>
using namespace std;

class Parent{
    int data;
    protected : int data1;
    public:
        void PInput(){
            cout<<"Enter the data1 :"<<endl;
            cin>>data1;
        }
        void PPrint(){
            cout<<"Data1 : "<<data1<<endl;
        }
};

class Child : public Parent{
    int data2;
    public:
        void CInput(){
            cout<<"Enter the data2 :"<<endl;
            cin>>data2;
        }
        void CPrint(){
            cout<<"Data2 : "<<data2<<endl;
        }
        void Sum(){
            cout<<data1 + data2<<endl;
        }
};
int main(){
    Child cobj;
    cobj.PInput();
    cobj.CInput();
    cobj.PPrint();
    cobj.CPrint();
    cout<<sizeof(cobj)<<endl;
}

