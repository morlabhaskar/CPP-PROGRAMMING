#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[20];
    cout<<"Enter the String :"<<endl;
    cin.getline(str,20);//cin>>str;
    cout.write(str,strlen(str));//cout<<str;
}