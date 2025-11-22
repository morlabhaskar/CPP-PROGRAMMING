#include<iostream>
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
    int count=0;
    cout<<"Enter a String :"<<endl;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(is_vowel(str[i])){
            count++;
        }
    }
    cout<<"Vowels Count in Given String is : "<<count;
}