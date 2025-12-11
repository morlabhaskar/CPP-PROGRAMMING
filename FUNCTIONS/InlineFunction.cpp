//inline tells compiler to expand the function code at the call site.
//inline is an like an macro expansion but not an macro
#include<iostream>
using namespace std;
inline void Add(int a,int b){
    cout<<a+b<<endl;
}
int main(){
    int a=10,b=20;
    Add(a,b);
}
