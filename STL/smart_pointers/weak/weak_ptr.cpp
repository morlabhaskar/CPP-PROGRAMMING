/*
Does NOT increase reference count.
Used with shared_ptr to avoid circular references.
*/
#include<iostream>
#include<memory>
int main(){
    std::shared_ptr<int> p1 = std::make_shared<int>(10);
    std::weak_ptr<int> wp = p1;
    std::cout<<"Shared Count : "<<p1.use_count()<<std::endl;//Not increase ref count
    std::cout<<*p1<<std::endl;//10
    if(auto p = wp.lock()){
        std::cout<<*p<<std::endl;//10
    }
}
/*
int
char
int
char
*/