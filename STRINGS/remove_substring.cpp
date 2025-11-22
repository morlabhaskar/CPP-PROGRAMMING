#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str,sub;
    cout<<"Enter a String :"<<endl;
    getline(cin,str);
    cout<<"Enter a Sub String :"<<endl;
    getline(cin,sub);
    int pos=0;
    while((pos=str.find(sub,pos))!=string::npos){
        str.erase(pos,sub.length());
    }
    cout<<"String is : "<<str;
}