#include<iostream>
#include<cstring>
using namespace std;

#include "String.h"
#include "String.cpp"

int main(){
    char c[20];
    cout<<"Enter the String :"<<endl;
    cin>>c;
    String s1(c,strlen(c)+1);
    cout<<"S1 : ";
    s1.Print();

    int index;
    cout<<"Enter the Index :"<<endl;
    cin>>index;

    char ch = s1[index];
    if(ch==-1){
        cout<<"Invalid Index "<<endl;
    }
    else{
        cout<<ch<<endl;
    }
}