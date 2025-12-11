//precision controls how many digits are printed for floating-point numbers (float, double).
#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter Number :"<<endl;
    cin>>num;
    cout<<fixed;
    cout.precision(3);
    cout<<num<<endl;
}