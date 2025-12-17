#include<iostream>
#include<cstring>
using namespace std;

#include "String.h"
#include "String.cpp"

int main(){
    char c[20];
    cout<<"Enter the String1 :"<<endl;
    cin>>c;
    String s1(c,strlen(c)+1);
    cout<<"Enter the String2 :"<<endl;
    cin>>c;
    String s2(c,strlen(c)+1);
    if(s1==s2){
        cout<<"Both are Equal"<<endl;
    }
    else{
        cout<<"Both are Not Equal"<<endl;
    }
    s1.Print();
    s2.Print();
}


