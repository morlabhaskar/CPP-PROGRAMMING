#include<iostream>
using namespace std;
// void reverse(string &str){
//     int len=str.size();
//     int left=0,right=len-1;
//     while(left<right){
//         if(str[left]!=str[right]){
//             char temp=str[left];
//             str[left]=str[right];
//             str[right]=temp;
//         }
//         left++;
//         right--;
//     }
// }
void reverse(string &str){
    int len=str.size();
    char *left=&str[0];
    char *right=&str[0]+len-1;
    while(left<right){
        if(*left != *right){
            char temp=*left;
            *left=*right;
            *right=temp;
        }
        left++;
        right--;
    }
}
int main(){
    string str;
    cout<<"Enter the String :"<<endl;
    getline(cin,str);
    cout<<"string : "<<str<<endl;
    reverse(str);
    cout<<"string : "<<str<<endl;
}
