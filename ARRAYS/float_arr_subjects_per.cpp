#include<iostream>
using namespace std;
float *Input(float *p,int sub){
    p=new float[sub];
    for(int i=0;i<sub;i++){
        cout<<"Enter Subject "<<(i+1)<<endl;
        cin>>p[i];
    }
    return p;
}
float Percentage(float *p,int sub){
    float total=0;
    for(int i=0;i<sub;i++){
        total += p[i];
    }
    return (sub/total)*100;
}
void Print(float *p,int sub,float per){
    cout<<"Subjects are :"<<endl;
    for(int i=0;i<sub;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    cout<<"Percentage is :"<<per;
}
int main(){
    float *ptr=NULL,per;
    int sub;
    cout<<"Enter Members : "<<endl;
    cin>>sub;
    ptr=Input(ptr,sub);
    per=Percentage(ptr,sub);
    Print(ptr,sub,per);
}