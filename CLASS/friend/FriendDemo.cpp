#include<iostream>
using namespace std;
class ABC{
    int a,b,per;
    public:
        ABC(){
            cout<<"Enter a Value :"<<endl;
            cin>>a;
            cout<<"Enter b Value :"<<endl;
            cin>>b;
            per = 0;
        }
        void Print(){
            cout<<"a : "<<a<<endl;
            cout<<"b : "<<b<<endl;
            cout<<"Percentage : "<<per<<endl;
        }
        friend void sum(ABC);
};
void sum(ABC obj){
    cout<<"Sum : "<<obj.a + obj.b<<endl;
}
int main(){
    ABC obj;
    sum(obj);
    obj.Print();
}