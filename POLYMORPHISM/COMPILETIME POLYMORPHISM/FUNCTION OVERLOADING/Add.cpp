#include<iostream>
using namespace std;
int Add(int a,int b){
    return a+b;
}
int Add1(int a=0,int b=0){
    return a+b;
}
int main(){
    cout<<Add(10,20)<<endl;
    cout<<Add1(10)<<endl;
}