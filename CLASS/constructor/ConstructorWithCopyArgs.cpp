#include<iostream>
using namespace std;

class ABC{
    int data1,data2;
    public:
        ABC(ABC &a){
            data1 = a.data1;
            data2 = a.data2;
        }
        void Print(){
            cout<<"Data-1 : "<<data1<<endl;
            cout<<"Data-2 : "<<data2<<endl;
        }
};

int main(){
    ABC obj(obj);
    obj.Print();
}