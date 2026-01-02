#include<iostream>
using namespace std;
int main(){
    int id;
    // string name;
    char ch[20];
    cout<<"Enter the Id :"<<endl;
    cin>>id;

    // cout<<"Enter the Name ;"<<endl;
    // cin>>name;//break at space

    cin.ignore();//clear buffer
    cout<<"Enter the Name ;"<<endl;
    // getline(cin,name);//for c++ style
    cin.getline(ch,20);//for c style

    cout<<"ID : "<<id<<endl;
    cout<<"NAME : "<<ch<<endl;
}