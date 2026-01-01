#include<iostream>
using namespace std;
namespace ABC{
    int data1=10;
    void foo(){
        cout<<"ABC foo"<<endl;
        cout<<~data1+1<<endl;
    }
}
namespace XYZ{
    int data1=20;
    void foo(){
        cout<<"XYZ foo"<<endl;
        cout<<~data1+1<<endl;
    }
}
using namespace ABC;
int main(){
    cout<<data1<<endl;
    cout<<ABC::data1<<endl;
    cout<<XYZ::data1<<endl;
    ABC::foo();
    XYZ::foo();
}
