#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> fl;
    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(30);
    
    for(int x : fl){
        cout<<x<<" ";
    }
}
/*
Only next pointer
Less memory than list
Supports only forward traversal
*/