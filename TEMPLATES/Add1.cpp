#include<iostream>
#include<typeinfo>
using namespace std;
template<class any>
any Add(any a,any b){
    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    return a+b;
}
int main(){
    cout<<Add(10,20)<<endl;
    cout<<Add(10.45,20.45)<<endl;
    cout<<Add(10.3f,20.3f)<<endl;
}