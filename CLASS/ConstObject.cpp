#include<iostream>
using namespace std;
class ABC{
    int data1;
    int data2;
    public:
        ABC(){
            cout<<"Enter Data1 :"<<endl;
            cin>>data1;
            cout<<"Enter Data2 :"<<endl;
            cin>>data2;
        }
        void Print()const{
            // data1++;//error becouse const function so not changes class members
            cout<<"Data1 is "<<data1<<endl;
            cout<<"Data2 is "<<data2<<endl;
        }
        void Inc(){
            data1++;
            data2++;
        }
};
int main(){
    ABC obj;
    obj.Print();
    obj.Inc();
    obj.Print();

    const ABC obj1;
    obj1.Print();
    // obj1.Inc();//error becouse const obj can't access the normal functions in side the class functions

}