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
    // string str;
    char *str=new char[100];
    cout<<"Enter a String :"<<endl;
    cin.getline(str,100);
    cout<<"String is : "<<str<<endl;
    int i=0;
    while(str[i]!='\0'){
        if(is_vowel(str[i])){
            memset(&str[i],'*',1);
        }
        i++;
    }
    cout<<"String is : "<<str<<endl;
    delete[] str;
}