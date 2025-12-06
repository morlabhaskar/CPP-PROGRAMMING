#include<iostream>
using namespace std;
class ThisPointer{
    int data1,data2;
    public:
        void Input(){
            cout<<"Calling Address : "<<this<<endl;
            cin>>data1;
            cin>>data2;
        }
        void Print(){
            cout<<data1<<endl; //as same as this->data1;
            cout<<data2<<endl;
        }
};
int main(){
    ThisPointer a1,a2;
    cout<<"a1 Address : "<<&a1<<endl;
    a1.Input();
    cout<<"a2 Address : "<<&a2<<endl;
    a2.Input();
    cout<<"Data is : "<<endl;
    a1.Print();
    a2.Print();
}