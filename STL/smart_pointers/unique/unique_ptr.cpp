/*
unique_ptr is a smart pointer that provides exclusive ownership of a dynamically allocated object.
only one pointer owns the resource.
cannot be copied, only moved.
*/
#include<iostream>
#include<memory>
using namespace std;
int main(){
    unique_ptr<int> p1 = make_unique<int>(10);
    cout<<"p1 : "<<*p1<<endl;
    // unique_ptr<int> p2 = p1;//error,Because two pointers cannot own same resource
    unique_ptr<int> p2 = move(p1);//p1 becomes nullptr
    if(!p1){
        cout<<"Now p1 is Empty, Becouse p1 moves to p2"<<endl;
    }
    cout<<"p2 : "<<*p2<<endl;
}
