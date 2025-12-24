#include<iostream>
using namespace std;
struct St{
    int id;
    char name[20];
};
int main(){
    int n1=10,n2=20;
    char ch1='a',ch2='b';
    float f1=2.3,f2=5.4;
    struct St v1={10,"Bhaskar"};
    struct St v2={11,"Ravi"};
    cout<<"n1 : "<<n1<<"   n2 : "<<n2<<endl;
    swap(n1,n2);
    cout<<"n1 : "<<n1<<"   n2 : "<<n2<<endl;
    cout<<"ch1 : "<<ch1<<"   ch2 : "<<ch2<<endl;
    swap(ch1,ch2);
    cout<<"ch1 : "<<ch1<<"   ch2 : "<<ch2<<endl;
    cout<<"f1 : "<<f1<<"   f2 : "<<f2<<endl;
    swap(f1,f2);
    cout<<"f1 : "<<f1<<"   f2 : "<<f2<<endl;

    cout<<"v1 : "<<v1.id<<"  "<<v1.name<<endl;
    cout<<"v2 : "<<v2.id<<"  "<<v2.name<<endl;
    swap(v1,v2);
    cout<<"v1 : "<<v1.id<<"  "<<v1.name<<endl;
    cout<<"v2 : "<<v2.id<<"  "<<v2.name<<endl;
}