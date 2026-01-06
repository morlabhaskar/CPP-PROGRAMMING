#include<iostream>
using namespace std;
template<class type>
class ABC{
    type a;
    type b;
    public :
        ABC(){
            cout<<"Enter a Vlaue :"<<endl;
            cin>>a;
            cout<<"Enter b Vlaue :"<<endl;
            cin>>b;
        }
        void Print(){
            cout<<a<<"  "<<b<<endl;
        }
        type add(){
            return a+b;
        }
};
int main(){
    ABC<int>a1;
    ABC<float>a2;
    cout<<"sizeof a1 : "<<sizeof(a1)<<endl;
    cout<<"sizeof a2 : "<<sizeof(a2)<<endl;
    a1.Print();
    a2.Print();
    cout<<a1.add()<<endl;
    cout<<a2.add()<<endl;
}