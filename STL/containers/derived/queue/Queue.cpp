#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<"All Elements : "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
/*
Follows FIFO principle
Insert at rear, delete from front
Implemented using deque (default)
*/