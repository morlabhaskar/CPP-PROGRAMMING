#include<iostream>
using namespace std;
template<class T>
class Container{
    T ele;
    public:
        Container(T a){
            ele=a;
        }
        T increase(){
            return ++ele;
        }
};
template<>
class Container<char>{
    char ele;
    public:
        Container(char a){
            ele=a;
        }
        char upperCase(){
            if((ele>='a')&&(ele<='z')){
                ele += 'A'-'a';
            }
            return ele;
        }
};
int main(){
    Container<int> iobj(10);
    Container<char> cobj('j');
    cout<<iobj.increase()<<endl;
    cout<<cobj.upperCase()<<endl;
}