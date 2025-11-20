#include<iostream>
using namespace std;
int data=100;
int main(){
    int data=10;
    cout<<::data<<endl;//global variable
    cout<<data<<endl;//local variable
}