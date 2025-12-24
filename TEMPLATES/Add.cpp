#include<iostream>
using namespace std;
template<class add>
add Add(add a,add b){
    return a+b;
}
int main(){
    cout<<Add(10,20)<<endl;
    cout<<Add(10.3,20.56)<<endl;
    cout<<Add(10.4f,20.2f)<<endl;
}