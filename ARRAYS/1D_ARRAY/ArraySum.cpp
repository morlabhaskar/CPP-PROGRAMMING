#include<iostream>
using namespace std;
int main(){
    int a[5],b[5],c[5],i;
    cout<<"Enter First Array :"<<endl;
    for(i=0 ;i<5 ;i++){
        cin>>a[i];
    }
    cout<<"Enter Second Array :"<<endl;
    for(i=0 ;i<5 ;i++){
        cin>>b[i];
    }
    for(i=0;i<5;i++){
        c[i] = a[i] + b[i];
        cout<<c[i]<<" ";
    }
}