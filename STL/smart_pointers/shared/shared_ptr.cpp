/*
Multiple pointers can share ownership.
Uses reference counting.
Deletes memory when last pointer is destroyed.
Use when: Multiple parts of program share same resource.
*/
#include<iostream>
#include<memory>
int main(){
    std::shared_ptr<int> p1 = std::make_shared<int>(10);
    std::shared_ptr<int> p2 = p1;
    std::shared_ptr<int> p3 = p1;
    std::cout<<p1.use_count()<<std::endl;//print count of how many members shared same resource
    std::cout<<p2.use_count()<<std::endl;
}