#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(40);
    d.push_back(50);
    
    for(int x : d){
        cout<< x << " ";
    }
}
/*
Insertion/deletion possible at both ends
Not fully contiguous
Faster than vector for front operations
*/
