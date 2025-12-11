#include<iostream>
using namespace std;

class ABC{
    int data1,data2;
    public:
        ABC(int a=0,int b=0){
            data1 = a;
            data2 = b;
        }
        void Print(){
            cout<<"Data-1 : "<<data1<<endl;
            cout<<"Data-2 : "<<data2<<endl;
        }
};

int main(){
    // ABC obj;
    // obj.Print();
    // ABC obj1(10);
    // obj1.Print();
    ABC obj2(10,20);
    obj2.Print();
}