#include<iostream>
using namespace std;
template<class type1,class type2>
class ABC{
    type1 a;
    type2 b;
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
};
int main(){
    ABC<int,char>a1;
    ABC<float,string>a2;
    cout<<"sizeof a1 : "<<sizeof(a1)<<endl;
    cout<<"sizeof a2 : "<<sizeof(a2)<<endl;
    a1.Print();
    a2.Print();
}