#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number :"<<endl;
    cin>>num;
    cout.width(10);//default also left only
    cout.left;//left space
    cout<<num;
}