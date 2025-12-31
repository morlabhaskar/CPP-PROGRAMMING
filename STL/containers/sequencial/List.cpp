#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(10);
    l.push_front(20);
    l.push_back(30);
    l.push_front(40);
    
    for(int x : l){
        cout<<x<<" ";
    }
}
/*
Each node has previous and next pointers
No random access
Faster insertion/deletion anywhere
*/


