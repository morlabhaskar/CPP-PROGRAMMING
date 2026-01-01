#include<iostream>
using namespace std;
namespace ABC{
    int data=10;
    char str[20]="embedded";
    struct Stu{
        int r;
        string s;
    }var;
}
int main(){
    ABC::var.r=120;
    ABC::var.s="vector";
    cout<<ABC::data<<endl;
    cout<<ABC::str<<endl;
    cout<<ABC::var.r<<endl;
    cout<<ABC::var.s<<endl;
}