#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the A value : "<<endl;
    cin>>a;
    cout<<"Enter the B value : "<<endl;
    cin>>b;
    try{
        if(b==0){
            throw b;
        }
        c=a/b;
        cout<<"Result : "<<c<<endl;
    }
    catch(int i){
        cout<<"Zero is Not Possible to Divide"<<endl;
    }
    cout<<"Program is Terminated"<<endl;
}