#include<iostream>
using namespace std;
template<class type1,class type2>
void Print(type1 &a,type2 &b){
    cout<<a<<"  "<<b<<endl;
}
int main(){
    int num=10;
    char ch='a';
    char str[]="nani";
    string s="Bhaskar";
    double d=1.24;
    float f=4.2;
    Print(num,ch);
    Print(str,s);
    Print(f,d);
}