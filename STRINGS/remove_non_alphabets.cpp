#include<iostream>
#include<cstring>
using namespace std;
bool is_alpha(char ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')) return true;
    return false;
}
int main(){
    string str;
    cout<<"Enter a String :"<<endl;
    getline(cin,str);
    cout<<"String is : "<<str<<endl;
    int i;
    for(i=0;i<str.length();){
        if(is_alpha(str[i])==0){
            str.erase(i,1);
        }else{
            i++;
        }
    }
    cout<<"String is : "<<str;
}