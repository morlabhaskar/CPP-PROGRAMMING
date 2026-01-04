#include<iostream>
using namespace std;
template<class T>
T getMax(T a,T b){
    return (a>b) ? a : b;
}
int main(){
    cout<<getMax<int>(10,20)<<endl;
    cout<<getMax<double>(10.23,20.56)<<endl;
    cout<<getMax<char>('c','A')<<endl;
}
