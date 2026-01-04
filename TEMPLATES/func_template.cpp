#include<iostream>
using namespace std;
template<class T>
T getMax(T a,T b){
    return (a>b) ? a : b;
}
int main(){
    cout<<getMax(10,20)<<endl;
    cout<<getMax(10.23,20.56)<<endl;
    cout<<getMax('c','A')<<endl;
}