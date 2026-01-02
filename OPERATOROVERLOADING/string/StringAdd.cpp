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
    cout<<"Enter the String :"<<endl;
    cin>>c;
    String s2(c,strlen(c)+1);
    String s3;
    s3 = s1 + s2;
    cout<<"S1 : ";
    s1.Print();
    cout<<"S2 : ";
    s2.Print();
    cout<<"S3 : ";
    s3.Print();
}