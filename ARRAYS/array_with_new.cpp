#include<iostream>
using namespace std;
int *Input(int *p,int s){
    p=new int[s];
    for(int i=0;i<s;i++){
        cout<<"Enter Element : "<<i<<endl;
        cin>>p[i];
    }
    return p;
}
void Print(int *p,int s){
    cout<<"Array is : "<<endl;
    for(int i=0;i<s;i++){
        cout<<p[i]<<" "; 
    }
}
int main(){
    int *ptr=NULL;
    int size;
    cout<<"Enter Size of array : "<<endl;
    cin>>size;
    ptr=Input(ptr,size);
    Print(ptr,size);
    delete ptr;
    ptr=NULL;
}