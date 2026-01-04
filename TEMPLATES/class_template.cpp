#include<iostream>
using namespace std;
template<class T>
class myPair{
    T a,b;
    public:
        myPair(T x,T y){
            a=x;
            b=y;
        }
        T getmax();
};
template<class T>
T myPair<T>::getmax(){
    T val = (a>b) ? a : b;
    return val;
}
int main(){
    myPair<int> obj(10,20);
    cout<<obj.getmax()<<endl;
}
