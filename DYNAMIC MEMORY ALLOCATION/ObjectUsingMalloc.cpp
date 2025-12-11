#include<iostream>
using namespace std;
class ABC{
    int data1,data2;
    public:
        ABC(){
            cout<<"In Default Cons :"<<endl;
            cout<<"Enter Data1 :"<<endl;
            cin>>data1;
            cout<<"Enter Data2 :"<<endl;
            cin>>data2;
        }
        ABC(int a,int b){
            cout<<"In Parameteraised Cons :"<<endl;
            data1=a;
            data2=b;
        }
        ABC(ABC & a){
            cout<<"In Copy Cons :"<<endl;
            data1=a.data1;
            data2=a.data2;
        }
        void Print(){
            cout<<"Data-1 : "<<data1<<endl;
            cout<<"Data-2 : "<<data2<<endl;
        }
        ~ABC(){
            cout<<"ABC Deconstructor"<<endl;
        }
};

int main(){
    ABC *p;
    p = (ABC *)malloc(sizeof(ABC));  //creates te uninitialised ABC object dynamically with Default Cons
    p->Print();

    // ABC *q;
    // q = (ABC *)malloc(sizeof(ABC(10,20)));// Not Possible parameteraised cons using malloc i.e., error
    // q->Print();

    // ABC *r;
    // r = new ABC(*r);//Not Possible copy cons using malloc i.e., error
    // r->Print();

    free(p);
}