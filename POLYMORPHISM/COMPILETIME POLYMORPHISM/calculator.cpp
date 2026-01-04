#include<iostream>
using namespace std;
template<typename any>
class Calculator{
    public:
        any add(any a,any b){
            return a+b;
        }
        any sub(any a,any b){
            return a-b;
        }
        any mul(any a,any b){
            return a*b;
        }
        any div(any a,any b){
            if(b==0){
                cout<<"Division by zero Error"<<endl;
                return 0;
            }
            return a/b;
        }
};

int main(){
    Calculator<int> c1;
    cout<<c1.add(10,20)<<endl;
    cout<<c1.sub(20,10)<<endl;
    cout<<c1.mul(10,20)<<endl;
    cout<<c1.div(20,10)<<endl;

    Calculator<float> c2;
    cout<<c2.add(10.54,20.56)<<endl;
    cout<<c2.sub(20.45,10.90)<<endl;
    cout<<c2.mul(10.80,20.9)<<endl;
    cout<<c2.div(20.12,10.2)<<endl;
}