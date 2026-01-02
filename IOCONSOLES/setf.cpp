#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number :"<<endl;
    cin>>num;
    cout<<"Dec : "<<num<<endl;
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hex : "<<num<<endl;
    cout.setf(ios::oct,ios::basefield);
    cout<<"Oct : "<<num<<endl;
    cout.setf(ios::dec,ios::basefield);
    cout<<"Dec : "<<num<<endl;
}