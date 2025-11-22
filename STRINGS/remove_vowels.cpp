#include<iostream>
#include<cstring>
using namespace std;
bool is_vowel(char ch){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return true;
    }
    return false;
}
int main(){
    string str;
    cout<<"Enter a String :"<<endl;
    getline(cin,str);
    cout<<"String is : "<<str<<endl;
    int i;
    for(i=0;i<str.length();){
    // while(str[i]!='\0'){
        if(is_vowel(str[i])){
            str.erase(i,1);
            // memmove(&str[i],&str[i]+1,strlen(str)-i);
        }else{
            i++;
        }
    }
    cout<<"String is : "<<str;
}