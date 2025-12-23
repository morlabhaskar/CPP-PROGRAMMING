#include<iostream>
using namespace std;

template<class type1,class type2>
void printme(type1 &a,type2 &b){
    cout<<"Generic function :"<<endl;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int num=100;
    char c='a';
    char str[]="Vector";
    string s="embedded";
    double d=1.23;
    float f=4.3;
    printme(num,str);
    printme(c,d);
    printme(f,s);
}