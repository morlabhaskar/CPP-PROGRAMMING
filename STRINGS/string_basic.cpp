#include<iostream>
#include<string.h>
using namespace std;
//c style string
// int main(){
//     char s1[20],s2[20];
//     cout<<"Enter a String :"<<endl;
//     cin>>s1;
//     strcpy(s2,s1);
//     cout<<"s1 :"<<s1<<endl;
//     cout<<"s2 :"<<s2<<endl;
// }

//cpp style string
int main(){
    string s1,s2;
    cout<<"Enter a String :"<<endl;
    cin>>s1;
    s2=s1;
    cout<<"s1 :"<<s1<<endl;
    cout<<"s2 :"<<s2<<endl;
}